//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSDisplayObserving-Protocol.h>
#import <SpringBoard/SBStarkNotificationViewControllerDelegate-Protocol.h>
#import <SpringBoard/_UISceneComponentProviding-Protocol.h>
#import <SpringBoard/_UISceneSettingsDiffAction-Protocol.h>

@class NSString, SBStarkNotificationConfiguration, SBStarkNotificationViewController, SBStarkNotificationWindow, UIScene;
@protocol BSInvalidatable;

@interface SBStarkNotificationSceneComponent : NSObject <SBStarkNotificationViewControllerDelegate, _UISceneSettingsDiffAction, FBSDisplayObserving, _UISceneComponentProviding>
{
    UIScene *_scene;
    SBStarkNotificationConfiguration *_configuration;
    SBStarkNotificationWindow *_window;
    SBStarkNotificationViewController *_viewController;
    _Bool _observingDisplays;
    _Bool _connected;
    id <BSInvalidatable> _deferringRule;
}

- (void)_updateDynamicConfigurationOfScene:(id)arg1 withSettings:(id)arg2 transition:(id)arg3;
- (void)_updateWindow;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_sceneWillInvalidate:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (id)initWithScene:(id)arg1;
- (void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2;
- (id)bannerSource;
- (id)configuration;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

