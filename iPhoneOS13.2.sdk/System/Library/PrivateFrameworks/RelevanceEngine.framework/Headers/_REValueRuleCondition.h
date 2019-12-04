//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REFeature;

@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface>
{
    _Bool _allowsEmptyValueForFeature;
    REFeature *_feature;
    long long _relation;
    unsigned long long _value;
}

@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
@property(readonly, nonatomic) long long relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_notCondition;
- (id)_dependentFeatures;
- (void)dealloc;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(unsigned long long)arg3;

@end

