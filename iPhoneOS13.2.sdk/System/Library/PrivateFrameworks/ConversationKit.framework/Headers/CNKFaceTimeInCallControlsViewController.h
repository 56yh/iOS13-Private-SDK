//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIView;
@protocol CNKFaceTimeInCallControlsViewControllerDelegate;

@interface CNKFaceTimeInCallControlsViewController : UIViewController
{
    // Error parsing type: , name: groupName
    // Error parsing type: , name: representedLegacyCallIdentifier
    // Error parsing type: , name: controlsButtonRowCount
    // Error parsing type: , name: tableViewSeparator
    // Error parsing type: , name: participantsTableViewController
    // Error parsing type: , name: localParticipant
    // Error parsing type: , name: viewContent
    // Error parsing type: , name: mode
    // Error parsing type: , name: topInset
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: audioIsEnabled
    // Error parsing type: , name: videoIsEnabled
    // Error parsing type: , name: effectsAreAvailable
    // Error parsing type: , name: effectsAreEnabled
    // Error parsing type: , name: shouldShowJoinButton
    // Error parsing type: , name: delegate
    // Error parsing type: , name: participantDelegate
    // Error parsing type: , name: participantsViewControllerDelegate
}

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)accessibilityDisableVideoLabel;
- (id)accessibilityDisableVideoButton;
- (id)accessibilityRouteLabel;
- (id)accessibilityRouteButton;
- (id)accessibilityMuteAudioLabel;
- (id)accessibilityMuteAudioButton;
- (id)accessibilityCameraLabel;
- (id)accessibilityCameraButton;
- (id)accessibilityEffectsLabel;
- (id)accessibilityEffectsButton;
- (id)accessibilityJoinLeaveButton;
- (id)accessibilityHotdog;
- (void)updateToRepresentLegacyCall:(id)arg1;
- (void)updateAudioRouteButtonFor:(id)arg1;
- (void)updateControlsVisibilityForExpandedState:(_Bool)arg1;
- (void)didTapAudioRouteButton:(id)arg1;
- (void)didTapMuteButton:(id)arg1;
- (void)didTapToggleCameraButton:(id)arg1;
- (void)didTapJoinLeaveButton:(id)arg1;
- (void)didTapFlipCameraButton:(id)arg1;
- (void)didTapEffectsButton:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)embedEffectsBrowserViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveCall:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic) __weak id <CNKFaceTimeInCallControlsViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) UIView *audioButton;
@property(nonatomic) _Bool shouldShowJoinButton; // @synthesize shouldShowJoinButton;
@property(nonatomic) _Bool effectsAreEnabled; // @synthesize effectsAreEnabled;
@property(nonatomic) _Bool effectsAreAvailable; // @synthesize effectsAreAvailable;
@property(nonatomic) _Bool videoIsEnabled; // @synthesize videoIsEnabled;
@property(nonatomic) _Bool audioIsEnabled; // @synthesize audioIsEnabled;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded;

@end
