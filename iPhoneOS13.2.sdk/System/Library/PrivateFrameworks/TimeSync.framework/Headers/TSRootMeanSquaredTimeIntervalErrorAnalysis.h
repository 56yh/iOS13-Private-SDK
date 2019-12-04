//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSRootMeanSquaredTimeIntervalErrorAnalysis : TSTimeErrorAnalysis
{
    double *_rmstie;
}

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;
- (void)dealloc;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1;
- (id)rmstieFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
@property(readonly, copy, nonatomic) NSArray *rmstie; // @dynamic rmstie;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (id)initWithTimeErrorValues:(id)arg1;

@end

