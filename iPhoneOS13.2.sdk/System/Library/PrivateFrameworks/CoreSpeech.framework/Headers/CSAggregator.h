//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAggregator : NSObject
{
    unsigned long long _currentState;
    double _lastAggTime;
    double _cumulativeUptime;
    double _cumulativeDowntime;
    double _lastAggTimeFalseWakeUp;
    unsigned long long _numFalseWakeUp;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_languageCode;
    NSString *_assetString;
}

+ (id)sharedAggregator;
- (void)_pushValueForDistributionKey:(id)arg1 withValue:(double)arg2;
- (void)_addValueForScalarKey:(id)arg1 withValue:(long long)arg2;
- (id)_makeKeyWithLanguageAndAssetString:(id)arg1;
- (id)_makeKey:(id)arg1;
- (void)logProfileUpdateUtt:(id)arg1 withScore:(double)arg2;
- (void)logProfileUpdateNumRetainedUttsPHS:(int)arg1;
- (void)logProfileUpdateNumDiscardedUttsPHS:(int)arg1;
- (void)logProfileUpdateNumPrunedUttsPHS:(int)arg1;
- (void)logTdPsrSATRetrainingWaitTimeMs:(double)arg1;
- (void)logTdPsrSATRetrainingTimedOut;
- (void)logProfileUpdateScoreMSE:(double)arg1;
- (void)logVoiceProfilePruningFailureWithReasonCode:(unsigned long long)arg1;
- (void)logTdPsrFailedDuringSATRetraining;
- (void)logTdPsrFailedDuringSATDetection;
- (void)logTdPsrSATDetectionWaitTimeMs:(double)arg1;
- (void)logTdPsrSATDetectionTimedOut;
- (void)_logUptime;
- (void)setAssetString:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)cumulativeUptime:(id *)arg1 cumulativeDowntime:(id *)arg2 reset:(_Bool)arg3;
- (id)init;

@end

