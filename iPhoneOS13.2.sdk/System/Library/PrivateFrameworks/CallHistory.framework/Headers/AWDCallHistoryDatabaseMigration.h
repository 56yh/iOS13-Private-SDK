//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



__attribute__((visibility("hidden")))
@interface AWDCallHistoryDatabaseMigration : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _domain;
    unsigned int _error;
    unsigned int _newSchema;
    unsigned int _oldSchema;
    struct {
        unsigned int timestamp:1;
        unsigned int domain:1;
        unsigned int error:1;
        unsigned int newSchema:1;
        unsigned int oldSchema:1;
    } _has;
}

@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int newSchema; // @synthesize newSchema=_newSchema;
@property(nonatomic) unsigned int oldSchema; // @synthesize oldSchema=_oldSchema;
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
@property(nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasNewSchema;
@property(nonatomic) _Bool hasOldSchema;
@property(nonatomic) _Bool hasTimestamp;

@end

