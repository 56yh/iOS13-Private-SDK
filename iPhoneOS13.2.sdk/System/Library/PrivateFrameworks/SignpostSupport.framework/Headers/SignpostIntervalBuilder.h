//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, SignpostCAInstrumentationProcessor;
@protocol OS_dispatch_queue;

@interface SignpostIntervalBuilder : NSObject
{
    _Bool _buildAnimationCompositeIntervalTimelines;
    _Bool _compositeIntervalIsInFlight;
    _Bool _foundMacOSSpecificData;
    _Bool _foundIPhoneOSSpecificData;
    _Bool _foundCAWSInMemoryData;
    NSMutableDictionary *_systemwideDictionary;
    NSMutableDictionary *_processwideDictionary;
    NSMutableDictionary *_threadwideDictionary;
    NSMapTable *_outstandingAnimationState;
    unsigned long long _totalCompositeIntervalCount;
    NSObject<OS_dispatch_queue> *_syncQueue;
    unsigned long long _previousMCT;
    SignpostCAInstrumentationProcessor *_caInstrumentationProcessor;
}

+ (id)_framerateCalculationWhitelist;
+ (_Bool)_filterPassesRequiredSCForFramerate:(id)arg1;
@property(readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor; // @synthesize caInstrumentationProcessor=_caInstrumentationProcessor;
@property(nonatomic) unsigned long long previousMCT; // @synthesize previousMCT=_previousMCT;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) _Bool foundCAWSInMemoryData; // @synthesize foundCAWSInMemoryData=_foundCAWSInMemoryData;
@property(nonatomic) _Bool foundIPhoneOSSpecificData; // @synthesize foundIPhoneOSSpecificData=_foundIPhoneOSSpecificData;
@property(nonatomic) _Bool foundMacOSSpecificData; // @synthesize foundMacOSSpecificData=_foundMacOSSpecificData;
@property(nonatomic) _Bool compositeIntervalIsInFlight; // @synthesize compositeIntervalIsInFlight=_compositeIntervalIsInFlight;
@property(nonatomic) unsigned long long totalCompositeIntervalCount; // @synthesize totalCompositeIntervalCount=_totalCompositeIntervalCount;
@property(retain, nonatomic) NSMapTable *outstandingAnimationState; // @synthesize outstandingAnimationState=_outstandingAnimationState;
@property(readonly, nonatomic) NSMutableDictionary *threadwideDictionary; // @synthesize threadwideDictionary=_threadwideDictionary;
@property(readonly, nonatomic) NSMutableDictionary *processwideDictionary; // @synthesize processwideDictionary=_processwideDictionary;
@property(readonly, nonatomic) NSMutableDictionary *systemwideDictionary; // @synthesize systemwideDictionary=_systemwideDictionary;
@property(nonatomic) _Bool buildAnimationCompositeIntervalTimelines; // @synthesize buildAnimationCompositeIntervalTimelines=_buildAnimationCompositeIntervalTimelines;
- (id)doneProcessing;
- (id)processEndEvent:(id)arg1 isAnimation:(_Bool *)arg2;
- (id)_animationWithBegin:(id)arg1 endEvent:(id)arg2;
- (void)_cleanupStateForBeginEvent:(id)arg1;
- (_Bool)_handleCommonSpecialIntervals:(id)arg1;
- (_Bool)_handleIPhoneOsSpecialEvents:(id)arg1;
- (_Bool)_handleIPhoneOsSpecialIntervals:(id)arg1;
- (_Bool)_handleMacOsSpecialIntervals:(id)arg1;
- (void)_processCompositeInterval:(id)arg1;
- (void)processEmittedEvent:(id)arg1;
- (_Bool)processBeginEvent:(id)arg1;
- (void)_startTrackingAnimationWithBeginEvent:(id)arg1;
- (void)_initializeMapsIfNecessary;
- (_Bool)_hasOutstandingAnimations;
- (_Bool)isMetadataSubsystem:(id)arg1 category:(id)arg2;
- (_Bool)signpostIsAnimationMetadata:(id)arg1;
- (_Bool)signpostIsCompositeLoop:(id)arg1;
- (_Bool)isCompositeLoopSubsystem:(id)arg1 category:(id)arg2;
- (_Bool)_trackBegin:(id)arg1;
- (id)matchingEventForEvent:(id)arg1 removeIfFound:(_Bool)arg2;
- (id)_matchingEventForEvent:(id)arg1 removeIfFound:(_Bool)arg2;
- (_Bool)timestampIndicatesDeviceReboot:(unsigned long long)arg1;
- (void)dropAccumulatedState;
- (id)init;

@end

