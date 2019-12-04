//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/MTUpdateTimerIntentHandler.h>

#import <MobileTimer/INPauseTimerIntentHandling-Protocol.h>
#import <MobileTimer/INResumeTimerIntentHandling-Protocol.h>

@class NSString;

@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler <INPauseTimerIntentHandling, INResumeTimerIntentHandling>
{
}

- (id)_responseToResumeTimerIntent:(id)arg1 withResumedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (id)_responseToPauseTimerIntent:(id)arg1 withPausedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)_handleResumeTimer:(id)arg1 dryRun:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)handleResumeTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmResumeTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveResumeMultipleForResumeTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTargetTimerForResumeTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handlePauseTimer:(id)arg1 dryRun:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)handlePauseTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmPauseTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)resolvePauseMultipleForPauseTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTargetTimerForPauseTimer:(id)arg1 withCompletion:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

