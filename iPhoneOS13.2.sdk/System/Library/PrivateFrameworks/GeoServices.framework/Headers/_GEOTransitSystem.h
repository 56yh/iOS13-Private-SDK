//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitSystem-Protocol.h>


@class GEOPBTransitSystem, GEOStyleAttributes, NSString;
@protocol GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding>
{
    GEOPBTransitSystem *_system;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long muid;
- (id)initWithSystem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

