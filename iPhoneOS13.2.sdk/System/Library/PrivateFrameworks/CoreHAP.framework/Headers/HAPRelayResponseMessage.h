//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPRelayRequestMessage, NSData;

@interface HAPRelayResponseMessage : HMFObject
{
    HAPRelayRequestMessage *_request;
    unsigned long long _type;
    long long _statusCode;
    NSData *_body;
}

@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) HAPRelayRequestMessage *request; // @synthesize request=_request;
- (_Bool)_deserializeResponseMessage:(id)arg1;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithRequest:(id)arg1 serializedMessage:(id)arg2;

@end

