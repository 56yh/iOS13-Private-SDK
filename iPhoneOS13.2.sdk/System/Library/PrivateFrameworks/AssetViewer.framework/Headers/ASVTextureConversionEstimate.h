//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetViewer/ASVTextureDescription.h>

@interface ASVTextureConversionEstimate : ASVTextureDescription
{
    long long _converterType;
    CDStruct_ba838cea _estimatedMemoryDelta;
}

+ (id)conversionEstimatesSortedByPeakMemoryUsage:(id)arg1;
+ (id)heaviestConversionEstimate:(id)arg1 withMinimumDestinationSize: /* Error: Ran out of types for this method. */;
+ (unsigned long long)peakMemoryForConversionEstimates:(id)arg1;
+ (id)conversionEstimatesFromTextureDescriptions:(id)arg1 toFitAvailableMemory:(unsigned long long)arg2 withConverters:(id)arg3 preferredMaxTextureSize:(long long *)arg4 outcome: /* Error: Ran out of types for this method. */;
+ (id)textureDescription:(id)arg1 downsampledToTryAndFitDestinationWithinSize: /* Error: Ran out of types for this method. */;
@property(nonatomic) CDStruct_ba838cea estimatedMemoryDelta; // @synthesize estimatedMemoryDelta=_estimatedMemoryDelta;
@property(nonatomic) long long converterType; // @synthesize converterType=_converterType;
- (id)debugDescription;
@property(readonly, nonatomic) unsigned long long weight;
- (unsigned long long)peakMemoryUsage;
- (void)updateFromConverter:(id)arg1;
- (id)initWithTextureDescription:(id)arg1 converter:(id)arg2;

@end

