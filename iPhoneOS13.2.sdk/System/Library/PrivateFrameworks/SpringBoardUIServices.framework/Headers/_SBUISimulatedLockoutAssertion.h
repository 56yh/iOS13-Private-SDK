//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/BSSimpleAssertion.h>

#import <SpringBoardUIServices/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface _SBUISimulatedLockoutAssertion : BSSimpleAssertion <BSDescriptionProviding>
{
    unsigned long long _lockoutState;
}

@property(readonly, nonatomic) unsigned long long lockoutState; // @synthesize lockoutState=_lockoutState;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithLockoutState:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(id /* block */)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

