//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, _HMFNetManagerWoWAssertion;
@protocol OS_dispatch_queue;

@interface HMFNetManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HMFNetManagerWoWAssertion *_wowAssertion;
}

+ (id)sharedManager;
+ (void)initialize;
@property __weak _HMFNetManagerWoWAssertion *wowAssertion; // @synthesize wowAssertion=_wowAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)deregisterWoWAssertionForObject:(id)arg1;
- (void)registerWoWAssertionForObject:(id)arg1;
- (void)deregisterObject:(id)arg1;
- (id)init;

@end

