//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLEvaluationTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLinRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLogRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLMultiLabelEvaluationTrackerProtocol-Protocol.h>

@class AWDProactiveModelFittingModelInfo, NSString;
@protocol PMLTrackerAdapterProtocol;

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLLinRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>
{
    AWDProactiveModelFittingModelInfo *_modelInfo;
    unsigned long long _quantizationNumberOfBuckets;
    id <PMLTrackerAdapterProtocol> _adapter;
}

+ (id)messageForGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 modelInfo:(id)arg6 numberOfBuckets:(unsigned long long)arg7;
+ (id)messageForWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 modelInfo:(id)arg5 numberOfBuckets:(unsigned long long)arg6;
+ (id)parsecTrackerForPlanId:(struct NSString *)arg1;
+ (id)awdTrackerForPlanId:(struct NSString *)arg1;
+ (id)trackerForPlanId:(struct NSString *)arg1;
@property(readonly) unsigned long long quantizationNumberOfBuckets; // @synthesize quantizationNumberOfBuckets=_quantizationNumberOfBuckets;
@property(readonly) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(readonly) id <PMLTrackerAdapterProtocol> adapter; // @synthesize adapter=_adapter;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2;
- (id)trackPrecisionAtK:(id)arg1;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (void)trackObjectiveFeatures:(id)arg1 featureMatrix:(id)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;
- (id)init;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 quantizationBuckets:(unsigned long long)arg3;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

