//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEORPProblemContext, GEORPProblemCorrections, PBDataReader;

@interface GEORPProblem : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _userPaths;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _problemType;
    unsigned int _protocolVersion;
    struct {
        unsigned int has_problemType:1;
        unsigned int has_protocolVersion:1;
        unsigned int read_userPaths:1;
        unsigned int read_problemContext:1;
        unsigned int read_problemCorrections:1;
        unsigned int wrote_userPaths:1;
        unsigned int wrote_problemContext:1;
        unsigned int wrote_problemCorrections:1;
        unsigned int wrote_problemType:1;
        unsigned int wrote_protocolVersion:1;
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
@property(retain, nonatomic) GEORPProblemContext *problemContext;
@property(readonly, nonatomic) _Bool hasProblemContext;
- (void)_readProblemContext;
@property(retain, nonatomic) GEORPProblemCorrections *problemCorrections;
@property(readonly, nonatomic) _Bool hasProblemCorrections;
- (void)_readProblemCorrections;
- (int)StringAsProblemType:(id)arg1;
- (id)problemTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasProblemType;
@property(nonatomic) int problemType;
- (int)StringAsUserPaths:(id)arg1;
- (id)userPathsAsString:(int)arg1;
- (void)setUserPaths:(int *)arg1 count:(unsigned long long)arg2;
- (int)userPathAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsUserPath:(int)arg1;
- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
@property(readonly, nonatomic) int *userPaths;
@property(readonly, nonatomic) unsigned long long userPathsCount;
- (void)_readUserPaths;
@property(nonatomic) _Bool hasProtocolVersion;
@property(nonatomic) unsigned int protocolVersion;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(CDStruct_c3b9c2ee)arg10;

@end

