//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CEKBadgeViewDelegate-Protocol.h>

@class CAMElapsedTimeView, CAMFlashBadge, CAMFocusLockBadge, CAMLivePhotoBadge, NSMutableDictionary, NSString;
@protocol CAMBadgeTrayDelegate;

@interface CAMBadgeTray : UIView <CEKBadgeViewDelegate>
{
    id <CAMBadgeTrayDelegate> _delegate;
    unsigned long long _visibleBadges;
    NSString *_contentSize;
    NSMutableDictionary *__badgeMap;
}

@property(readonly, nonatomic) NSMutableDictionary *_badgeMap; // @synthesize _badgeMap=__badgeMap;
@property(retain, nonatomic) NSString *contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) unsigned long long visibleBadges; // @synthesize visibleBadges=_visibleBadges;
@property(nonatomic) __weak id <CAMBadgeTrayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (void)_updateBadgesVisibilityForVisibleBadges:(unsigned long long)arg1;
- (void)_loadBadgesIfNeededForTypes:(unsigned long long)arg1;
- (void)_forBadgeTypeInBadgeTypes:(unsigned long long)arg1 do:(id /* block */)arg2;
- (unsigned long long)_badgeFontStyle;
- (id)_createControlForType:(unsigned long long)arg1;
@property(readonly, nonatomic) CAMElapsedTimeView *elapsedTimeView;
@property(readonly, nonatomic) CAMFocusLockBadge *focusLockBadge;
@property(readonly, nonatomic) CAMLivePhotoBadge *livePhotoBadge;
@property(readonly, nonatomic) CAMFlashBadge *flashBadge;
- (void)setVisibleBadges:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_layoutBadges:(unsigned long long)arg1 withVisibleBadges:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

