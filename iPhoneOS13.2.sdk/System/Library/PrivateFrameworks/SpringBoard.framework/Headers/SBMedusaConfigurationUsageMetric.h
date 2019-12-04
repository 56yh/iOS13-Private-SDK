//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSString, PETDistributionEventTracker, PETScalarEventTracker;

@interface SBMedusaConfigurationUsageMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    long long _currentSpaceConfig;
    long long _currentFloatingConfig;
    _Bool _isPIPVideoActive;
    _Bool _isFloatingActive;
    double _floatingAppActivationTimestamp;
    double _pipVideoActivationTimestamp;
    PETScalarEventTracker *_medusaUsageTracker;
    PETDistributionEventTracker *_floatingAppSessionTimeTracker;
    PETDistributionEventTracker *_pipVideoSessionTimeTracker;
}

- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (void)_trackMedusaConfigChange;
- (_Bool)_floatingAppIsActiveForConfiguration:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

