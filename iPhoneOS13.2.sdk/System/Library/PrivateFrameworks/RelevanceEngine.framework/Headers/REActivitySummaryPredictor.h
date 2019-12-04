//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REActivitySummaryPredictorProperties-Protocol.h>

@class NSSet;

@interface REActivitySummaryPredictor : REPredictor <REActivitySummaryPredictorProperties>
{
    NSSet *_queries;
    float _activeEnergyPercentComplete;
    float _exerciseTimePercentComplete;
    float _standHourPercentComplete;
}

+ (id)supportedFeatures;
+ (double)updateInterval;
@property float standHourPercentComplete; // @synthesize standHourPercentComplete=_standHourPercentComplete;
@property float exerciseTimePercentComplete; // @synthesize exerciseTimePercentComplete=_exerciseTimePercentComplete;
@property float activeEnergyPercentComplete; // @synthesize activeEnergyPercentComplete=_activeEnergyPercentComplete;
- (void)_updateWithActivitySummary:(id)arg1 completion:(id /* block */)arg2;
- (void)_stopQueries;
- (void)_stopQuery:(id)arg1;
- (void)_runQuery:(id)arg1;
- (void)_startActivitySummaryQueryWithRetries:(long long)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)update;
- (void)pause;
- (void)resume;
- (id)_init;

@end

