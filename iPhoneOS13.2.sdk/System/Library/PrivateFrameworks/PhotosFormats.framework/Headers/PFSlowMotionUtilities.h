//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFSlowMotionUtilities : NSObject
{
}

+ (CDStruct_e83c9415)adjustTimeRange:(CDStruct_e83c9415)arg1 forNewStartTime:(CDStruct_1b6d18a9)arg2 endTime:(CDStruct_1b6d18a9)arg3;
+ (id)audioMixForScaledComposition:(id)arg1 timeRangeMapper:(id)arg2;
+ (CDStruct_e83c9415)_timeRangeFromTime:(float)arg1 toTime:(float)arg2;
+ (id)_setVolume:(float)arg1 forSlowMotionRegionsInTrack:(id)arg2 timeRangeMapper:(id)arg3;
+ (id)exportPresetForAsset:(id)arg1 preferredPreset:(id)arg2;
+ (void)configureExportSession:(id)arg1 forcePreciseConversion:(_Bool)arg2;
+ (double)_scaleWithinComposition:(id)arg1 fromCursor:(double)arg2 timeStep:(double)arg3 rate:(float)arg4 timeRangeMapper:(id)arg5;
+ (_Bool)_scaleComposition:(id)arg1 baseDuration:(double)arg2 slowMotionRate:(float)arg3 slowMotionRegions:(id)arg4 forExport:(_Bool)arg5 outTimeRangeMapper:(id *)arg6;
+ (id)timeRangeMapperForSourceDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4;
+ (id)_slowMotionRegionsFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1;
+ (id)_scaledCompositionForAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4 outTimeRangeMapper:(id *)arg5;
+ (_Bool)_isValidSlowMotionTimeRange:(CDStruct_e83c9415)arg1;
+ (_Bool)_isValidSlowMotionRate:(float)arg1;
+ (id)assetFromVideoAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4 outAudioMix:(id *)arg5 outTimeRangeMapper:(id *)arg6;
+ (id)slowMotionSourceAssetPropertyKeys;
+ (int)preferredTimeScale;
+ (id)sharedConfiguration;

@end

