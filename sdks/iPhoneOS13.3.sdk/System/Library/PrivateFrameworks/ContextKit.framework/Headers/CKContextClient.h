//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContextSemaphore, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKContextClient : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    NSObject<OS_dispatch_semaphore> *_sema_capabilities;
    CKContextSemaphore *_serviceSemaphore;
    NSUInteger _defaultRequestType;
}

+ (id)clientWithDefaultRequestType:(NSUInteger)arg1;
+ (id)new;
@property(readonly, nonatomic) NSUInteger defaultRequestType; // @synthesize defaultRequestType=_defaultRequestType;
// - (void).cxx_destruct;
- (void)ancestorsForTopics:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)workWithServiceSemaphore:(id /* CDUnknownBlockType */)arg1;
- (BOOL)tryAcquireServiceSemaphore;
- (BOOL)hasServiceSemaphore;
@property(readonly, nonatomic) NSSet *capabilities;
- (id)indexVersionId;
- (id)retrieveCapabilites;
- (void)registerConfigurationUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)capabilitiesWithReply:(id /* CDUnknownBlockType */)arg1;
- (id)newRequest;
- (void)_updateCachedCapabilites;
- (void)_handleConfigurationUpdate;
- (void)ensureFullyInitialized;
- (id)initWithDefaultRequestType:(NSUInteger)arg1;
- (id)init;

@end

