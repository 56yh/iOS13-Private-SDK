//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContextDelegate-Protocol.h>

@class HKDisplayType, HKInteractiveChartOverlayNamedDataSource, HKLineSeries, NSString;

@interface _HKAudioStandardQuantityContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate>
{
    HKInteractiveChartOverlayNamedDataSource *_cacheDataSource;
    HKDisplayType *_primaryDisplayType;
}

@property(retain, nonatomic) HKDisplayType *primaryDisplayType; // @synthesize primaryDisplayType=_primaryDisplayType;
@property(retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource; // @synthesize cacheDataSource=_cacheDataSource;
- (id)_statItemForTimeScope:(long long)arg1;
- (id)formatterForTimescope:(long long)arg1;
@property(readonly, nonatomic) HKLineSeries *alternateLineSeries;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

