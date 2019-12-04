//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class IDSDevice, NMSIncomingFileTransfer, NMSIncomingRequest, NMSMessageCenter, NMSOutgoingFileTransfer, NMSOutgoingRequest, NMSOutgoingResponse, NSArray, NSDictionary, NSError, NSString;

@protocol NMSMessageCenterDelegate 

@optional
- (void)messageCenter:(NMSMessageCenter *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 activeDeviceChanged:(IDSDevice *)arg2 acknowledgement:(void (^)(void))arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 failedToSendMessageWithIdentifier:(NSString *)arg2 error:(NSError *)arg3 userInfo:(NSDictionary *)arg4;
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullyDeliverRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullySendRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifier:(NSString *)arg2 forFileTransfer:(NMSOutgoingFileTransfer *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifier:(NSString *)arg2 forResponse:(NMSOutgoingResponse *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifierForRequest:(NMSOutgoingRequest *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didReceiveIncomingFileTransfer:(NMSIncomingFileTransfer *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didReceiveUnknownRequest:(NMSIncomingRequest *)arg2;
@end

