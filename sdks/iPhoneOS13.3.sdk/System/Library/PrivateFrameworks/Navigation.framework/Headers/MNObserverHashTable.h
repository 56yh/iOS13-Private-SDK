//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol, geo_isolater;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNObserverHashTable : NSObject
{
    Protocol *_protocol;
    NSHashTable *_observers;
    geo_isolater *_observerLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
// - (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) BOOL hasObservers;
- (NSUInteger)count;
- (id)initWithProtocol:(id)arg1;

@end
