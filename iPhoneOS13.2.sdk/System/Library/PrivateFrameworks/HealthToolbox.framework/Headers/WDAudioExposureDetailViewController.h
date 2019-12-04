//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthToolbox/WDDisplayTypeDetailViewController.h>

#import <HealthToolbox/HKInteractiveChartViewObserver-Protocol.h>

@class HKGraphSeries, NSString;

__attribute__((visibility("hidden")))
@interface WDAudioExposureDetailViewController : WDDisplayTypeDetailViewController <HKInteractiveChartViewObserver>
{
    HKGraphSeries *_LEQSeries;
}

@property(retain, nonatomic) HKGraphSeries *LEQSeries; // @synthesize LEQSeries=_LEQSeries;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)_buildLEQDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)_buildLEQChartCacheWithUnitPreferenceController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)_buildLEQPresentationStyle;
- (id)_lineSeriesForDisplayType:(id)arg1;
- (id)_buildLEQSeriesForDisplayType:(id)arg1 unitPreferenceController:(id)arg2 healthStore:(id)arg3;
- (long long)_dataTypeCodeForAudioDisplayType:(id)arg1;
- (id)_buildLEQDisplayTypeForDisplayType:(id)arg1 unitPreferenceController:(id)arg2 healthStore:(id)arg3;
- (void)_installLEQOverlayForDisplayType:(id)arg1 unitPreferenceController:(id)arg2 healthStore:(id)arg3;
- (id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

