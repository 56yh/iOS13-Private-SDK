//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying>
{
    int _code;
    CKDPResponseOperationResultError *_error;
    CDStruct_9ab06576 _has;
}

@property(retain, nonatomic) CKDPResponseOperationResultError *error; // @synthesize error=_error;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasError;
- (int)StringAsCode:(id)arg1;
- (id)codeAsString:(int)arg1;
@property(nonatomic) _Bool hasCode;
@property(nonatomic) int code; // @synthesize code=_code;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end

