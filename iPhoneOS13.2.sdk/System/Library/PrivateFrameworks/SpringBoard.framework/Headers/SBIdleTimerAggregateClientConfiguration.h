//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBIdleTimerConfigurationDisablesTimerSetting, SBIdleTimerTimeoutPrecedenceSettings, SBIdleTimerTimeoutRange;

@interface SBIdleTimerAggregateClientConfiguration : NSObject <BSDescriptionProviding>
{
    SBIdleTimerTimeoutRange *_resolvedExpirationTimeoutRange;
    SBIdleTimerConfigurationDisablesTimerSetting *_disableTimerSetting;
    SBIdleTimerTimeoutPrecedenceSettings *_minExpirationTimeoutSettings;
    SBIdleTimerTimeoutPrecedenceSettings *_maxExpirationTimeoutSettings;
}

@property(readonly, nonatomic) SBIdleTimerTimeoutPrecedenceSettings *maxExpirationTimeoutSettings; // @synthesize maxExpirationTimeoutSettings=_maxExpirationTimeoutSettings;
@property(readonly, nonatomic) SBIdleTimerTimeoutPrecedenceSettings *minExpirationTimeoutSettings; // @synthesize minExpirationTimeoutSettings=_minExpirationTimeoutSettings;
@property(readonly, nonatomic) SBIdleTimerConfigurationDisablesTimerSetting *disableTimerSetting; // @synthesize disableTimerSetting=_disableTimerSetting;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)resolvedExpirationTimeoutRange;
- (id)expirationTimeoutIntervalRangeForPrecedence:(unsigned long long)arg1;
- (void)setMaxExpirationTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2;
- (void)setMaxExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (void)setMinExpirationTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2;
- (void)setMinExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (void)setDisablesTimerWithPrecedence:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

