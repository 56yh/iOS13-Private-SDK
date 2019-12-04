//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, NSString, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying>
{
    double _playbackPosition;
    double _playbackRate;
    _MRContentItemProtobuf *_contentItem;
    int _endpointOptions;
    NSMutableArray *_events;
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;
    int _playbackState;
    int _playerOptions;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    struct {
        unsigned int playbackPosition:1;
        unsigned int playbackRate:1;
        unsigned int endpointOptions:1;
        unsigned int playbackState:1;
        unsigned int playerOptions:1;
    } _has;
}

+ (Class)eventsType;
@property(retain, nonatomic) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest; // @synthesize playbackSessionRequest=_playbackSessionRequest;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRContentItemProtobuf *contentItem; // @synthesize contentItem=_contentItem;
@property(nonatomic) double playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlaybackSessionRequest;
@property(nonatomic) _Bool hasPlaybackRate;
- (int)StringAsPlaybackState:(id)arg1;
- (id)playbackStateAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaybackState;
@property(nonatomic) int playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) _Bool hasPlayerPath;
@property(readonly, nonatomic) _Bool hasContentItem;
@property(nonatomic) _Bool hasPlaybackPosition;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (int)StringAsEndpointOptions:(id)arg1;
- (id)endpointOptionsAsString:(int)arg1;
@property(nonatomic) _Bool hasEndpointOptions;
@property(nonatomic) int endpointOptions; // @synthesize endpointOptions=_endpointOptions;
- (int)StringAsPlayerOptions:(id)arg1;
- (id)playerOptionsAsString:(int)arg1;
@property(nonatomic) _Bool hasPlayerOptions;
@property(nonatomic) int playerOptions; // @synthesize playerOptions=_playerOptions;
@property(readonly, nonatomic) _Bool hasRequestID;

@end

