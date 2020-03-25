//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AXMDiagnosticMetricToken, AXMDiagnostics, AXMPipelineContextInput, AXMSequenceRequestManager, AXMVisionAnalysisOptions, AXMVisionResult, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSNumber, VNImageRequestHandler, VNSceneObservation;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding>
{
    AXMPipelineContextInput *_sourceInput;
    NSDictionary *_sourceParameters;
    BOOL _sourceProvidesOwnResults;
    NSMutableArray *_resultHandlers;
    AXMDiagnosticMetricToken *_processingDiagnosticToken;
    VNSceneObservation *_sceneObservation;
    NSObject<OS_dispatch_queue> *_sceneObservationQueue;
    BOOL _shouldProcessRemotely;
    BOOL _shouldCallCompletionHandlersForEngineBusyError;
    BOOL _shouldCallCompletionHandlersForEmptyResultSet;
    BOOL _evaluationExclusivelyUsesVisionFramework;
    NSError *_error;
    AXMVisionAnalysisOptions *_analysisOptions;
    long long _imageRegistrationState;
    NSObject<NSSecureCoding> *_userContext;
    id <NSCopying> _cacheKey;
    NSUInteger _sequenceID;
    AXMDiagnostics *_diagnostics;
    NSMutableArray *_features;
    NSMutableSet *_evaluatedFeatureTypes;
    AXMVisionResult *_result;
    NSNumber *_appliedImageOrientation;
    VNImageRequestHandler *_visionImageRequestHandler;
    AXMSequenceRequestManager *_sequenceRequestManager;
}

+ (BOOL)supportsSecureCoding;
+ (id)contextWithSourceParameters:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) AXMSequenceRequestManager *sequenceRequestManager; // @synthesize sequenceRequestManager=_sequenceRequestManager;
@property(retain, nonatomic) VNImageRequestHandler *visionImageRequestHandler; // @synthesize visionImageRequestHandler=_visionImageRequestHandler;
@property(retain, nonatomic) NSNumber *appliedImageOrientation; // @synthesize appliedImageOrientation=_appliedImageOrientation;
@property(retain, nonatomic) AXMVisionResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableSet *evaluatedFeatureTypes; // @synthesize evaluatedFeatureTypes=_evaluatedFeatureTypes;
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
@property(retain, nonatomic) AXMDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(nonatomic) NSUInteger sequenceID; // @synthesize sequenceID=_sequenceID;
@property(nonatomic) BOOL evaluationExclusivelyUsesVisionFramework; // @synthesize evaluationExclusivelyUsesVisionFramework=_evaluationExclusivelyUsesVisionFramework;
@property(nonatomic) BOOL shouldCallCompletionHandlersForEmptyResultSet; // @synthesize shouldCallCompletionHandlersForEmptyResultSet=_shouldCallCompletionHandlersForEmptyResultSet;
@property(nonatomic) BOOL shouldCallCompletionHandlersForEngineBusyError; // @synthesize shouldCallCompletionHandlersForEngineBusyError=_shouldCallCompletionHandlersForEngineBusyError;
@property(retain, nonatomic) id <NSCopying> cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSObject<NSSecureCoding> *userContext; // @synthesize userContext=_userContext;
@property(nonatomic) long long imageRegistrationState; // @synthesize imageRegistrationState=_imageRegistrationState;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL shouldProcessRemotely; // @synthesize shouldProcessRemotely=_shouldProcessRemotely;
// - (void).cxx_destruct;
- (void)didFinishProcessingContext;
- (void)willBeginProcessingContext;
@property(readonly, nonatomic) AXMPipelineContextInput *sourceInput;
- (id)generateImageRepresentation;
- (id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2;
- (void)errorOccurred:(id)arg1;
- (void)addEvaluatedFeatureType:(NSUInteger)arg1;
- (void)appendFeature:(id)arg1;
- (void)produceImage:(id /* CDUnknownBlockType */)arg1;
- (void)addResultHandlers:(id)arg1;
- (void)addResultHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSArray *resultHandlers;
- (id)sceneObservation;
- (void)createSceneObservationIfNilWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL visionImageRequestHandlerIsLoaded;
- (id)visionImageRequestHandlerWithOptions:(id)arg1;
- (id)_makeRequestHandlerForInput:(id)arg1 options:(id)arg2;
@property(readonly, nonatomic) CGSize size;
@property(readonly, nonatomic) BOOL sourceProvidesResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)_commonInit;
- (id)initWithSourceParameters:(id)arg1 options:(id)arg2;

@end
