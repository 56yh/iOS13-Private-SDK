//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYSyncEngine.h>

#import <CompanionSync/IDSServiceDelegate-Protocol.h>

@class IDSMessageContext, IDSService, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSObject, NSString, NSURL, SYDevice, SYStartSyncSession, _SYInputStreamer, _SYOutputStreamer;
@protocol OS_dispatch_queue, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate>
{
    _Bool _inSession;
    _Bool _sessionCanceled;
    SYStartSyncSession *_sessionStartMessage;
    NSURL *_outputFileURL;
    _SYOutputStreamer *_outputStream;
    NSURL *_inputFileURL;
    _SYInputStreamer *_inputStream;
    IDSMessageContext *_inputPriorityBoostContext;
    NSURL *_responseFileURL;
    _SYOutputStreamer *_responseStream;
    _Bool _responsesCanceled;
    IDSService *_idsService;
    SYDevice *_activeDevice;
    SYDevice *_sessionDevice;
    SYDevice *_responseDevice;
    struct os_unfair_lock_s _idsQueueLock;
    NSObject<OS_dispatch_queue> *_idsQueue;
    _Bool _idsQueueIsSuspended;
    _Bool _idsQueueResumedLock;
    NSMutableIndexSet *_messageRows;
    NSMutableIndexSet *_responseMessageRows;
    NSMutableArray *_deferredIncomingSessions;
    NSMutableSet *_singleMessageUUIDs;
    struct os_unfair_lock_s _messageMapLock;
    NSMutableDictionary *_messageIDsToSessionIDs;
    NSObject<OS_os_transaction> *_closureTransaction;
    NSObject<OS_os_transaction> *_responseSessionTransaction;
    NSDictionary *_customIDSOptions;
}

@property(copy, nonatomic) NSDictionary *customIDSOptions; // @synthesize customIDSOptions=_customIDSOptions;
- (unsigned long long)_crcChecksum:(id)arg1;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(id /* block */)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)_handleError:(id)arg1 messageID:(id)arg2 streamer:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)_processNMSMessageData:(id)arg1 context:(id)arg2;
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleProtobuf:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 isResponse:(_Bool)arg4 withCompletion:(id /* block */)arg5;
- (void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)_shouldTreatAsSessionEnd:(id)arg1;
- (void)_recordLastSeqNo:(id)arg1;
- (void)_readNextProtobuf:(id /* block */)arg1;
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id *)arg2;
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (id)_fileTransferHeader;
- (id)idsOptions:(id)arg1 forFileTransfer:(_Bool)arg2;
- (id)idsOptions:(id)arg1;
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (void)_cancelResponses;
- (void)_cancelSession;
- (id)stateForLogging;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (void)_enqueueSingleMessage:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (_Bool)_sessionDeviceCanUseSingleMessages;
- (_Bool)targetIsNearby;
- (_Bool)buffersHandshake;
- (_Bool)buffersSessions;
- (_Bool)isInSession;
- (void)endSession;
- (void)beginSession;
- (void)endResponseSession;
- (void)beginResponseSession;
- (void)endFileTransferForStream:(id)arg1 atURL:(id)arg2 target:(id)arg3 wasCancelled:(_Bool)arg4 messageRows:(id)arg5;
- (void)suspend;
- (_Bool)resume:(id *)arg1;
- (void)dealloc;
- (void)_resumeIdsQueue;
- (void)_suspendIdsQueue;
- (id)initWithService:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

