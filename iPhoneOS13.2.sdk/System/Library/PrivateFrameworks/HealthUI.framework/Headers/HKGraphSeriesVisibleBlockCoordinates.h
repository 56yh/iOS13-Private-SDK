//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKGraphSeriesBlockCoordinate;

@interface HKGraphSeriesVisibleBlockCoordinates : NSObject
{
    id <HKGraphSeriesBlockCoordinate> _minimum;
    id <HKGraphSeriesBlockCoordinate> _maximum;
    id <HKGraphSeriesBlockCoordinate> _last;
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinate> last; // @synthesize last=_last;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinate> maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinate> minimum; // @synthesize minimum=_minimum;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 last:(id)arg3;

@end

