//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface SGM2SuggestedContactDetailUsed : PBCodable <NSCopying>
{
    int _app;
    NSString *_key;
    CDStruct_2bda6786 _has;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsApp:(id)arg1;
- (id)appAsString:(int)arg1;
@property(nonatomic) _Bool hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(readonly, nonatomic) _Bool hasKey;

@end

