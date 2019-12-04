//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>

#import <iWorkImport/TSCH3DSceneObjectDelegator-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSArray, NSMutableArray, TSCH3DChartRep, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;

__attribute__((visibility("hidden")))
@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent>
{
    TSCH3DChartRep *mRep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;
    NSArray *mSelection;
    NSMutableArray *mProjectedPoints;
    float mNormalizedKnobRadius;
}

+ (id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
@property(readonly, nonatomic) NSArray *projectedPoints; // @synthesize projectedPoints=mProjectedPoints;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (_Bool)render;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

