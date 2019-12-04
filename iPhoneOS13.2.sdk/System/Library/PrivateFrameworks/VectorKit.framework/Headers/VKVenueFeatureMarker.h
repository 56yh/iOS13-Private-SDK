//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKFeatureMarker.h>

@class GEOMapItemIdentifier, NSArray;

@interface VKVenueFeatureMarker : VKFeatureMarker
{
    _Bool _localize;
}

- (id)shortName;
- (id)name;
@property(readonly, nonatomic) NSArray *buildings;
@property(readonly, nonatomic) GEOMapItemIdentifier *mapIdentifier;
@property(readonly, nonatomic) unsigned long long businessID;
- (const shared_ptr_c500bfa8 *)venueFeatureMarker;
- (id)initWithVenue:(const struct Venue *)arg1 localize:(_Bool)arg2;

@end

