//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapRegion, GEOPlace, NSString;

@interface GEOMapItemAdditionalPlaceInfo : NSObject
{
    GEOPlace *_place;
}

@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) double areaInMeters;
@property(readonly, nonatomic) int placeType;
@property(readonly, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;
- (id)initWithPlace:(id)arg1;

@end

