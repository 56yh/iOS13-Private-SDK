//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator
{
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> _generator;
    struct normal_distribution<double> _distribution;
    NSArray *_pseudoRandomDoubles;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *pseudoRandomDoubles; // @synthesize pseudoRandomDoubles=_pseudoRandomDoubles;
- (id).cxx_construct;
- (double)_pseudoRandomDoubleFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (id)_pseudoRandomDoubles;
- (id)_createPseudoRandomDoubles;
- (double)computeStatisticalTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (double)computeNoiseFromTime:(double)arg1 stdDev:(double)arg2;
- (double)pseudoRandomDoubleFromTime:(double)arg1;
- (double)randomDoubleFromGenerator;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

