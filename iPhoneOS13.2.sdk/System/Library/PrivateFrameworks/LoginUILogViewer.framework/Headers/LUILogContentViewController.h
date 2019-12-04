//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <LoginUILogViewer/UICollectionViewDataSource-Protocol.h>
#import <LoginUILogViewer/UICollectionViewDelegate-Protocol.h>
#import <LoginUILogViewer/UIGestureRecognizerDelegate-Protocol.h>

@class LUILogLocatorView, LUILogOptionsView, NSArray, NSString, UIActivityIndicatorView, UILabel, UIPanGestureRecognizer, UITextView, UIView;
@protocol LUILogContentViewControllerDelegate;

@interface LUILogContentViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    UITextView *_textView;
    id <LUILogContentViewControllerDelegate> _delegate;
    LUILogOptionsView *_logOptionsView;
    LUILogLocatorView *_logLocatorView;
    UIActivityIndicatorView *_spinner;
    NSArray *_screenshotItems;
    UIView *_textViewHolderView;
    UIPanGestureRecognizer *_panGesture;
    UILabel *_scrollIndicatorView;
}

@property(retain, nonatomic) UILabel *scrollIndicatorView; // @synthesize scrollIndicatorView=_scrollIndicatorView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIView *textViewHolderView; // @synthesize textViewHolderView=_textViewHolderView;
@property(retain, nonatomic) NSArray *screenshotItems; // @synthesize screenshotItems=_screenshotItems;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) LUILogLocatorView *logLocatorView; // @synthesize logLocatorView=_logLocatorView;
@property(retain, nonatomic) LUILogOptionsView *logOptionsView; // @synthesize logOptionsView=_logOptionsView;
@property(nonatomic) __weak id <LUILogContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)downArrowButtonTapped:(id)arg1;
- (void)upArrowButtonTapped:(id)arg1;
- (void)screenshotButtonTapped:(id)arg1;
- (void)logOptionButtonTapped:(id)arg1;
- (void)_applyScreenShotAnimation;
- (struct _NSRange)_visibleRangeOfTextView:(id)arg1;
- (id)_generateScreenshotItem;
- (void)clearScreenshots;
- (id)_dateWithPercentage:(double)arg1;
- (id)_createLogLocatorView;
- (id)_createLogTextView;
- (id)_createLogOptionsView;
- (void)showSpinner:(_Bool)arg1;
- (void)enableTimeConsumingOptions:(_Bool)arg1;
- (void)showLogTextView;
- (void)showLogOptionsView;
- (void)_setupTextViewGesture;
- (void)_setupButtonActions;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

