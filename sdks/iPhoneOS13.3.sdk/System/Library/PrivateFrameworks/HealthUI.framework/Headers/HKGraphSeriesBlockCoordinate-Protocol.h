//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HKGraphSeriesBlockCoordinateInfo;

@protocol HKGraphSeriesBlockCoordinate <NSObject>
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
@end

