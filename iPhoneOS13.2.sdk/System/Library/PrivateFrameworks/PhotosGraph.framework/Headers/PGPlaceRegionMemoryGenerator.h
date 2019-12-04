//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceRegionMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSString *_region;
    long long _year;
}

@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) NSString *region; // @synthesize region=_region;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_potentialMemoriesWithRegionNode:(id)arg1 inYear:(long long)arg2 result:(id /* block */)arg3;

@end
