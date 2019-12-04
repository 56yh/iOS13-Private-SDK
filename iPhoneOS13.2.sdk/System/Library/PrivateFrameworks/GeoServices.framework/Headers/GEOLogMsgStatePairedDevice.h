//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying>
{
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    _Bool _isConnected;
    struct {
        unsigned int has_type:1;
        unsigned int has_isConnected:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;
@property(readonly, nonatomic) _Bool hasPairedDeviceIdentifier;
@property(nonatomic) _Bool hasIsConnected;
@property(nonatomic) _Bool isConnected;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end

