//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject
{
    unsigned short _relRankFeature;
    unsigned short _absRankFeature;
    NSPredicate *_predicate;
    id /* block */ _comparator;
}

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short *)arg2 relRankFeatureOut:(unsigned short *)arg3;
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1 currentTime:(double)arg2;
+ (id /* block */)_resultComparatorForRelativeFeature:(unsigned long long)arg1;
+ (id)_relativeContextsForFeatures:(id)arg1 currentTime:(double)arg2;
+ (id)relativeContextsForResultSetWithCurrentTime:(double)arg1;
+ (id)relativeContextsForBundle:(id)arg1 currentTime:(double)arg2;
@property(copy, nonatomic) id /* block */ comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned short absRankFeature; // @synthesize absRankFeature=_absRankFeature;
@property(nonatomic) unsigned short relRankFeature; // @synthesize relRankFeature=_relRankFeature;
- (id)initWithFeature:(unsigned long long)arg1 currentTime:(double)arg2;

@end

