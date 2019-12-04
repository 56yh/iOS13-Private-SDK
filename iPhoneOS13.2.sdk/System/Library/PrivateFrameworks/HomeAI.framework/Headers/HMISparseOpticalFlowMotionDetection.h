//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeAI/HMIMotionDetection.h>

@class NSArray;

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection
{
    NSArray *_motionVectors;
    struct CGSize _size;
}

@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) NSArray *motionVectors; // @synthesize motionVectors=_motionVectors;
- (id)classPaddingMap;
- (id)classMotionScoreMap;
- (_Bool)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (float)scoreForSubBoundingBox:(struct CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (id)initWithBoundingBox:(struct CGRect)arg1 size:(struct CGSize)arg2 motionVectors:(id)arg3;

@end

