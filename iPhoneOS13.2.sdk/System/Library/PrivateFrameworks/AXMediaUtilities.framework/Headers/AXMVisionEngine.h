//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMDescribing-Protocol.h>
#import <AXMediaUtilities/AXMTaskDispatcherDelegate-Protocol.h>
#import <AXMediaUtilities/AXMVisionEngineNodeConnectionDelegate-Protocol.h>



@class AXMImageRegistrationNode, AXMSequenceRequestManager, AXMService, AXMTaskDispatcher, AXMVisionEngineCache, NSArray, NSMutableArray, NSString, _AXMVisionEngineAnalysisTask;
@protocol OS_dispatch_queue;

@interface AXMVisionEngine : NSObject <AXMVisionEngineNodeConnectionDelegate, AXMTaskDispatcherDelegate, NSCopying, NSSecureCoding, AXMDescribing>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_sourceNodes;
    NSMutableArray *_queue_evaluationNodes;
    AXMImageRegistrationNode *_queue_imageRegistrationNode;
    NSMutableArray *_queue_resultHandlers;
    _Bool _queue_shouldNotifyServiceOfEngineConfigChange;
    _AXMVisionEngineAnalysisTask *_queue_currentTask;
    _Bool _prioritySchedulingEnabled;
    _Bool _prioritySchedulingAllowMultipleNodeExecution;
    _Bool _imageRegistrationFilteringEnabled;
    _Bool _diagnosticsEnabled;
    _Bool _disableResultLogging;
    NSString *_identifier;
    long long _maximumQueueSize;
    unsigned long long _thresholdPriority;
    long long _minimumImageRegistrationSignalLevel;
    AXMVisionEngineCache *_cache;
    AXMService *_axMediaUtilsService;
    AXMTaskDispatcher *_taskDispatcher;
    AXMSequenceRequestManager *_sequenceRequestManager;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) AXMSequenceRequestManager *sequenceRequestManager; // @synthesize sequenceRequestManager=_sequenceRequestManager;
@property(retain, nonatomic) AXMTaskDispatcher *taskDispatcher; // @synthesize taskDispatcher=_taskDispatcher;
@property(retain, nonatomic) AXMService *axMediaUtilsService; // @synthesize axMediaUtilsService=_axMediaUtilsService;
@property(nonatomic) _Bool disableResultLogging; // @synthesize disableResultLogging=_disableResultLogging;
@property(nonatomic, getter=areDiagnosticsEnabled) _Bool diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
@property(retain, nonatomic) AXMVisionEngineCache *cache; // @synthesize cache=_cache;
@property(nonatomic) long long minimumImageRegistrationSignalLevel; // @synthesize minimumImageRegistrationSignalLevel=_minimumImageRegistrationSignalLevel;
@property(nonatomic) _Bool imageRegistrationFilteringEnabled; // @synthesize imageRegistrationFilteringEnabled=_imageRegistrationFilteringEnabled;
@property unsigned long long thresholdPriority; // @synthesize thresholdPriority=_thresholdPriority;
@property _Bool prioritySchedulingAllowMultipleNodeExecution; // @synthesize prioritySchedulingAllowMultipleNodeExecution=_prioritySchedulingAllowMultipleNodeExecution;
@property _Bool prioritySchedulingEnabled; // @synthesize prioritySchedulingEnabled=_prioritySchedulingEnabled;
@property long long maximumQueueSize; // @synthesize maximumQueueSize=_maximumQueueSize;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)captureSessionNodeDidDropFrame:(id)arg1;
- (void)captureSessionNodeWillProcessFrame:(id)arg1;
- (void)captureSessionNodeDidEndProcessingFrames:(id)arg1;
- (void)captureSessionNodeDidBeginProcessingFrames:(id)arg1;
- (_Bool)engineWillAcceptTiggerWithSource:(id)arg1;
- (void)_invokeFullQueueResultHandlersForContext:(id)arg1;
- (void)triggerWithSource:(id)arg1 context:(id)arg2;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (id)axmDescription;
- (void)purgeResources:(id /* block */)arg1;
- (void)prewarmEngine;
- (void)updateEngineConfiguration:(id /* block */)arg1;
- (void)disableResultCaching;
- (void)enableResultCachingWithCacheSize:(long long)arg1;
@property(readonly, nonatomic) long long cacheSize;
@property(readonly, nonatomic) _Bool isCachingEnabled;
- (void)_invokeResultHandlers:(id)arg1 withResult:(id)arg2;
- (void)_invokeResultHandlers:(id)arg1 withError:(id)arg2;
- (void)_queue_removeAllResultHandlers;
- (void)removeAllResultHandlers;
- (void)_queue_removeResultHandler:(id /* block */)arg1;
- (void)removeResultHandler:(id /* block */)arg1;
- (void)_queue_addResultHandler:(id /* block */)arg1;
- (void)addResultHandler:(id /* block */)arg1;
- (id)resultHandlers;
- (_Bool)_queue_nodeIdentifierExists:(id)arg1;
- (_Bool)nodeIdentifierExists:(id)arg1;
- (id)_queue_makeUniqueIdentifierForNode:(Class)arg1;
- (id)makeUniqueIdentifierForNode:(Class)arg1;
- (id)_queue_evaluationNodeWithIdentifier:(id)arg1;
- (id)_queue_sourceNodeWithIdentifier:(id)arg1;
- (id)evaluationNodeWithIdentifier:(id)arg1;
- (id)sourceNodeWithIdentifier:(id)arg1;
- (void)addSourceNodes:(id)arg1 evaluationNodes:(id)arg2;
- (void)removeAllEvaluationNodes;
- (void)removeEvaluationNode:(id)arg1;
- (void)insertEvaluationNode:(id)arg1 atIndex:(long long)arg2;
- (void)addEvaluationNode:(id)arg1;
- (_Bool)canAddEvaluationNodeClass:(Class)arg1;
- (_Bool)canAddEvaluationNode:(id)arg1;
@property(readonly, nonatomic) NSArray *evaluationNodes;
- (void)removeAllSourceNodes;
- (void)removeSourceNode:(id)arg1;
- (void)insertSourceNode:(id)arg1 atIndex:(long long)arg2;
- (void)addSourceNode:(id)arg1;
- (_Bool)canAddSourceNodeClass:(Class)arg1;
- (_Bool)canAddSourceNode:(id)arg1;
@property(readonly, nonatomic) NSArray *sourceNodes;
- (void)_queue_handleEvaluatedContext:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)_queue_evaluateWithSource:(id)arg1 context:(id)arg2;
- (_Bool)_queue_activeEvaluationNodesExclusivelyUseVisionFramework:(id)arg1;
- (void)_queue_logEvaluatedResult:(id)arg1;
- (id)_queue_activeEvaluationNodesForOptions:(id)arg1 applyPriorityScheduling:(_Bool)arg2 prioritySchedulingAllowMultipleNodeExecution:(_Bool)arg3;
- (_Bool)_queue_shouldEvaluateNode:(id)arg1 withOptions:(id)arg2;
- (void)_queue_remotelyEvaluateWithSource:(id)arg1 context:(id)arg2;
- (_Bool)_queue_shouldContinueWithoutResultHandlers:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqualToEngine:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)_commonInit;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

