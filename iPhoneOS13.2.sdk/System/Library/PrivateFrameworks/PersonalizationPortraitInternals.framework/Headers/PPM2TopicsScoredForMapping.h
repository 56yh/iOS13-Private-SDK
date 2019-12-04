//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface PPM2TopicsScoredForMapping : PBCodable <NSCopying>
{
    NSString *_bundleId;
    NSString *_mappingId;
    unsigned int _resultSizeLog10;
    _Bool _error;
    _Bool _exclusionSpec;
    _Bool _timeLimited;
    struct {
        unsigned int resultSizeLog10:1;
        unsigned int error:1;
        unsigned int exclusionSpec:1;
        unsigned int timeLimited:1;
    } _has;
}

@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(nonatomic) _Bool exclusionSpec; // @synthesize exclusionSpec=_exclusionSpec;
@property(nonatomic) _Bool timeLimited; // @synthesize timeLimited=_timeLimited;
@property(nonatomic) unsigned int resultSizeLog10; // @synthesize resultSizeLog10=_resultSizeLog10;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
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
@property(nonatomic) _Bool hasExclusionSpec;
@property(nonatomic) _Bool hasTimeLimited;
@property(nonatomic) _Bool hasResultSizeLog10;
@property(readonly, nonatomic) _Bool hasMappingId;
@property(readonly, nonatomic) _Bool hasBundleId;

@end

