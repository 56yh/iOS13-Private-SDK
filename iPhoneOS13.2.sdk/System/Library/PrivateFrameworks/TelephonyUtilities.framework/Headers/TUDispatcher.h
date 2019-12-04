//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)dispatcherWithQueue:(id)arg1;
+ (id)dispatcherWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id /* block */)qosUserInteractiveDispatchBlockForBlock:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)boostQualityOfService;
- (void)dispatchAsynchronousBlock:(id /* block */)arg1;
- (void)dispatchSynchronousBlock:(id /* block */)arg1;
- (id)init;

@end

