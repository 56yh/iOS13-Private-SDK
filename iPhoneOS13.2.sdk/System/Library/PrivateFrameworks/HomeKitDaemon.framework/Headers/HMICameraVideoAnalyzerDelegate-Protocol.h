//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMICameraVideoAnalyzer, HMICameraVideoAnalyzerResult, HMICameraVideoAnalyzerSignificantEvent, HMICameraVideoFragment, NSError;

@protocol HMICameraVideoAnalyzerDelegate 
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didFailAnalysisForFragment:(HMICameraVideoFragment *)arg2 withError:(NSError *)arg3;
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didFindSignificantEvent:(HMICameraVideoAnalyzerSignificantEvent *)arg2 inFragment:(HMICameraVideoFragment *)arg3;
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didNotAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;
@end

