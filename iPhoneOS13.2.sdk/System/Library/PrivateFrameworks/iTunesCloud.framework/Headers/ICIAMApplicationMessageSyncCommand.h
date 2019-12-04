//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying>
{
    long long _commandSerialNumber;
    ICIAMApplicationMessage *_applicationMessage;
    int _commandType;
    struct {
        unsigned int commandSerialNumber:1;
        unsigned int commandType:1;
    } _has;
}

@property(nonatomic) long long commandSerialNumber; // @synthesize commandSerialNumber=_commandSerialNumber;
@property(retain, nonatomic) ICIAMApplicationMessage *applicationMessage; // @synthesize applicationMessage=_applicationMessage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCommandSerialNumber;
@property(readonly, nonatomic) _Bool hasApplicationMessage;
- (int)StringAsCommandType:(id)arg1;
- (id)commandTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCommandType;
@property(nonatomic) int commandType; // @synthesize commandType=_commandType;

@end

