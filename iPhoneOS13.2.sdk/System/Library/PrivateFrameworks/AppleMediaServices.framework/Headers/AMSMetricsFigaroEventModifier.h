//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroEventModifier : NSObject
{
    NSDictionary *_fieldFilters;
    NSString *_sampleSessionKey;
    NSDictionary *_metricsDictionary;
    NSDictionary *_overrideDictionary;
}

@property(readonly, nonatomic) NSDictionary *overrideDictionary; // @synthesize overrideDictionary=_overrideDictionary;
@property(readonly, nonatomic) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(readonly, nonatomic) NSString *sampleSessionKey; // @synthesize sampleSessionKey=_sampleSessionKey;
@property(readonly, nonatomic) NSDictionary *fieldFilters; // @synthesize fieldFilters=_fieldFilters;
- (id)_fieldFiltersFromOverrides:(id)arg1;
- (id)_createSampleSessionKey;
- (_Bool)_shouldSampleEvent:(id)arg1;
- (id)_overridePropertyForKey:(id)arg1;
- (_Bool)shouldSkipEvent:(id)arg1;
- (_Bool)shouldDropEvent:(id)arg1;
- (id)reportingURLForEvent:(id)arg1;
- (id)prepareEvent:(id)arg1;
- (_Bool)fieldFiltersMatchEvent:(id)arg1;
- (id)initWithMetricsDictionary:(id)arg1 matchedOverrideDictionary:(id)arg2;

@end

