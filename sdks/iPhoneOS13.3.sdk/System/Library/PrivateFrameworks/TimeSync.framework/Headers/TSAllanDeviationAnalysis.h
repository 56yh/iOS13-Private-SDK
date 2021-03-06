//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSAllanDeviationAnalysis : TSTimeErrorAnalysis
{
    double _adev;
}

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;
- (void)dealloc;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)arg1;
- (BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (BOOL)exportAnalysisToDirectoryURL:(id)arg1;
- (id)adevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
@property(readonly, copy, nonatomic) NSArray *adev; // @dynamic adev;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)analysisLimit;
- (id)initWithTimeErrorValues:(id)arg1;

@end

