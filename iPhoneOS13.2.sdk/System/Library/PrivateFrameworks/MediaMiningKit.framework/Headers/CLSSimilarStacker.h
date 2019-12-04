//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSSimilarStacker : NSObject
{
    long long _algorithm;
    id /* block */ _sceneprintGetterBlock;
    double _distanceThresholdForIdenticalSimilarity;
    double _distanceThresholdForIdenticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarity;
    double _distanceThresholdForSemanticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarityWithPersons;
}

+ (id /* block */)distanceBlockForAlgorithm:(long long)arg1 sceneprintGetterBlock:(id /* block */)arg2;
+ (double)defaultDistanceThresholdForAlgorithm:(long long)arg1 similarity:(long long)arg2;
@property(nonatomic) double distanceThresholdForSemanticalSimilarityWithPersons; // @synthesize distanceThresholdForSemanticalSimilarityWithPersons=_distanceThresholdForSemanticalSimilarityWithPersons;
@property(nonatomic) double distanceThresholdForSemanticalSimilarityWithPeople; // @synthesize distanceThresholdForSemanticalSimilarityWithPeople=_distanceThresholdForSemanticalSimilarityWithPeople;
@property(nonatomic) double distanceThresholdForSemanticalSimilarity; // @synthesize distanceThresholdForSemanticalSimilarity=_distanceThresholdForSemanticalSimilarity;
@property(nonatomic) double distanceThresholdForIdenticalSimilarityWithPeople; // @synthesize distanceThresholdForIdenticalSimilarityWithPeople=_distanceThresholdForIdenticalSimilarityWithPeople;
@property(nonatomic) double distanceThresholdForIdenticalSimilarity; // @synthesize distanceThresholdForIdenticalSimilarity=_distanceThresholdForIdenticalSimilarity;
@property(copy, nonatomic) id /* block */ sceneprintGetterBlock; // @synthesize sceneprintGetterBlock=_sceneprintGetterBlock;
@property(readonly) long long algorithm; // @synthesize algorithm=_algorithm;
- (_Bool)_canUseSceneprintSimilarStackingWithItems:(id)arg1;
- (double)distanceThresholdForSimilarity:(long long)arg1;
- (double)distanceBetweenItem:(id)arg1 andItem:(id)arg2;
- (id)adaptiveStackSimilarItems:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)stackSimilarItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(_Bool)arg3 progressBlock:(id /* block */)arg4;
- (id /* block */)similarGroupComparator;
- (id)initWithAlgorithm:(long long)arg1;
- (id)legacyStackSimilarItems:(id)arg1 withThreshold:(double)arg2;

@end

