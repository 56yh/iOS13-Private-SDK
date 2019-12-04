//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/IDSServiceDelegate-Protocol.h>

@class HDDaemon, HDIDSPersistentDictionary, IDSService, NSMutableDictionary, NSString, NSUUID;
@protocol HDIDSMessageCenterDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate>
{
    HDDaemon *_daemon;
    NSString *_serviceIdentifier;
    NSString *_shortServiceIdentifier;
    NSUUID *_pairingUUID;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    HDIDSPersistentDictionary *_persistentContextStore;
    double _nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    // Error parsing type: AB, name: _invalidated
    id <HDIDSMessageCenterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)createPersistentDictionaryWithURL:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(nonatomic) __weak id <HDIDSMessageCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_queue;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(id /* block */)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)cancelPendingRequestsWithMessageID:(unsigned short)arg1 device:(id)arg2;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (void)_sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
@property(readonly, nonatomic) IDSService *idsService;
- (void)resume;
- (void)_updateExpireTimerWithTimestamp:(double)arg1;
- (void)_expireMessages;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (id)_logPrefix;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(_Bool)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIDSServiceIdentifier:(id)arg1 persistentDictionary:(id)arg2 queue:(id)arg3 daemon:(id)arg4;
- (id)_mockDeviceWithNRDevice:(id)arg1;
- (id)deviceForFromID:(id)arg1;
- (id)nanoSyncDevices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

