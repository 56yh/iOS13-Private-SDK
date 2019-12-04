//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKScrollViewController.h>

#import <ChatKit/IMChatSendProgressDelegate-Protocol.h>
#import <ChatKit/IMSystemMonitorListener-Protocol.h>

@class CKConversation, CKFullScreenBalloonViewController, CKScheduledUpdater, CKTranscriptCollectionView, CKTranscriptCollectionViewController, IMChat, NSString, STLockoutViewController, UIProgressView;
@protocol CKCoreChatControllerDelegate;

@interface CKCoreChatController : CKScrollViewController <IMChatSendProgressDelegate, IMSystemMonitorListener>
{
    _Bool _sendingMessage;
    _Bool _viewIsVisible;
    _Bool _transitionedFromComposing;
    _Bool _userInitiatedTranscriptPush;
    _Bool _initialLayoutComplete;
    _Bool _ignoreLastBalloonVisibleInMarkAsReadCheck;
    _Bool _disableAnimationsUnderTest;
    _Bool _isShowingLockoutView;
    id <CKCoreChatControllerDelegate> _delegate;
    CKConversation *_conversation;
    CKTranscriptCollectionViewController *_collectionViewController;
    CKScheduledUpdater *_refreshServiceForSendingUpdater;
    UIProgressView *_progressBar;
    double _sendProgress;
    unsigned long long _sendProgressSendCount;
    unsigned long long _sendProgressTotalCount;
    CKFullScreenBalloonViewController *_fullScreenBalloonViewController;
    id /* block */ _overrideScrollBlock;
    STLockoutViewController *_lockoutViewController;
}

@property(nonatomic) _Bool isShowingLockoutView; // @synthesize isShowingLockoutView=_isShowingLockoutView;
@property(retain, nonatomic) STLockoutViewController *lockoutViewController; // @synthesize lockoutViewController=_lockoutViewController;
@property(copy, nonatomic) id /* block */ overrideScrollBlock; // @synthesize overrideScrollBlock=_overrideScrollBlock;
@property(nonatomic) _Bool disableAnimationsUnderTest; // @synthesize disableAnimationsUnderTest=_disableAnimationsUnderTest;
@property(retain, nonatomic) CKFullScreenBalloonViewController *fullScreenBalloonViewController; // @synthesize fullScreenBalloonViewController=_fullScreenBalloonViewController;
@property(nonatomic) unsigned long long sendProgressTotalCount; // @synthesize sendProgressTotalCount=_sendProgressTotalCount;
@property(nonatomic) unsigned long long sendProgressSendCount; // @synthesize sendProgressSendCount=_sendProgressSendCount;
@property(nonatomic) double sendProgress; // @synthesize sendProgress=_sendProgress;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) CKScheduledUpdater *refreshServiceForSendingUpdater; // @synthesize refreshServiceForSendingUpdater=_refreshServiceForSendingUpdater;
@property(nonatomic) _Bool ignoreLastBalloonVisibleInMarkAsReadCheck; // @synthesize ignoreLastBalloonVisibleInMarkAsReadCheck=_ignoreLastBalloonVisibleInMarkAsReadCheck;
@property(nonatomic) _Bool initialLayoutComplete; // @synthesize initialLayoutComplete=_initialLayoutComplete;
@property(nonatomic) _Bool userInitiatedTranscriptPush; // @synthesize userInitiatedTranscriptPush=_userInitiatedTranscriptPush;
@property(nonatomic) _Bool transitionedFromComposing; // @synthesize transitionedFromComposing=_transitionedFromComposing;
@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic, getter=isSendingMessage) _Bool sendingMessage; // @synthesize sendingMessage=_sendingMessage;
@property(retain, nonatomic) CKTranscriptCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak id <CKCoreChatControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)systemApplicationDidResume;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
- (struct CGRect)fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(_Bool)arg2;
- (void)_dismissFullScreenBubbleViewControllerWithSendAnimation:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1 showActionMenu:(_Bool)arg2;
- (void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(_Bool)arg2;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(_Bool)arg2;
- (id)textInputContextIdentifier;
- (void)_refreshActiveChat:(id)arg1;
- (void)significantTimeChange;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_transferRestoredNotification:(id)arg1;
- (void)_increaseContrastDidChangeNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_transferFinishedNotification:(id)arg1;
- (void)_chatRegistryDidReloadNotification:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_displayNameUpdatedNotification:(id)arg1;
- (void)_downgradeStateChangedNotification:(id)arg1;
- (void)_preferredServiceChangedNotification:(id)arg1;
- (void)preferredSendingServiceChanged;
- (void)registerNotifications;
- (void)registerNotificationsForConversation:(id)arg1;
- (void)_updateNavigationButtons;
- (void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(_Bool)arg6;
- (void)_deregisterSendProgressDelegate;
- (void)_registerSendProgressDelegate;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (void)setupScrollingForKeyboardInteraction;
- (void)keyboardWillHideViaGesture;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (id)scrollView;
- (void)_markAsReadIfNecessary;
- (_Bool)isSafeToMarkAsRead;
- (void)_didSendCompositionInConversation:(id)arg1;
- (void)_willSendComposition:(id)arg1 inConversation:(id)arg2;
- (void)_refreshServiceForSending;
- (void)refreshServiceForSending;
- (void)_updateForNewPreferredService;
- (struct CGRect)gradientFrameWithInsets:(struct UIEdgeInsets)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(id /* block */)arg4;
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(_Bool)arg4;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (_Bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (id)traitCollectionForTranscriptCollectionViewController:(id)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
- (void)_handleTapEventForBalloonView:(id)arg1 atIndexPath:(id)arg2 showActionMenu:(_Bool)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_setConversationDeferredSetup;
- (void)_removeExistingCollectionViewController;
- (id)_handleIDsForCurrentConversation;
@property(readonly, nonatomic) double gradientBottomPlaceholderHeight;
@property(readonly, nonatomic) double balloonMaxWidth;
@property(readonly, nonatomic) IMChat *chat;
- (id)gradientReferenceView;
@property(readonly, nonatomic) _Bool shouldDismissAfterSend;
@property(readonly, nonatomic) CKTranscriptCollectionView *collectionView;
- (void)setupStateForLaunchURL:(id)arg1;
- (void)sendComposition:(id)arg1;
- (void)prepareForSuspend;
- (void)_performResume;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)systemApplicationWillEnterForeground;
- (void)parentControllerDidBecomeActive;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithConversation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

