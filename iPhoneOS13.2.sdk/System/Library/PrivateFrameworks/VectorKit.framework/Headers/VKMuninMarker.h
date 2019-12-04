//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface VKMuninMarker : NSObject
{
    struct optional<md::mun::CollectionPoint> _collectionPoint;
    CDStruct_071ac149 _coordinate;
}

@property(readonly, nonatomic) CDStruct_071ac149 coordinate; // @synthesize coordinate=_coordinate;
- (id).cxx_construct;
@property(readonly, nonatomic) unsigned int buildId;
@property(readonly, nonatomic) unsigned long long pointId;
@property(readonly, nonatomic) _Bool canMoveToMarker;
@property(readonly, nonatomic) NSDate *collectionDate;
@property(readonly, nonatomic) const struct CollectionPoint *collectionPoint;
- (id)initWithCoordinate:(CDStruct_071ac149)arg1;
- (id)initWithCollectionPoint:(const struct CollectionPoint *)arg1;

@end

