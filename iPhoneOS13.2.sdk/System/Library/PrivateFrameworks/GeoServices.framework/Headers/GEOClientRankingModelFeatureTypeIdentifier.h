//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOClientRankingModelFeatureIdentifier.h>

@interface GEOClientRankingModelFeatureTypeIdentifier : GEOClientRankingModelFeatureIdentifier
{
    long long _featureType;
}

@property(readonly, nonatomic) long long featureType; // @synthesize featureType=_featureType;
- (long long)featureIdentifierType;
- (id)initWithFeatureType:(long long)arg1;
- (id)init;

@end

