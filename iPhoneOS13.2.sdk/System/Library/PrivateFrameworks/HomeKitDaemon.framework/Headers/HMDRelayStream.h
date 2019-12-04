//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPRelayStream.h>

#import <HomeKitDaemon/HMDRelayManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegateHomeKit-Protocol.h>

@class HMDRelayManager, IDSService, NSData, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit>
{
    _Bool _opened;
    _Bool _suspended;
    HMDRelayManager *_relayManger;
    NSString *_accessoryIdentifier;
    NSData *_accessToken;
    NSString *_controllerIdentifier;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_pendingSentMessageIdentifiers;
}

+ (id)logCategory;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) NSMutableArray *pendingSentMessageIdentifiers; // @synthesize pendingSentMessageIdentifiers=_pendingSentMessageIdentifiers;
@property(nonatomic, getter=isOpened) _Bool opened; // @synthesize opened=_opened;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly, copy, nonatomic) NSString *controllerIdentifier; // @synthesize controllerIdentifier=_controllerIdentifier;
@property(readonly, copy, nonatomic) NSData *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) __weak HMDRelayManager *relayManger; // @synthesize relayManger=_relayManger;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (id)logIdentifier;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (id)writeData:(id)arg1 error:(id *)arg2;
- (void)resume;
- (void)suspend;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)open;
- (unsigned long long)mtu;
- (id)initWithRelayManager:(id)arg1 idsService:(id)arg2 accessoryIdentifier:(id)arg3 accessToken:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

