//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator
{
    _Bool _onlyOverTheYears;
    _Bool _keepsOnlyIsInteresting;
    long long _hobbyType;
}

@property(nonatomic) _Bool keepsOnlyIsInteresting; // @synthesize keepsOnlyIsInteresting=_keepsOnlyIsInteresting;
@property(nonatomic) _Bool onlyOverTheYears; // @synthesize onlyOverTheYears=_onlyOverTheYears;
@property(nonatomic) long long hobbyType; // @synthesize hobbyType=_hobbyType;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 *)arg3 enumerationBlock:(id /* block */)arg4;
- (void)_potentialHobbyMemoryForHobby:(id)arg1 results:(id /* block */)arg2;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (id)confidenceThresholdByWhitelistedSceneIdentifier;

@end

