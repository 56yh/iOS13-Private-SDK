//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NPKWorkQueue : NSObject
{
    _Bool _performingWork;
    _Bool _takeOutTransactions;
    NSString *_workQueueName;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remainingWork;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(nonatomic) _Bool takeOutTransactions; // @synthesize takeOutTransactions=_takeOutTransactions;
@property(nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool performingWork; // @synthesize performingWork=_performingWork;
@property(retain, nonatomic) NSMutableArray *remainingWork; // @synthesize remainingWork=_remainingWork;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *workQueueName; // @synthesize workQueueName=_workQueueName;
- (void)performWork:(id /* block */)arg1;
- (void)_onQueue_doWorkIfNecessary;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 takeOutTransactions:(_Bool)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end
