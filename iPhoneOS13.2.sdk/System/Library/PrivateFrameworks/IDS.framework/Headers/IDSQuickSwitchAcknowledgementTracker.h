//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject
{
    NSMutableSet *_delegateIdentifiers;
    struct _opaque_pthread_mutex_t _delegateIdentifiersMutex;
}

- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(id /* block */)arg1;
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1;
- (id)identifierForServiceDelegate:(id)arg1;
- (id)awaitAcknowledgementFromServiceDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool isAwaitingAcknowledgement;
- (void)dealloc;
- (id)init;

@end

