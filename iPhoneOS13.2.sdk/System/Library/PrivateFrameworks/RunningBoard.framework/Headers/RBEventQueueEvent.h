//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface RBEventQueueEvent : NSObject <BSDescriptionProviding>
{
    id _context;
    double _eventTime;
    id /* block */ _action;
}

@property(copy, nonatomic) id /* block */ action; // @synthesize action=_action;
@property(nonatomic) double eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

