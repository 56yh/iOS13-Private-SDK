//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>






@class MXMSample, MXMSampleTag, MXMSampleTimeSeries, NSArray, NSMutableDictionary, NSSet, NSUnit;

@interface MXMSampleSet : NSObject <NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying>
{
    MXMSampleTag *_tag;
    NSUnit *_unit;
    MXMSampleTimeSeries *_timeIndex;
    CDStruct_4bcfbbae *_index;
    void *_underlyingBuffer;
    long long _underlyingBufferLength;
    NSArray *_cachedSamples;
    NSMutableDictionary *_attributesMap;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableDictionary *attributesMap; // @synthesize attributesMap=_attributesMap;
@property(retain) NSArray *cachedSamples; // @synthesize cachedSamples=_cachedSamples;
@property(nonatomic) long long underlyingBufferLength; // @synthesize underlyingBufferLength=_underlyingBufferLength;
@property(nonatomic) void *underlyingBuffer; // @synthesize underlyingBuffer=_underlyingBuffer;
@property(nonatomic) CDStruct_4bcfbbae *index; // @synthesize index=_index;
@property(readonly, retain) MXMSampleTimeSeries *timeIndex; // @synthesize timeIndex=_timeIndex;
@property(readonly) NSUnit *unit; // @synthesize unit=_unit;
@property(readonly) MXMSampleTag *tag; // @synthesize tag=_tag;
- (void)_appendSample:(id)arg1;
- (void)_appendSet:(id)arg1;
- (void)_appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2;
- (void)_appendAttribute:(id)arg1;
- (void)_prepareUnderlyingBufferSizeWithAdditionalBytes:(unsigned long long)arg1;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)sampleWithIndex:(unsigned long long)arg1;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 values:(void *)arg5 length:(unsigned long long)arg6 valueSize:(unsigned long long)arg7;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 doubleValues:(double *)arg5 length:(unsigned long long)arg6;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4;
- (id)initWithTag:(id)arg1 unit:(id)arg2 attributes:(id)arg3;
- (id)attributeWithName:(id)arg1;
@property(readonly, copy) NSSet *attributes;
@property(readonly) unsigned long long length;
@property(readonly, copy) NSArray *samples;
@property(readonly) double *doubleValues;
@property(readonly) double *lastDoubleValue;
@property(readonly) double *firstDoubleValue;
@property(readonly, nonatomic) MXMSample *sum;
@property(readonly, nonatomic) MXMSample *relativeStandardDeviation;
@property(readonly, nonatomic) MXMSample *standardDeviation;
@property(readonly, nonatomic) MXMSample *geoMean;
@property(readonly, nonatomic) MXMSampleSet *range;
@property(readonly, nonatomic) MXMSample *distance;
@property(readonly, nonatomic) MXMSample *max;
@property(readonly, nonatomic) MXMSample *min;

@end

