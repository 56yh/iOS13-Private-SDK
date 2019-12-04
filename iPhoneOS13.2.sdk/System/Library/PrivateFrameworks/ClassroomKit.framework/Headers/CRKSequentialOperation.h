//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATOperation.h"

@class CATOperationQueue, NSArray;

@interface CRKSequentialOperation : CATOperation
{
    CATOperation *_failedOperation;
    unsigned long long _frontOfQueue;
    NSArray *_operations;
    CATOperationQueue *_queue;
}

+ (id)sequentialOperationWithOperations:(id)arg1;
@property(readonly, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(nonatomic) unsigned long long frontOfQueue; // @synthesize frontOfQueue=_frontOfQueue;
@property(retain, nonatomic) CATOperation *failedOperation; // @synthesize failedOperation=_failedOperation;
- (void)frontOperationDidFinish:(id)arg1;
- (void)enqueueFront;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (id)init;
- (id)initWithSequentialOperations:(id)arg1 queue:(id)arg2;

@end
