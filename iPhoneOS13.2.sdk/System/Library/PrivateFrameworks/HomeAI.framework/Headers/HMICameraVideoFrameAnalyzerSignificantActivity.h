//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMICameraVideoFrameAnalyzer-Protocol.h>

@class HMFOSTransaction, HMFUnfairLock, HMISignificantActivityDetector, NSMapTable, NSOperationQueue, NSString;

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMICameraVideoFrameAnalyzer, HMFLogging>
{
    HMFUnfairLock *_lock;
    NSOperationQueue *_regionOfInterestOperationQueue;
    NSMapTable *_regionOfInterestOperations;
    HMISignificantActivityDetector *_significantActivityDetector;
    HMFOSTransaction *_transaction;
}

+ (id)logCategory;
+ (id)classHierarchyMap;
@property(retain, nonatomic) HMFOSTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly) HMISignificantActivityDetector *significantActivityDetector; // @synthesize significantActivityDetector=_significantActivityDetector;
@property(readonly) NSMapTable *regionOfInterestOperations; // @synthesize regionOfInterestOperations=_regionOfInterestOperations;
@property(readonly) NSOperationQueue *regionOfInterestOperationQueue; // @synthesize regionOfInterestOperationQueue=_regionOfInterestOperationQueue;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
- (id)analyze:(id)arg1 targetEventTypes:(long long)arg2 error:(id *)arg3;
- (long long)rankForClassLabel:(long long)arg1;
- (void)preAnalyze:(id)arg1;
- (void)_addSimulatedDetectionForEventType:(long long)arg1 targetEventTypes:(long long)arg2 events:(long long *)arg3 annotationScores:(id)arg4 detections:(id)arg5;
- (double)_confidenceScoreOverrideForEventType:(long long)arg1;
- (id)initWithConfidenceThresholds:(struct NSDictionary *)arg1 nmsThreshold:(double)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

