//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken;
@protocol GEORouteManagerDelegate;

@interface GEORouteManager : NSObject
{
    id <GEORouteManagerDelegate> _delegate;
    GEOApplicationAuditToken *_auditToken;
}

+ (void)setShouldRequestServerLatencyInfo:(_Bool)arg1;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <GEORouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchDirectionsForTicket:(id)arg1 networkActivity:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)didReceiveRoutes:(id)arg1 traffic:(id)arg2;
- (id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)handleResponse:(id)arg1 forTicket:(id)arg2;

@end

