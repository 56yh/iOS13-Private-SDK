//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface NTPBTelemetryStats : PBCodable <NSCopying>
{
    long long _count;
    long long _max;
    long long _mean;
    long long _median;
    long long _min;
    long long _percentile95;
    struct {
        unsigned int count:1;
        unsigned int max:1;
        unsigned int mean:1;
        unsigned int median:1;
        unsigned int min:1;
        unsigned int percentile95:1;
    } _has;
}

@property(nonatomic) long long percentile95; // @synthesize percentile95=_percentile95;
@property(nonatomic) long long median; // @synthesize median=_median;
@property(nonatomic) long long mean; // @synthesize mean=_mean;
@property(nonatomic) long long max; // @synthesize max=_max;
@property(nonatomic) long long min; // @synthesize min=_min;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPercentile95;
@property(nonatomic) _Bool hasMedian;
@property(nonatomic) _Bool hasMean;
@property(nonatomic) _Bool hasMax;
@property(nonatomic) _Bool hasMin;
@property(nonatomic) _Bool hasCount;

@end

