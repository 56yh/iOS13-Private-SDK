//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEOPlaceRequestTicket.h>

#import <GeoServices/GEOMapServiceSpatialPlaceLookupTicket-Protocol.h>

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceSpatialPlaceLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialPlaceLookupTicket>
{
    NSArray *_parameters;
}

+ (unsigned long long)maxParametersCount;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void)callCompletion:(id /* block */)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;
- (id)mapItemsForPlaceLookupResponses:(id)arg1 usingIdentifierToMapItemMap:(id)arg2;
- (void)createSpatialPlaceLookupResultForLookupResults:(id)arg1 mapItems:(id)arg2 completion:(id /* block */)arg3 queue:(id)arg4;
- (id)spatialPlaceLookupResultsFromResponse:(id)arg1;
- (void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3 queue:(id)arg4;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end
