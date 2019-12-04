//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPError : PBCodable <NSCopying>
{
    int _auxiliaryCode;
    NSString *_auxiliaryDomain;
    NSMutableArray *_auxiliaryUserInfos;
    int _code;
    NSString *_message;
    struct {
        unsigned int auxiliaryCode:1;
        unsigned int code:1;
    } _has;
}

+ (Class)auxiliaryUserInfoType;
@property(retain, nonatomic) NSMutableArray *auxiliaryUserInfos; // @synthesize auxiliaryUserInfos=_auxiliaryUserInfos;
@property(nonatomic) int auxiliaryCode; // @synthesize auxiliaryCode=_auxiliaryCode;
@property(retain, nonatomic) NSString *auxiliaryDomain; // @synthesize auxiliaryDomain=_auxiliaryDomain;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)auxiliaryUserInfosCount;
- (void)addAuxiliaryUserInfo:(id)arg1;
- (void)clearAuxiliaryUserInfos;
@property(nonatomic) _Bool hasAuxiliaryCode;
@property(readonly, nonatomic) _Bool hasAuxiliaryDomain;
@property(readonly, nonatomic) _Bool hasMessage;
- (int)StringAsCode:(id)arg1;
- (id)codeAsString:(int)arg1;
@property(nonatomic) _Bool hasCode;
@property(nonatomic) int code; // @synthesize code=_code;

@end

