//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface AWDVisualVoicemailTranscriptionRated : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    _Bool _accurate;
    struct {
        unsigned int timestamp:1;
        unsigned int accurate:1;
    } _has;
}

@property(nonatomic) _Bool accurate; // @synthesize accurate=_accurate;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAccurate;
@property(nonatomic) _Bool hasTimestamp;

@end

