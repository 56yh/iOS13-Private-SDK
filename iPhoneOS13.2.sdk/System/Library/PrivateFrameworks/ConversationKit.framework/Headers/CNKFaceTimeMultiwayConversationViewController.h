//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSTimer, TUCall;
@protocol CNKFaceTimeMultiwayConversationViewControllerDelegate;

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController
{
    // Error parsing type: , name: conversationController
    // Error parsing type: , name: mostActiveParticipantsController
    // Error parsing type: , name: avcEffects
    // Error parsing type: , name: effectsCaptureInfo
    // Error parsing type: , name: viewContent
    // Error parsing type: , name: inCallControlsDismissTimer
    // Error parsing type: , name: hideInactiveParticipantsTimer
    // Error parsing type: , name: effectsLayoutController
    // Error parsing type: , name: pipZoomControl
    // Error parsing type: , name: shouldShowZoomControls
    // Error parsing type: , name: deviceOrientation
    // Error parsing type: , name: delegate
    // Error parsing type: , name: effectsEnabled
    // Error parsing type: , name: isPipped
}

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)accessibilityConstraintController;
- (void)setControllerIsPipped:(_Bool)arg1;
- (void)hideEffectsBrowser;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)openMessagesConversation;
- (void)muteVideo;
- (void)toggleVideoMute;
- (void)toggleAudioMute;
- (void)restartAutoHideInCallControlsDrawerTimer;
- (void)updateViewConstraints;
- (_Bool)_canShowWhileLocked;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 stagingAreaViewController:(id)arg2;
@property(nonatomic, readonly) UIViewController *pipViewController;
@property(nonatomic) _Bool effectsEnabled; // @synthesize effectsEnabled;
@property(nonatomic) __weak id <CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation;
@property(nonatomic, readonly) _Bool wantsApplicationDismissalStyle;
@property(nonatomic, readonly) TUCall *call;
@property(nonatomic, retain) NSTimer *inCallControlsDismissTimer; // @synthesize inCallControlsDismissTimer;

@end

