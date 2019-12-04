//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartInfo;

__attribute__((visibility("hidden")))
@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject
{
    TSCHChartInfo *mChartInfo;
    id /* block */ mWillModifyBlock;
}

+ (id)upgraderWithChartInfo:(id)arg1;
+ (double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned long long)arg3 toNewLimitingSeries:(unsigned long long)arg4;
+ (_Bool)chartTypeUsesSeriesLimiting:(id)arg1;
@property(copy, nonatomic) id /* block */ willModifyBlock; // @synthesize willModifyBlock=mWillModifyBlock;
- (void)upgradeForSpice:(_Bool)arg1 naturalSize:(struct CGSize)arg2;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const CDStruct_b1c75024 *)arg1 toLayoutSettings:(const CDStruct_b1c75024 *)arg2;
- (id)adjustedScaleFromLayoutSettings:(const CDStruct_b1c75024 *)arg1 toLayoutSettings:(const CDStruct_b1c75024 *)arg2;
- (unsigned long long)numberOfSeries;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1;
- (void)mutateInfoWithMutations:(id)arg1;
- (id)configuredSceneWithLayoutSettings:(CDStruct_b1c75024)arg1;
- (void)configureScene:(id)arg1;
- (CDStruct_b1c75024)upgradedLayoutSettings;
- (CDStruct_b1c75024)oldLayoutSettings;
- (CDStruct_b1c75024)p_oldLayoutSettingsForSpice:(_Bool)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end

