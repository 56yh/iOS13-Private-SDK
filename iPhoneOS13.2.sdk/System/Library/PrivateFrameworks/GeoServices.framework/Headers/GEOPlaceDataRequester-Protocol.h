//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOMapServiceTraits, GEOPDPlaceRequest;

@protocol GEOPlaceDataRequester
- (void)cancelRequest:(GEOPDPlaceRequest *)arg1;
- (void)startWithRequest:(GEOPDPlaceRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 timeout:(double)arg3 auditToken:(GEOApplicationAuditToken *)arg4 throttleToken:(GEODataRequestThrottlerToken *)arg5 completionHandler:(void (^)(GEOPDPlaceResponse *, NSError *, NSDictionary *))arg6;
@end

