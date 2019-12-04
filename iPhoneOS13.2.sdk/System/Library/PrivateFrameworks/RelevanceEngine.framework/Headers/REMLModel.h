//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REMLModelProperties-Protocol.h>

@class NSString, REConcurrentDictionary;
@protocol RERelevanceEngineMetricsRecorder;

@interface REMLModel : NSObject <REMLModelProperties>
{
    REConcurrentDictionary *_predictionCache;
    _Bool _wantsPredictionCache;
    _Bool _implementsDebugSaving;
    _Bool _allowsExploreExploit;
    float _exploreExploitModulator;
    float _priorMean;
    float _varianceEpsilon;
    float _simulationExploreExploitModulator;
    id <RERelevanceEngineMetricsRecorder> _metricsRecorder;
    NSString *_metricsInteraction;
}

+ (unsigned long long)maxFeatureCount;
+ (unsigned long long)featureBitWidth;
+ (id)modelWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
@property(retain, nonatomic) NSString *metricsInteraction; // @synthesize metricsInteraction=_metricsInteraction;
@property(retain, nonatomic) id <RERelevanceEngineMetricsRecorder> metricsRecorder; // @synthesize metricsRecorder=_metricsRecorder;
@property(nonatomic) float simulationExploreExploitModulator; // @synthesize simulationExploreExploitModulator=_simulationExploreExploitModulator;
@property(nonatomic) float varianceEpsilon; // @synthesize varianceEpsilon=_varianceEpsilon;
@property(nonatomic) float priorMean; // @synthesize priorMean=_priorMean;
@property(nonatomic) float exploreExploitModulator; // @synthesize exploreExploitModulator=_exploreExploitModulator;
@property(nonatomic) _Bool allowsExploreExploit; // @synthesize allowsExploreExploit=_allowsExploreExploit;
@property(readonly, nonatomic) unsigned long long maxFeatureCount;
@property(readonly, nonatomic) unsigned long long featureBitWidth;
@property(readonly, nonatomic) NSString *name;
- (void)logCoreAnalyticsMetrics;
- (_Bool)requiresDirectory;
- (unsigned long long)_getTotalPositiveCount;
@property(readonly, nonatomic) unsigned long long totalPositiveCount;
- (unsigned long long)_getTotalExampleCount;
@property(readonly, nonatomic) unsigned long long totalExampleCount;
- (float)_getNormalizedEntropy;
@property(readonly, nonatomic) float normalizedEntropy;
- (float)_getAveragePrediction;
@property(readonly, nonatomic) float averagePrediction;
- (long long)_getNumberOfCoordinates;
@property(readonly, nonatomic) long long getNumberOfCoordinates;
- (void)_clearModel;
- (void)clearModel;
- (_Bool)_saveDebugModelToURL:(id)arg1 error:(id *)arg2;
- (_Bool)_loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_saveModelToURL:(id)arg1 error:(id *)arg2;
- (_Bool)saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (id)predictionSetWithFeatures:(id)arg1;
- (id)predictWithFeatures:(id)arg1;
- (void)_clearCache;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (_Bool)wantsPredictionCache;
- (void)setWantsPredictionCache:(_Bool)arg1;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
- (id)init;

@end

