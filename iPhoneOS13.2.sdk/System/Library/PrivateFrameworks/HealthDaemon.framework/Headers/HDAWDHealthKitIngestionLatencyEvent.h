//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface HDAWDHealthKitIngestionLatencyEvent : PBCodable <NSCopying>
{
    long long _endDate;
    long long _indexInSession;
    long long _maxDelayUs;
    long long _meanDelayUs;
    long long _minDelayUs;
    long long _sampleCount;
    long long _startDate;
    long long _stdDelayUs;
    unsigned long long _timestamp;
    long long _typeIdentifier;
    _Bool _inSession;
    struct {
        unsigned int endDate:1;
        unsigned int indexInSession:1;
        unsigned int maxDelayUs:1;
        unsigned int meanDelayUs:1;
        unsigned int minDelayUs:1;
        unsigned int sampleCount:1;
        unsigned int startDate:1;
        unsigned int stdDelayUs:1;
        unsigned int timestamp:1;
        unsigned int typeIdentifier:1;
        unsigned int inSession:1;
    } _has;
}

@property(nonatomic) long long indexInSession; // @synthesize indexInSession=_indexInSession;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long stdDelayUs; // @synthesize stdDelayUs=_stdDelayUs;
@property(nonatomic) long long meanDelayUs; // @synthesize meanDelayUs=_meanDelayUs;
@property(nonatomic) long long maxDelayUs; // @synthesize maxDelayUs=_maxDelayUs;
@property(nonatomic) long long minDelayUs; // @synthesize minDelayUs=_minDelayUs;
@property(nonatomic) _Bool inSession; // @synthesize inSession=_inSession;
@property(nonatomic) long long typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
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
@property(nonatomic) _Bool hasIndexInSession;
@property(nonatomic) _Bool hasSampleCount;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(nonatomic) _Bool hasStdDelayUs;
@property(nonatomic) _Bool hasMeanDelayUs;
@property(nonatomic) _Bool hasMaxDelayUs;
@property(nonatomic) _Bool hasMinDelayUs;
@property(nonatomic) _Bool hasInSession;
@property(nonatomic) _Bool hasTypeIdentifier;
@property(nonatomic) _Bool hasTimestamp;

@end

