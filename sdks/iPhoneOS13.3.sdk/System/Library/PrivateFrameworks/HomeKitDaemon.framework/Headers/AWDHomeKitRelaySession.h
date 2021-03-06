//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDHomeKitRelaySession : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _actionType;
    unsigned int _duration;
    int _errorCode;
    int _statusCode;
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int statusCode:1;
    } _has;
}

@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasTimestamp;

@end

