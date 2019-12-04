//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OSLogEventLiveStream, SignpostIntervalBuilder, SignpostSupportExactProcessNameFilter, SignpostSupportObjectFilter, SignpostSupportPIDFilter, SignpostSupportSubsystemCategoryFilter, SignpostSupportUniquePIDFilter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SignpostSupportObjectExtractor : NSObject
{
    _Bool __shouldStopProcessing;
    SignpostSupportSubsystemCategoryFilter *_subsystemCategoryFilter;
    SignpostSupportExactProcessNameFilter *_processNameFilter;
    SignpostSupportPIDFilter *_pidFilter;
    SignpostSupportUniquePIDFilter *_uniquePidFilter;
    SignpostSupportObjectFilter *_objectFilter;
    id /* block */ _beginEventProcessingBlock;
    id /* block */ _endEventProcessingBlock;
    id /* block */ _repeatedBeginEventProcessingBlock;
    id /* block */ _unmatchedEndEventProcessingBlock;
    id /* block */ _emitEventProcessingBlock;
    id /* block */ _intervalCompletionProcessingBlock;
    id /* block */ _animationIntervalCompletionProcessingBlock;
    id /* block */ _logMessageProcessingBlock;
    id /* block */ _deviceRebootProcessingBlock;
    id /* block */ _processingCompletionBlock;
    SignpostIntervalBuilder *_intervalBuilder;
    unsigned long long _processedEventCount;
    id /* block */ _timedOutBeginEventProcessingBlock;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    unsigned long long __notificationTimeout;
    NSObject<OS_dispatch_queue> *_notificationProcessingQueue;
    OSLogEventLiveStream *__liveStream;
    id /* block */ __stopProcessingBlock;
    id /* block */ __intervalEndHandler;
}

@property(copy, nonatomic) id /* block */ _intervalEndHandler; // @synthesize _intervalEndHandler=__intervalEndHandler;
@property(copy, nonatomic) id /* block */ _stopProcessingBlock; // @synthesize _stopProcessingBlock=__stopProcessingBlock;
@property(retain, nonatomic) OSLogEventLiveStream *_liveStream; // @synthesize _liveStream=__liveStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationProcessingQueue; // @synthesize notificationProcessingQueue=_notificationProcessingQueue;
@property(nonatomic) unsigned long long _notificationTimeout; // @synthesize _notificationTimeout=__notificationTimeout;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *syncSem; // @synthesize syncSem=_syncSem;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore; // @synthesize completionSemaphore=_completionSemaphore;
@property _Bool _shouldStopProcessing; // @synthesize _shouldStopProcessing=__shouldStopProcessing;
@property(copy, nonatomic) id /* block */ timedOutBeginEventProcessingBlock; // @synthesize timedOutBeginEventProcessingBlock=_timedOutBeginEventProcessingBlock;
@property(nonatomic) unsigned long long processedEventCount; // @synthesize processedEventCount=_processedEventCount;
@property(readonly, nonatomic) SignpostIntervalBuilder *intervalBuilder; // @synthesize intervalBuilder=_intervalBuilder;
@property(copy, nonatomic) id /* block */ processingCompletionBlock; // @synthesize processingCompletionBlock=_processingCompletionBlock;
@property(copy, nonatomic) id /* block */ deviceRebootProcessingBlock; // @synthesize deviceRebootProcessingBlock=_deviceRebootProcessingBlock;
@property(copy, nonatomic) id /* block */ logMessageProcessingBlock; // @synthesize logMessageProcessingBlock=_logMessageProcessingBlock;
@property(copy, nonatomic) id /* block */ animationIntervalCompletionProcessingBlock; // @synthesize animationIntervalCompletionProcessingBlock=_animationIntervalCompletionProcessingBlock;
@property(copy, nonatomic) id /* block */ intervalCompletionProcessingBlock; // @synthesize intervalCompletionProcessingBlock=_intervalCompletionProcessingBlock;
@property(copy, nonatomic) id /* block */ emitEventProcessingBlock; // @synthesize emitEventProcessingBlock=_emitEventProcessingBlock;
@property(copy, nonatomic) id /* block */ unmatchedEndEventProcessingBlock; // @synthesize unmatchedEndEventProcessingBlock=_unmatchedEndEventProcessingBlock;
@property(copy, nonatomic) id /* block */ repeatedBeginEventProcessingBlock; // @synthesize repeatedBeginEventProcessingBlock=_repeatedBeginEventProcessingBlock;
@property(copy, nonatomic) id /* block */ endEventProcessingBlock; // @synthesize endEventProcessingBlock=_endEventProcessingBlock;
@property(copy, nonatomic) id /* block */ beginEventProcessingBlock; // @synthesize beginEventProcessingBlock=_beginEventProcessingBlock;
@property(retain, nonatomic) SignpostSupportObjectFilter *objectFilter; // @synthesize objectFilter=_objectFilter;
@property(retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter; // @synthesize uniquePidFilter=_uniquePidFilter;
@property(retain, nonatomic) SignpostSupportPIDFilter *pidFilter; // @synthesize pidFilter=_pidFilter;
@property(retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter; // @synthesize processNameFilter=_processNameFilter;
@property(retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter; // @synthesize subsystemCategoryFilter=_subsystemCategoryFilter;
- (id)_loggingSupportStreamPredicateFromFiltersWithForLiveStreaming:(_Bool)arg1;
- (void)dealloc;
- (void)_processingCompleted:(id)arg1;
- (void)stopProcessing;
- (id)init;
@property(nonatomic) _Bool buildAnimationCompositeIntervalTimelines;
- (_Bool)_processSignpostEvent:(id)arg1 shouldReport:(_Bool)arg2;
- (_Bool)_processSignpostSupportLogMessage:(id)arg1;
- (_Bool)_generateIntervalFromEnd:(id)arg1 shouldReport:(_Bool)arg2;
- (_Bool)_shouldBuildEventWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5 shouldReport:(_Bool *)arg6;
- (_Bool)_shouldProcessEvent:(id)arg1 shouldReport:(_Bool *)arg2;
- (_Bool)_eventPassesFilters:(id)arg1;
- (_Bool)_eventPassesWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5;
- (_Bool)_hasNonObjectFilters;
- (_Bool)_isTrackingIntervals;
- (_Bool)_hasSignpostProcessingBlock;
- (_Bool)processSerializedObjectsFromSignpostFile:(id)arg1 errorOut:(id *)arg2;
- (void)finishProcessingSerializedData;
- (_Bool)processSerializedObjectsFromData:(id)arg1 errorOut:(id *)arg2;

@end

