//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSOperationQueue, NSString;

@interface _CNOperationQueueScheduler : NSObject <CNScheduler>
{
    NSOperationQueue *_queue;
    _Bool _isQualityOfServiceSpecified;
}

+ (id)operationWithQualityOfService:(unsigned long long)arg1 block:(id /* block */)arg2;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id /* block */)blockWithCurrentQualityOfServiceForBlock:(id /* block */)arg1 ifAllowedForRequestedQualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)_enqueueBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(id /* block */)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2;
- (id)initWithQualityOfService:(unsigned long long)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
