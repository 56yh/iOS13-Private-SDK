//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFUnfairLock.h>

__attribute__((visibility("hidden")))
@interface __HMFOSUnfairLock : HMFUnfairLock
{
    struct os_unfair_lock_s _internal;
    unsigned int _internalOptions;
}

- (void)performBlock:(id /* block */)arg1;
- (void)assertNotOwner;
- (void)assertOwner;
- (void)unlock;
- (void)lock;
- (id)initWithOptions:(unsigned long long)arg1;

@end

