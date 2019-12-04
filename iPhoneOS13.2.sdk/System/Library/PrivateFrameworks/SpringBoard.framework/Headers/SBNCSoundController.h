//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DNDEventBehaviorResolutionService, NSMutableDictionary, NSMutableSet, SBLockScreenManager, SBLockStateAggregator;

@interface SBNCSoundController : NSObject
{
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    NSMutableDictionary *_playingSounds;
    NSMutableSet *_requestsRequiringExplicitKill;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
}

@property(retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService; // @synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService;
@property(retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill; // @synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill;
@property(retain, nonatomic) NSMutableDictionary *playingSounds; // @synthesize playingSounds=_playingSounds;
@property(retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
- (void)_lockStateChanged:(id)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (_Bool)_isDeviceUILocked;
- (void)_killSounds;
- (void)stopSoundForNotificationRequest:(id)arg1;
- (void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (_Bool)canPlaySoundForNotificationRequest:(id)arg1;
- (id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2;
- (id)init;

@end

