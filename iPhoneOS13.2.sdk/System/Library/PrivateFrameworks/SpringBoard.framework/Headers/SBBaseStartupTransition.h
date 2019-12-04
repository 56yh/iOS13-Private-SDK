//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/SBStartupTransition-Protocol.h>

@class SBMainWorkspace, SBStartupTransitionContext;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition>
{
    unsigned long long _destination;
    SBStartupTransitionContext *_context;
    SBMainWorkspace *_mainWorkspace;
}

@property(readonly, nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) SBStartupTransitionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_mainWorkspace;
- (void)_begin;
- (void)performTransitionWithCompletionBlock:(id /* block */)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;

@end

