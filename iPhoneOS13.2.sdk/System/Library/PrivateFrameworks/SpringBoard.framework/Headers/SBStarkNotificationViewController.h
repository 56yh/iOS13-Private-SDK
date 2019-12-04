//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBCollectionViewCellDelegate-Protocol.h>
#import <SpringBoard/SBStarkBannerTargetObserver-Protocol.h>
#import <SpringBoard/UICollectionViewDataSource-Protocol.h>
#import <SpringBoard/UICollectionViewDelegate-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class CPSTemplateBannerController, NSArray, NSString, SBCarBannerNotificationView, SBStarkAlertItemBannerSource, SBStarkBannerCell, SBStarkBannerTarget, SBStarkNotificationBannerSource, SBStarkNotificationLayout, SBStarkNotificationSystemGestureManager, SBUIBannerContext, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol SBStarkNotificationViewControllerDelegate, SBStarkNotificationsConfiguring;

@interface SBStarkNotificationViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate>
{
    id <SBStarkNotificationsConfiguring> _configuration;
    SBStarkNotificationSystemGestureManager *_systemGestureManager;
    _Bool _dismissingForSystemGesture;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    SBStarkBannerTarget *_bannerTarget;
    SBStarkAlertItemBannerSource *_alertItemBannerSource;
    SBStarkNotificationBannerSource *_notificationBannerSource;
    CPSTemplateBannerController *_templateBannerController;
    SBUIBannerContext *_currentContext;
    NSArray *_currentSubActionLabels;
    SBStarkBannerCell *_currentCell;
    int _state;
    SBStarkNotificationLayout *_notificationsLayout;
    SBCarBannerNotificationView *_notificationsView;
    UITapGestureRecognizer *_cancelNotificationTapGestureRecognizer;
    UISwipeGestureRecognizer *_dismissNotificationTouchpadSwipeGestureRecognizer;
    _Bool _invalid;
    id <SBStarkNotificationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBStarkNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)starkBannerTarget:(id)arg1 didChangeContextWithDismissReason:(int)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_performSwipeGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (void)_performCancelNotificationTapGesture:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_notificationBannerSource;
- (void)setSuspensionReasons:(unsigned long long)arg1 cancellingCurrent:(_Bool)arg2;
- (_Bool)handleMenuEvent;
@property(nonatomic, setter=_setState:) int state;
- (void)loadView;
- (void)dealloc;
- (void)invalidate;
- (id)initWithConfiguration:(id)arg1 systemGestureManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

