//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUTUnsafePromise : NSObject
{
}

+ (id)all:(id)arg1;
+ (id)fulfilledPromiseWithValue:(id)arg1;
+ (id)failedPromiseWithError:(id)arg1;
- (id)then:(id /* block */)arg1;
- (void)registerResultBlock:(id /* block */)arg1;
- (id)_init;

@end

