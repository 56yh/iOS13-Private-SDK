//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInputViewController.h>

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, TUISystemInputAssistantLayoutSplit, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantView, UITextInputAssistantItem, UIView, UIViewController;
@protocol UIPredictiveViewController;

__attribute__((visibility("hidden")))
@interface UISystemInputAssistantViewController : UIInputViewController <UIPopoverPresentationControllerDelegate>
{
    UIViewController<UIPredictiveViewController> *_centerViewController;
    UIView *_popoverSourceView;
    UITextInputAssistantItem *_observedInputAssistantItem;
    NSMutableDictionary *_cachedPredictiveViewControllers;
    TUISystemInputAssistantLayoutStandard *_standardAssistantViewLayout;
    TUISystemInputAssistantLayoutSplit *_splitAssistantViewLayout;
}

+ (double)preferredHeightForTraitCollection:(id)arg1;
+ (_Bool)_requiresProxyInterface;
@property(retain, nonatomic) TUISystemInputAssistantLayoutSplit *splitAssistantViewLayout; // @synthesize splitAssistantViewLayout=_splitAssistantViewLayout;
@property(retain, nonatomic) TUISystemInputAssistantLayoutStandard *standardAssistantViewLayout; // @synthesize standardAssistantViewLayout=_standardAssistantViewLayout;
@property(retain, nonatomic) NSMutableDictionary *cachedPredictiveViewControllers; // @synthesize cachedPredictiveViewControllers=_cachedPredictiveViewControllers;
@property(nonatomic) __weak UITextInputAssistantItem *observedInputAssistantItem; // @synthesize observedInputAssistantItem=_observedInputAssistantItem;
@property(nonatomic) __weak UIView *popoverSourceView; // @synthesize popoverSourceView=_popoverSourceView;
@property(retain, nonatomic) UIViewController<UIPredictiveViewController> *centerViewController; // @synthesize centerViewController=_centerViewController;
- (id)candidateViewController;
- (id)predictionViewController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)systemInputAssistantView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromView:(id)arg3;
- (id)_popoverViewControllerForBarButtonItemGroup:(id)arg1;
- (void)_responderCapabilitiesChangedNotification:(id)arg1;
- (void)_responderChangedNotification:(id)arg1;
- (void)_updateCenterViewWidthForInterfaceOrientation:(long long)arg1;
- (double)_centerViewWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2;
- (double)_buttonBarWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2;
- (void)_didChangePlacementOrInputSourceNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_beginObservingInputAssistantItemForRelevantItemChanges:(id)arg1;
- (void)_didReceiveTextEffectsRotationNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_registerForAssistantViewNotifications;
- (_Bool)_shouldShowExpandableButtonBarItemsForResponder:(id)arg1;
- (_Bool)_allowedToShowBarButtonItemsInline;
- (void)_updateSystemInputAssistantViewStylingForInputAssistantItem:(id)arg1;
- (id)_defaultTintColor;
- (void)setInputAssistantButtonItemsForResponder:(id)arg1;
@property(readonly, nonatomic) TUISystemInputAssistantView *systemInputAssistantView;
- (void)updateCenterViewVisibilityStateForInputDelegate:(id)arg1;
- (void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg1;
- (void)_collapseBarItems;
- (void)_expandBarItems;
- (void)_showCandidates;
- (_Bool)layoutHasBuiltinAssistantView;
- (_Bool)shouldBeShownForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (_Bool)_centerPredictionViewVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (_Bool)_assistantItemsVisibleForResponder:(id)arg1;
- (_Bool)_isAssistantPreferenceEnabled;
- (id)_currentInputDelegate;
- (id)_inputDelegateAsResponder:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

