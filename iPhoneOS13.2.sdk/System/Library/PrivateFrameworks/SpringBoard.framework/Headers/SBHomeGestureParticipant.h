//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSIndexSet, NSString, SBHomeGestureArbiter;
@protocol SBHomeGestureParticipantDelegate;

@interface SBHomeGestureParticipant : NSObject <BSDescriptionProviding>
{
    _Bool _ownsHomeGesture;
    long long _identifier;
    id <SBHomeGestureParticipantDelegate> _delegate;
    NSIndexSet *_trumpsAdditionalIdentifiers;
    SBHomeGestureArbiter *_arbiter;
}

@property(nonatomic) __weak SBHomeGestureArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(copy, nonatomic) NSIndexSet *trumpsAdditionalIdentifiers; // @synthesize trumpsAdditionalIdentifiers=_trumpsAdditionalIdentifiers;
@property(nonatomic) __weak id <SBHomeGestureParticipantDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ownsHomeGesture; // @synthesize ownsHomeGesture=_ownsHomeGesture;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)invalidate;
- (id)initWithIdentifier:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
