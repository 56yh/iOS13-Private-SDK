//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/DCMapsLink.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DCNewGoogleMapsLink : DCMapsLink
{
    _Bool _showsTransit;
    _Bool _showsBicycling;
    _Bool _showsStreetView;
    _Bool _showsTraffic;
    _Bool _parsed;
    int _linkType;
    unsigned long long _mapType;
    unsigned long long _directionsMode;
    long long _zoomLevel;
    NSURL *_URL;
    NSArray *_mapsURLComponents;
    NSString *_location;
}

+ (id)mapsLinkWithURL:(id)arg1;
+ (_Bool)isMapsURL:(id)arg1;
@property(readonly, nonatomic) _Bool parsed; // @synthesize parsed=_parsed;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *mapsURLComponents; // @synthesize mapsURLComponents=_mapsURLComponents;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)parseMapsData;
- (id)dataString;
- (void)parse;
- (void)parseLatLonZoom;
- (id)latLonZoomString;
- (void)parseLinkType;
@property(readonly, nonatomic) int linkType; // @synthesize linkType=_linkType;
- (id)mapsURLComponentAtIndex:(long long)arg1;
- (id)streetViewLocation;
- (_Bool)showsBicycling;
- (_Bool)showsStreetView;
- (_Bool)showsTransit;
- (_Bool)showsTraffic;
- (unsigned long long)mapType;
- (long long)zoomLevel;
- (id)centerLocation;
- (unsigned long long)directionsMode;
- (id)destinationAddress;
- (id)startAddress;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (id)initWithURL:(id)arg1;

@end

