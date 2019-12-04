//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBProcessState, FBProcessWatchdogEventContext, FBSProcessTerminationRequest, NSString, RBSProcessExitContext;

@interface FBProcessExitContext : NSObject <BSDescriptionProviding>
{
    unsigned long long _exitReason;
    RBSProcessExitContext *_underlyingContext;
    FBSProcessTerminationRequest *_terminationRequest;
    FBProcessWatchdogEventContext *_watchdogContext;
    FBProcessState *_stateBeforeExiting;
    long long _terminationReason;
}

+ (id)descriptionForExitReason:(unsigned long long)arg1;
@property(nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property(copy, nonatomic) FBProcessState *stateBeforeExiting; // @synthesize stateBeforeExiting=_stateBeforeExiting;
@property(retain, nonatomic) FBProcessWatchdogEventContext *watchdogContext; // @synthesize watchdogContext=_watchdogContext;
@property(retain, nonatomic) FBSProcessTerminationRequest *terminationRequest; // @synthesize terminationRequest=_terminationRequest;
@property(readonly, nonatomic) RBSProcessExitContext *underlyingContext; // @synthesize underlyingContext=_underlyingContext;
@property(readonly, nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithUnderlyingContext:(id)arg1;
- (_Bool)fairPlayFailure;
- (_Bool)consideredJetsam;
- (int)terminationSignal;
- (int)exitCode;
- (_Bool)exitedNormally;
- (long long)exitStatus;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

