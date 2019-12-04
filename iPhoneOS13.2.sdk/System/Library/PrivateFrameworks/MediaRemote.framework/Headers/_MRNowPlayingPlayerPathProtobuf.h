//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf, _MROriginProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingClientProtobuf *_client;
    _MROriginProtobuf *_origin;
    _MRNowPlayingPlayerProtobuf *_player;
}

+ (void)initialize;
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *player; // @synthesize player=_player;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *client; // @synthesize client=_client;
@property(retain, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlayer;
@property(readonly, nonatomic) _Bool hasClient;
@property(readonly, nonatomic) _Bool hasOrigin;
- (id)customDescription;
- (id)customDictionaryRepresentation;
@property(readonly, nonatomic) _Bool isResolved;
@property(readonly, nonatomic) _Bool isLocal;

@end

