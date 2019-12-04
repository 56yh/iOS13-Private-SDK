//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class FCPersonalizationFeature;
@protocol NTAbsolutePersonalizedSectionPresenceConfig;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying>
{
    FCPersonalizationFeature *_feature;
    double _featureClickPrior;
    double _featureImpressionPrior;
    NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *_absolutePresenceConfig;
}

@property(copy, nonatomic) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig; // @synthesize absolutePresenceConfig=_absolutePresenceConfig;
@property(nonatomic) double featureImpressionPrior; // @synthesize featureImpressionPrior=_featureImpressionPrior;
@property(nonatomic) double featureClickPrior; // @synthesize featureClickPrior=_featureClickPrior;
@property(copy, nonatomic) FCPersonalizationFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

