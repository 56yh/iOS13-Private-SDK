//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface REExpectation : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    // Error parsing type: Ai, name: _count
}

- (void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (void)notifyOperationsCompleteOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)endOperation;
- (void)beginOperation;
@property(readonly, nonatomic) long long outstandingOperations;
- (id)init;

@end

