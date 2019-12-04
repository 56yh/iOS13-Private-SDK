//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@protocol OS_xpc_object;

@interface CKContextSemaphore : NSObject <NSSecureCoding>
{
    _Bool _semaOwner;
    unsigned int _sema;
    unsigned long long _shmSize;
    // Error parsing type: ^{?=AIAIAIAIAiAIAQAIAI}, name: _shm
    NSObject<OS_xpc_object> *_shmObject;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (_Bool)tryAcquire;
- (long long)waitFor:(double)arg1;
- (void)notifyAll;
- (void)notify;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)requestsServed;
- (unsigned long long)numAcquired;
- (unsigned long long)pendingExceptionsCount;
- (void)decPending;
- (void)incPending;
- (void)resetPending;
- (long long)pending;
- (void)setActiveGauge:(unsigned long long)arg1;
- (unsigned long long)activeGauge;
- (unsigned long long)gauge;
- (_Bool)busy;
- (unsigned long long)sharedMemorySize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initSemaphoreForXPCService;

@end

