//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

@interface _UIWindowSceneFBSSceneTransitionContextDrivenLifecycleSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsApplicationLifecycleEventDiffInspector;
}

@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsApplicationLifecycleEventDiffInspector; // @synthesize sceneSettingsApplicationLifecycleEventDiffInspector=_sceneSettingsApplicationLifecycleEventDiffInspector;
- (void)_animateUserInterfaceStyleChangeInScene:(id)arg1 transitionContext:(id)arg2 applyChangesBlock:(id /* block */)arg3;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

