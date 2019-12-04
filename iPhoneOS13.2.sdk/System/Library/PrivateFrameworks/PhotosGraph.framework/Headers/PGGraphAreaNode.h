//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphLocationCoordinates-Protocol.h>
#import <PhotosGraph/PGGraphLocationNaming-Protocol.h>

@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphNode <PGGraphLocationNaming, PGGraphLocationCoordinates>
{
    struct CLLocationCoordinate2D _centroidCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D centroidCoordinate; // @synthesize centroidCoordinate=_centroidCoordinate;
- (struct CLLocationCoordinate2D)coordinate;
- (id)addressNodes;
@property(readonly) NSString *shortenedName;
- (_Bool)diameterIsLargerThanDiameter:(double)arg1;
@property(readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property(readonly) NSString *fullname;
@property(readonly) _Bool isBlacklisted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

