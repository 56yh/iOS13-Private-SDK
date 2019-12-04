//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteractivePlaybackTransitioning-Protocol.h>
#import <SilexVideo/SVPlaybackTransitionCoordinator-Protocol.h>

@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;
@protocol SVPlaybackTransitionContext;

@interface SVPlaybackTransitionCoordinator : NSObject <SVInteractivePlaybackTransitioning, SVPlaybackTransitionCoordinator>
{
    NSMutableArray *_transitionAlongsideBlocks;
    NSMutableArray *_completionBlocks;
    id <SVPlaybackTransitionContext> _context;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_transitioningState;
}

@property(readonly, nonatomic) NFStateMachineState *transitioningState; // @synthesize transitioningState=_transitioningState;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) id <SVPlaybackTransitionContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *transitionAlongsideBlocks; // @synthesize transitionAlongsideBlocks=_transitionAlongsideBlocks;
- (void)transitionAlongside:(id /* block */)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

