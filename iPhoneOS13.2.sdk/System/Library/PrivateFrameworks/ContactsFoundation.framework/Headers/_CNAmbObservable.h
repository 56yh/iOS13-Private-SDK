//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <ContactsFoundation/_CNAmbObserverDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString;

@interface _CNAmbObservable : CNObservable <_CNAmbObserverDelegate>
{
    NSArray *_observables;
    NSMapTable *_tokensByObserver;
    _Bool _winnerDeclared;
}

- (void)cancelRemainingObservables;
- (void)observerWillRelayEvent:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

