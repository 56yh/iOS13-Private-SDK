//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject
{
    NSOperationQueue *_serialOperationQueue;
}

@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(nonatomic) _Bool suspended;
- (void)cancelAllBlocks;
- (void)enqueueOperation:(id)arg1;
- (void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(id /* block */)arg2;
- (void)enqueueBlockForMainThread:(id /* block */)arg1;
- (void)enqueueBlock:(id /* block */)arg1;
- (id)initWithQualityOfService:(long long)arg1;
- (id)init;

@end

