//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface GEOCacheMissLoadError : PBCodable <NSCopying>
{
    NSString *_errorDomain;
    unsigned int _count;
    int _errorCode;
    struct {
        unsigned int has_count:1;
        unsigned int has_errorCode:1;
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
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) int errorCode;
@property(retain, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) _Bool hasErrorDomain;

@end

