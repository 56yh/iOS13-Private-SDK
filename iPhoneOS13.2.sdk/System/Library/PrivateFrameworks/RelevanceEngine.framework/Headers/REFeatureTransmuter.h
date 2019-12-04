//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableOrderedSet, REFeatureMap, REFeatureMapGenerator, REFeatureSet;

@interface REFeatureTransmuter : NSObject
{
    REFeatureSet *_inputSet;
    REFeatureSet *_outputSet;
    NSArray *_orderedFeatures;
    REFeatureMapGenerator *_orderedFeatureMapGenerator;
    REFeatureMap *_scratchValues;
    unsigned long long *_scratchTaggedValues;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    NSMutableOrderedSet *_featureValuesCache;
    NSLock *_featureValuesCacheLock;
}

@property(readonly, nonatomic) REFeatureSet *outputFeatures;
@property(readonly, nonatomic) REFeatureSet *inputFeatures;
- (id)transformFeatureMaps:(id)arg1;
- (id)_buildGraph;
- (_Bool)_supportedFeature:(id)arg1;
- (void)dealloc;
- (id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3;

@end

