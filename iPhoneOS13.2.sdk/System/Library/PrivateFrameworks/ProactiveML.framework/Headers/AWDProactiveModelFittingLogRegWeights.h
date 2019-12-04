//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedWeights;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatWeights;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedWeights;
    float _weightsL2norm;
    float _weightsScaleFactor;
    struct {
        unsigned int timestamp:1;
        unsigned int weightsL2norm:1;
        unsigned int weightsScaleFactor:1;
    } _has;
}

@property(retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights; // @synthesize denseQuantizedWeights=_denseQuantizedWeights;
@property(nonatomic) float weightsL2norm; // @synthesize weightsL2norm=_weightsL2norm;
@property(nonatomic) float weightsScaleFactor; // @synthesize weightsScaleFactor=_weightsScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights; // @synthesize sparseQuantizedWeights=_sparseQuantizedWeights;
@property(retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights; // @synthesize sparseFloatWeights=_sparseFloatWeights;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDenseQuantizedWeights;
@property(nonatomic) _Bool hasWeightsL2norm;
@property(nonatomic) _Bool hasWeightsScaleFactor;
@property(readonly, nonatomic) _Bool hasSparseQuantizedWeights;
@property(readonly, nonatomic) _Bool hasEvaluationMetrics;
@property(readonly, nonatomic) _Bool hasMinibatchStats;
@property(readonly, nonatomic) _Bool hasSparseFloatWeights;
@property(readonly, nonatomic) _Bool hasModelInfo;
@property(nonatomic) _Bool hasTimestamp;
- (_Bool)hasWeights;

@end

