//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface SGM2EventInBanner : PBCodable <NSCopying>
{
    int _app;
    int _category;
    int _extracted;
    NSString *_key;
    int _state;
    struct {
        unsigned int app:1;
        unsigned int category:1;
        unsigned int extracted:1;
        unsigned int state:1;
    } _has;
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
- (int)StringAsState:(id)arg1;
- (id)stateAsString:(int)arg1;
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsExtracted:(id)arg1;
- (id)extractedAsString:(int)arg1;
@property(nonatomic) _Bool hasExtracted;
@property(nonatomic) int extracted; // @synthesize extracted=_extracted;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) _Bool hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
- (int)StringAsApp:(id)arg1;
- (id)appAsString:(int)arg1;
@property(nonatomic) _Bool hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(readonly, nonatomic) _Bool hasKey;

@end

