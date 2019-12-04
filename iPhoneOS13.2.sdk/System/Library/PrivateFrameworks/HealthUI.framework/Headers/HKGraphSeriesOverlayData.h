//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKGraphSeries, HKGraphSeriesBlockCoordinateList;

@interface HKGraphSeriesOverlayData : NSObject
{
    HKGraphSeries *_graphSeries;
    HKGraphSeriesBlockCoordinateList *_graphSeriesCoordinates;
    struct CGRect _graphSeriesScreenRect;
    struct CGAffineTransform _graphSeriesPointTransform;
}

@property(readonly, nonatomic) struct CGAffineTransform graphSeriesPointTransform; // @synthesize graphSeriesPointTransform=_graphSeriesPointTransform;
@property(readonly, nonatomic) HKGraphSeriesBlockCoordinateList *graphSeriesCoordinates; // @synthesize graphSeriesCoordinates=_graphSeriesCoordinates;
@property(readonly, nonatomic) struct CGRect graphSeriesScreenRect; // @synthesize graphSeriesScreenRect=_graphSeriesScreenRect;
@property(readonly, nonatomic) HKGraphSeries *graphSeries; // @synthesize graphSeries=_graphSeries;
- (id)initWithGraphSeries:(id)arg1 graphSeriesScreenRect:(struct CGRect)arg2 graphSeriesCoordinates:(id)arg3 graphSeriesPointTransform:(struct CGAffineTransform)arg4;

@end

