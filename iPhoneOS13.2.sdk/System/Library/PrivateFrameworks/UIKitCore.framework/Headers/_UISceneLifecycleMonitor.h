//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneLifecycleMonitor : NSObject
{
    UIScene *__scene;
}

@property(nonatomic) __weak UIScene *_scene; // @synthesize _scene=__scene;
- (void)didDisonnect;
- (void)willDisonnect;
- (void)didEnterBackground;
- (void)willEnterBackground;
- (void)didEnterForeground;
- (void)willEnterForeground;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)didConnect;
- (void)willConnect;
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(id /* block */)arg4;
@property(readonly, nonatomic) long long currentActivationState;
- (id)initWithScene:(id)arg1;

@end

