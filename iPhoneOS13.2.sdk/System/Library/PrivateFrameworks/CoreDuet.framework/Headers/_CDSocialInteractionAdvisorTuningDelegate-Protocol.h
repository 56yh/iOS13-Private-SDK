//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class _CDPModelTuning;

@protocol _CDSocialInteractionAdvisorTuningDelegate 
- (void)modelTunerWillStop:(_CDPModelTuning *)arg1;
- (void)modelTunerWillResume:(_CDPModelTuning *)arg1;
- (void)modelTuner:(_CDPModelTuning *)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6;
@end

