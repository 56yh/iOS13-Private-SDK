//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging>
{
    unsigned int _powerAssertion;
    NSMutableSet *_currentRequestHandlerSessionIDs;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
+ (id)sharedHandler;
@property(nonatomic) unsigned int powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs; // @synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs;
- (void)deregisterRemoteRequestHandler:(id)arg1;
- (void)registerRemoteRequestHandler:(id)arg1 forSessionID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

