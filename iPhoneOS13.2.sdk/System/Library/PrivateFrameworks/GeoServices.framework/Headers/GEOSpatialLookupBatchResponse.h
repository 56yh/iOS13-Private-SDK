//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying>
{
    NSMutableArray *_responses;
    int _statusCode;
    CDStruct_ade9d5f7 _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)responseType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)responseAtIndex:(unsigned long long)arg1;
- (unsigned long long)responsesCount;
- (void)addResponse:(id)arg1;
- (void)clearResponses;
@property(retain, nonatomic) NSMutableArray *responses;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;

@end

