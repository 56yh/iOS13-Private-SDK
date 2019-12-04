//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNRouteHypothesizer-Protocol.h>

@class CADRouteHypothesis, EKTravelEngineHypothesis, GEORouteHypothesizer, NSString;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer>
{
    CADRouteHypothesis *currentCADRouteHypothesis;
    GEORouteHypothesizer *_routeHypothesizer;
}

@property(readonly, nonatomic) GEORouteHypothesizer *routeHypothesizer; // @synthesize routeHypothesizer=_routeHypothesizer;
@property(retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis; // @synthesize currentCADRouteHypothesis;
- (void)didPostUINotification:(unsigned long long)arg1;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)arg1;
@property(readonly, nonatomic) id /* block */ updateHandler;
@property(readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithRouteHypothesizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

