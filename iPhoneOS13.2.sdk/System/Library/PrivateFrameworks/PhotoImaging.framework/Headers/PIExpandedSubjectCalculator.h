//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PIExpandedSubjectCalculatorConfiguration, VNSaliencyImageObservation;

@interface PIExpandedSubjectCalculator : NSObject
{
    NSArray *_expandedSubjects;
    PIExpandedSubjectCalculatorConfiguration *_configuration;
    NSArray *_detectedSubjects;
    NSArray *_saliencyData;
    unsigned long long _subjectDirection;
    VNSaliencyImageObservation *_saliencyImageObservation;
    NSArray *_regressedSalientSubjects;
}

+ (id)salientSubjectsWithImageRequestHandler:(id)arg1;
+ (id)saliencyObservationWithImageRequestHandler:(id)arg1;
+ (id)saliencyDataForSaliencyObservation:(id)arg1;
+ (void)consolidateCandidateSalientClusters:(id)arg1 maxDistance:(double)arg2;
@property(readonly, copy, nonatomic) NSArray *regressedSalientSubjects; // @synthesize regressedSalientSubjects=_regressedSalientSubjects;
@property(readonly, nonatomic) VNSaliencyImageObservation *saliencyImageObservation; // @synthesize saliencyImageObservation=_saliencyImageObservation;
@property(nonatomic) unsigned long long subjectDirection; // @synthesize subjectDirection=_subjectDirection;
@property(readonly, copy, nonatomic) NSArray *saliencyData; // @synthesize saliencyData=_saliencyData;
@property(readonly, copy, nonatomic) NSArray *detectedSubjects; // @synthesize detectedSubjects=_detectedSubjects;
@property(readonly, nonatomic) PIExpandedSubjectCalculatorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSArray *expandedSubjects; // @synthesize expandedSubjects=_expandedSubjects;
- (id)findSalientPointsWithSaliencyScale:(float)arg1 outsideOfSubjectsRect:(struct CGRect)arg2;
- (id)findBestStartingPointForStartingPoint:(struct CGPoint)arg1;
- (void)clusterPoints:(id)arg1 intoClusters:(id)arg2;
- (id)closestClusterForPoint:(id)arg1 fromClusters:(id)arg2;
- (id)neighborsForPoint:(id)arg1;
@property(readonly, nonatomic) unsigned long long saliencyScale;
- (id)initWithDetectedSubjects:(id)arg1 ciImage:(id)arg2 ciContext:(id)arg3 configuration:(id)arg4;
- (id)initWithDetectedSubjects:(id)arg1 cgImage:(struct CGImage *)arg2;
- (id)initWithDetectedSubjects:(id)arg1 saliencyData:(id)arg2 configuration:(id)arg3;

@end

