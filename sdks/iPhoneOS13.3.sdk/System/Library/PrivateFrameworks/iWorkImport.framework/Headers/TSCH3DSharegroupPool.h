//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DSharegroupDelayCheckerParent-Protocol.h>
#import <iWorkImport/TSUiOSMemoryWarningFlushable-Protocol.h>

@class NSCondition, NSMutableArray, TSCH3DSharegroupDelayChecker;

__attribute__((visibility("hidden")))
@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable>
{
    long long mSize;
    long long mNumAlive;
    long long mDisableLevel;
    NSMutableArray *mSharegroups;
    NSCondition *mCondition;
    BOOL mBusy;
    TSCH3DSharegroupDelayChecker *mChecker;
    NSUInteger mApplicationState;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
// - (void).cxx_destruct;
- (void)willCheckCondition;
- (void)scheduleCheckCondition;
- (void)waitForBackgroundThreadsWithTimeout:(double)arg1;
- (void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)arg1;
- (BOOL)canFlushObjects;
- (BOOL)canRenderUsingOpenGL;
- (BOOL)canCreateOpenGLObjects;
- (BOOL)canRenderForAnimations;
- (BOOL)p_canUseOpenGLWithCheck:(id /* CDUnknownBlockType */)arg1;
- (void)enable;
- (void)disable;
- (void)releaseSharegroup:(id)arg1;
- (id)obtainSharegroup;
- (id)p_obtainSharegroupFromSharegroups;
- (void)flush;
- (void)p_flushSharegroupsIfPossible;
- (void)p_removeSharegroupsFromFlushingManager;
- (BOOL)p_applicationStateAllowsObjectFlushing;
- (BOOL)p_applicationStateAllowsOpenGLObjectCreation;
- (BOOL)p_applicationStateAllowsOpenGLRendering;
- (BOOL)p_applicationStateAllowsAnimationRendering;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)p_lockAndPerformBlock:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;

@end
