//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

#import <GeoServices/GEOMapServiceBatchSpatialLookupTicket-Protocol.h>

@class GEOSpatialLookupBatchRequest, GEOSpatialLookupBatchResponse, NSArray, NSMapTable;

__attribute__((visibility("hidden")))
@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket <GEOMapServiceBatchSpatialLookupTicket>
{
    GEOSpatialLookupBatchRequest *_request;
    GEOSpatialLookupBatchResponse *_response;
    NSArray *_parameters;
    NSMapTable *_parametersToMapItems;
}

// - (void).cxx_destruct;
- (CDStruct_d1a7ebee)dataRequestKind;
- (id)mapItemsForParameters:(id)arg1;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2;
- (id)initWithRequest:(id)arg1 forParameters:(id)arg2 traits:(id)arg3;

@end

