//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFBufferedQueueStrategy : NSObject <EFQueueingStrategy>
{
    id /* block */ _batchHandler;
    unsigned long long _capacity;
}

@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) id /* block */ batchHandler; // @synthesize batchHandler=_batchHandler;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(_Bool)arg2 buffer:(id)arg3;
@property(readonly, nonatomic) NSString *descriptionType;
- (id)initWithCapacity:(unsigned long long)arg1 batchHandler:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

