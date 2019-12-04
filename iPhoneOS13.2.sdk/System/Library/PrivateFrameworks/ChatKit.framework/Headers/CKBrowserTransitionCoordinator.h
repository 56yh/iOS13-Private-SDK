//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKFullScreenAppViewControllerDelegate-Protocol.h>

@class CKConversation, CKFullScreenAppViewController, NSString, UINavigationController, UIViewController, UIWindow;
@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate;

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate>
{
    _Bool _expanded;
    _Bool _underTest;
    id <CKBrowserTransitionCoordinatorDelegate> _delegate;
    long long _currentConsumer;
    CKFullScreenAppViewController *_fullscreenViewController;
    UIViewController *_presentingViewController;
    CKConversation *_conversation;
    id <CKBrowserViewControllerSendDelegate> _sendDelegate;
    UIViewController<CKBrowserViewControllerProtocol> *_currentBrowser;
    UIWindow *_appWindow;
    UIWindow *_previousKeyWindow;
    UIWindow *_preModalKeyWindow;
    long long _lastTransitionReason;
    UIWindow *_modalAppWindow;
    UINavigationController *_presentedModalBrowserNavigationController;
    UIViewController<CKBrowserViewControllerProtocol> *_currentModalBrowser;
    struct CGRect _cachedCompactFrame;
}

@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentModalBrowser; // @synthesize currentModalBrowser=_currentModalBrowser;
@property(retain, nonatomic) UINavigationController *presentedModalBrowserNavigationController; // @synthesize presentedModalBrowserNavigationController=_presentedModalBrowserNavigationController;
@property(retain, nonatomic) UIWindow *modalAppWindow; // @synthesize modalAppWindow=_modalAppWindow;
@property(nonatomic) long long lastTransitionReason; // @synthesize lastTransitionReason=_lastTransitionReason;
@property(nonatomic) struct CGRect cachedCompactFrame; // @synthesize cachedCompactFrame=_cachedCompactFrame;
@property(nonatomic) __weak UIWindow *preModalKeyWindow; // @synthesize preModalKeyWindow=_preModalKeyWindow;
@property(nonatomic) __weak UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
@property(retain, nonatomic) UIWindow *appWindow; // @synthesize appWindow=_appWindow;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser; // @synthesize currentBrowser=_currentBrowser;
@property(nonatomic) _Bool underTest; // @synthesize underTest=_underTest;
@property(nonatomic) __weak id <CKBrowserViewControllerSendDelegate> sendDelegate; // @synthesize sendDelegate=_sendDelegate;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) CKFullScreenAppViewController *fullscreenViewController; // @synthesize fullscreenViewController=_fullscreenViewController;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long currentConsumer; // @synthesize currentConsumer=_currentConsumer;
@property(nonatomic) __weak id <CKBrowserTransitionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setExpanded:(_Bool)arg1 withReason:(long long)arg2;
- (id)appIconOverride;
- (id)appTitleOverride;
- (_Bool)shouldAlwaysShowAppTitle;
- (_Bool)fullscreenAppViewControllerShouldDismissOnDragSuccess:(id)arg1;
- (double)fullscreenAppViewControllerCollapsedContentHeight:(id)arg1;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (void)dismissCurrentFullScreenModalAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
@property(readonly, nonatomic, getter=isPresentingFullScreenModal) _Bool presentingFullScreenModal;
- (void)presentPluginFullScreenModal:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)dismissCurrentFullscreenBrowserAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)arg1;
- (id)requestOwnershipOfBrowserForConsumer:(long long)arg1;
- (_Bool)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2;
- (id)transitionViewController;
- (_Bool)usePresentationWindowDuringTransition;
- (_Bool)isHostingRemoteKeyboardView;
@property(readonly, nonatomic) _Bool wasCurrentBrowserExpanded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

