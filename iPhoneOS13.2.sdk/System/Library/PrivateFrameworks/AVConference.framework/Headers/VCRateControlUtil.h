//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCRateControlUtil : NSObject
{
}

+ (void)calculateNOWRDAccWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2;
+ (double)calculateNOWRDWithDuration:(double)arg1 owrdList:(CDStruct_55dce769 *)arg2 historySize:(unsigned int)arg3 minHistorySize:(unsigned int)arg4 initalRampUpReadyDuration:(double)arg5 isInitialRampUp:(_Bool)arg6;
+ (void)calculateNOWRDShortWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2 isInitialRampUp:(_Bool)arg3;
+ (void)calculateNOWRDWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2 isInitialRampUp:(_Bool)arg3;
+ (_Bool)prepareOWRDList:(CDStruct_55dce769 *)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig)arg4;
+ (_Bool)calculateCongestionMetricsFromOWRDList:(CDStruct_55dce769 *)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig)arg4 isInitialRampUp:(_Bool)arg5;

@end

