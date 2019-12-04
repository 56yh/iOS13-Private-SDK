//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBProcess.h>

@class BKSProcessAssertion, FBProcessWatchdog, FBProcessWatchdogEventContext, FBSProcessExecutionProvision, FBSProcessTerminationRequest, FBSProcessWatchdogPolicy, NSMutableArray, RBSAssertion;

@interface FBApplicationProcess : FBProcess
{
    FBSProcessTerminationRequest *_terminationRequest;
    FBProcessWatchdogEventContext *_terminationWatchdogContext;
    long long _terminationReason;
    NSMutableArray *_queue_terminateRequestCompletionBlocks;
    long long _watchdogReportType;
    FBProcessWatchdog *_watchdog;
    FBSProcessWatchdogPolicy *_sceneCreateWatchdogPolicy;
    FBSProcessExecutionProvision *_latestViolatedProvision;
    RBSAssertion *_gracefulKillAssertion;
    BKSProcessAssertion *_mediaAssertion;
    BKSProcessAssertion *_audioAssertion;
    BKSProcessAssertion *_accessoryAssertion;
    _Bool _recordingAudio;
    _Bool _nowPlayingWithAudio;
    _Bool _connectedToExternalAccessory;
}

@property(nonatomic, getter=isConnectedToExternalAccessory) _Bool connectedToExternalAccessory; // @synthesize connectedToExternalAccessory=_connectedToExternalAccessory;
@property(nonatomic, getter=isNowPlayingWithAudio) _Bool nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property(nonatomic, getter=isRecordingAudio) _Bool recordingAudio; // @synthesize recordingAudio=_recordingAudio;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (_Bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (void)_watchdogStopped:(id)arg1;
- (void)_watchdogStarted:(id)arg1;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (void)_queue_dropAssertions;
- (long long)_watchdogReportType;
- (long long)_exceptionCodeForKillReason:(int)arg1;
- (_Bool)_queue_shouldWatchdogWithDeclineReason:(id *)arg1;
- (void)_queue_cancelWatchdogTimer;
- (void)_queue_startWatchdogTimerForContext:(id)arg1;
- (void)_queue_killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_terminateWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_executeKillForRequest:(id)arg1;
- (id)_queue_composeContextWithValue:(id)arg1 key:(id)arg2;
- (id)_queue_crashReportThermalsInfo;
- (void)_queue_doGracefulKillWithDeliveryConfirmation:(id /* block */)arg1;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_queue_internalDebugEnvironmentVariables;
- (void)_queue_noteLaunchDidComplete:(_Bool)arg1;
- (void)_queue_noteLaunchWillComplete;
- (id)_queue_createBootstrapContext;
- (id)_watchdogProvider;
- (void)_queue_executeTerminateRequestCompletionBlocksIfNecessaryForSucccess:(_Bool)arg1;
- (_Bool)_wantsStateUpdates;
- (void)invalidate;
- (void)_queue_noteProcessDidExit:(id)arg1;
@property(readonly, nonatomic) double elapsedCPUTime;
- (_Bool)isApplicationProcess;
- (void)killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3 completion:(id /* block */)arg4;
- (void)killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3;

@end

