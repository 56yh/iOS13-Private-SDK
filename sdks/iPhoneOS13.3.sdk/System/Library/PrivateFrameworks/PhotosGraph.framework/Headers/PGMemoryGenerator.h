//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGMemoryController;

@interface PGMemoryGenerator : NSObject
{
    BOOL _isDebug;
    NSUInteger _duration;
    NSUInteger _precision;
    PGMemoryController *_controller;
}

+ (long long)titleDateMatchingTypeForMemoryCategory:(NSUInteger)arg1;
+ (id)assetPropertySetsForMemories;
@property BOOL isDebug; // @synthesize isDebug=_isDebug;
@property(readonly) __weak PGMemoryController *controller; // @synthesize controller=_controller;
@property NSUInteger precision; // @synthesize precision=_precision;
@property NSUInteger duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (id)createMemoryWithPotentialMemory:(id)arg1;
@property(readonly) BOOL canFallbackToDejunkAndDedupeForShowMore;
- (void)_mergeCurationSetsIfNeededForMemory:(id)arg1;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)arg1;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (NSUInteger)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1;
- (void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg1 attemptUpgradesBeforeSorting:(BOOL)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg1;
- (BOOL)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg1 didUpgradeToWeekend:(BOOL)arg2 upgradedToMeaningfulEvent:(BOOL )arg3;
- (BOOL)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg1 upgradedToWeekend:(BOOL )arg2;
- (BOOL)_eventIsAcceptableForUpgrade:(id)arg1;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)setDefaultValuesIfNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_generateMemoryForDryTesting;
- (id)generateMemories:(NSUInteger)arg1;
- (id)generateAllMemories;
- (id)generateMemory;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithController:(id)arg1;

@end

