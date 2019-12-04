//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLLazyObject : NSObject
{
    _Bool _shouldRetryBlockOnNil;
    struct os_unfair_lock_s _lock;
    id /* block */ _block;
    id _object;
}

- (void)invalidateWithHandler:(id /* block */)arg1;
- (void)invalidate;
@property(readonly) id objectValue;
- (id)initWithRetry:(_Bool)arg1 block:(id /* block */)arg2;
- (id)initWithRetriableBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

