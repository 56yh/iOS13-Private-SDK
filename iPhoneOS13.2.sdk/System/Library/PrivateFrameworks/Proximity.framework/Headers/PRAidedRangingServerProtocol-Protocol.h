//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Proximity/PRServerProtocol-Protocol.h>

@class NSData, NSDictionary, PRRemoteDevice;

@protocol PRAidedRangingServerProtocol <PRServerProtocol>
- (void)resume;
- (void)suspend;
- (void)receivedData:(NSData *)arg1 fromPeer:(PRRemoteDevice *)arg2;
- (void)requestInitialCollaborationDataWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)runWithConfiguration:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

