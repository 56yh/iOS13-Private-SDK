//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSString;
@protocol OS_dispatch_group, TSUSharedResourceControllerDelegate;

@interface TSUSharedResourceController : NSObject
{
    int _acquirerCount;
    id <TSUSharedResourceControllerDelegate> _delegate;
    NSString *_resourceForThreadKey;
    NSString *_hasResourceForThreadKey;
    NSCondition *_resourceLock;
    id _resource;
    struct {
        unsigned int canWaitOnMainThread:1;
        unsigned int acquiresResourceAsynchronously:1;
        unsigned int hasResource:1;
    } _flags;
    int _threadsAcquiringResourceCount;
    NSCondition *_waitLock;
    int _waitCount;
    NSObject<OS_dispatch_group> *_accessInProgressGroup;
    NSObject<OS_dispatch_group> *_willEndAccessGroup;
    NSString *_UUID;
}

@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)description;
- (void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(id /* block */)arg1;
- (void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(id /* block */)arg1;
- (_Bool)performSynchronousAccessIfResourceIsAvailable:(_Bool)arg1 usingBlock:(id /* block */)arg2;
- (_Bool)performSynchronousAccessIfResourceIsAvailableUsingBlock:(id /* block */)arg1;
- (void)performSynchronousAccessUsingBlock:(id /* block */)arg1;
- (void)willEndAccessToResourceForcingToWaitForPendingAccesses:(_Bool)arg1;
- (void)willEndAccessToResource;
- (void)wakeUpAllThreadsWaitingForResourceWithLock;
- (void)didBeginAccessToResource:(id)arg1 isFromThreadWaitingToAcquireResource:(_Bool)arg2;
- (void)didBeginAccessToResource:(id)arg1;
@property(nonatomic) _Bool canWaitOnMainThread;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

