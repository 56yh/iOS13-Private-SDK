//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/IDSProtobuf.h>

@class PBCodable;

@interface BLTPBProtobuf : IDSProtobuf
{
    PBCodable *_protobuf;
    long long _sequenceNumberError;
    unsigned long long _sessionState;
    IDSProtobuf *_idsProtobuf;
}

@property(retain, nonatomic) IDSProtobuf *idsProtobuf; // @synthesize idsProtobuf=_idsProtobuf;
@property(readonly, nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic) long long sequenceNumberError; // @synthesize sequenceNumberError=_sequenceNumberError;
@property(retain, nonatomic) PBCodable *protobuf; // @synthesize protobuf=_protobuf;
- (id)initWithIDSProtobuf:(id)arg1 sequenceNumberManager:(id)arg2;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(_Bool)arg3 sequenceNumberManager:(id)arg4;

@end

