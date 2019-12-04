//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class INResumeTimerIntent;

@protocol INResumeTimerIntentHandling 
- (void)handleResumeTimer:(INResumeTimerIntent *)arg1 completion:(void (^)(INResumeTimerIntentResponse *))arg2;

@optional
- (void)resolveResumeMultipleForResumeTimer:(INResumeTimerIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolveTargetTimerForResumeTimer:(INResumeTimerIntent *)arg1 withCompletion:(void (^)(INTimerResolutionResult *))arg2;
- (void)confirmResumeTimer:(INResumeTimerIntent *)arg1 completion:(void (^)(INResumeTimerIntentResponse *))arg2;
@end

