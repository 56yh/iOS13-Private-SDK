//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBApplicationProcess, FBProcessState;

@interface SBApplicationProcessState : NSObject
{
    FBApplicationProcess *_process;
    FBProcessState *_processState;
    _Bool _isBeingDebugged;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool isBeingDebugged;
@property(readonly, nonatomic) long long visibility;
@property(readonly, nonatomic) long long taskState;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) int pid;
- (id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2;

@end

