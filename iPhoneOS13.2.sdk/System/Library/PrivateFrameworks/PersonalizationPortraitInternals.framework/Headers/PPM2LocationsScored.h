//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface PPM2LocationsScored : PBCodable <NSCopying>
{
    NSString *_bundleId;
    unsigned int _resultSizeLog10;
    _Bool _error;
    _Bool _exclusionSpec;
    _Bool _limitHit;
    _Bool _timeLimited;
    _Bool _timeSpec;
    CDStruct_68ee747f _has;
}

@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(nonatomic) _Bool exclusionSpec; // @synthesize exclusionSpec=_exclusionSpec;
@property(nonatomic) _Bool timeLimited; // @synthesize timeLimited=_timeLimited;
@property(nonatomic) _Bool timeSpec; // @synthesize timeSpec=_timeSpec;
@property(nonatomic) _Bool limitHit; // @synthesize limitHit=_limitHit;
@property(nonatomic) unsigned int resultSizeLog10; // @synthesize resultSizeLog10=_resultSizeLog10;
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
@property(nonatomic) _Bool hasTimeSpec;
@property(nonatomic) _Bool hasLimitHit;
@property(nonatomic) _Bool hasResultSizeLog10;
@property(readonly, nonatomic) _Bool hasBundleId;

@end
