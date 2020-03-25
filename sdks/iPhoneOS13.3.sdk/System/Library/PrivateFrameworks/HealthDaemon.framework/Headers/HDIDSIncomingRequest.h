//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSMessageCenter, HDIDSOutgoingResponse, IDSDevice, NSData, NSString;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription>
{
    BOOL _expectsResponse;
    unsigned short _messageID;
    IDSDevice *_fromDevice;
    NSString *_idsIdentifier;
    NSData *_data;
    NSUInteger _priority;
    HDIDSOutgoingResponse *_response;
    HDIDSMessageCenter *_messageCenter;
    id _pbRequest;
}

@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property(nonatomic) __weak HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) HDIDSOutgoingResponse *response; // @synthesize response=_response;
@property(nonatomic) BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(nonatomic) NSUInteger priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) IDSDevice *fromDevice; // @synthesize fromDevice=_fromDevice;
// - (void).cxx_destruct;
- (void)configureResponse;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)nanoSyncDescription;

@end
