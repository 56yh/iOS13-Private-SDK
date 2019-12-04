//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKOverlayRoomViewController.h>

#import <HealthUI/HKAudioExposureDevicesDataSourceObserver-Protocol.h>

@class HKAudioExposureDevicesDataSource, NSMutableArray, NSNumber, NSString;

@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController <HKAudioExposureDevicesDataSourceObserver>
{
    NSNumber *_preferredOverlayIndex;
    NSString *_quantityTypeIdentifier;
    NSString *_secondaryIdentifier;
    NSMutableArray *_contextDelegates;
    HKAudioExposureDevicesDataSource *_audioExposureDevicesDataSource;
}

@property(retain, nonatomic) HKAudioExposureDevicesDataSource *audioExposureDevicesDataSource; // @synthesize audioExposureDevicesDataSource=_audioExposureDevicesDataSource;
@property(retain, nonatomic) NSMutableArray *contextDelegates; // @synthesize contextDelegates=_contextDelegates;
@property(readonly, copy, nonatomic) NSString *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property(nonatomic) NSString *quantityTypeIdentifier; // @synthesize quantityTypeIdentifier=_quantityTypeIdentifier;
- (id /* block */)_userInfoCreationBlockForLEQ;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope;
- (id)_buildAudioAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 averageOverVisibleRange:(_Bool)arg4;
- (id)_headphonePredicateForDevices:(id)arg1 withName:(id)arg2;
- (void)_reloadAudioExposureDevices;
- (void)_registerForAudioExposureDeviceUpdates;
- (void)_setupAudioExposureDataSourceIfNeeded;
- (_Bool)_isAudioExposureDevicesSupported;
- (void)audioExposureDataSourceIsReady:(id)arg1;
- (_Bool)_isEnvironmentalAudioExposureRoom;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (long long)_initialPillForIdentifier:(id)arg1;
- (id)_makeHeadphoneDeviceFiltersUsingContextCreator:(id /* block */)arg1;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 secondaryIdentifier:(id)arg5;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 secondaryIdentifier:(id)arg5 audioExposureDeviceDataSource:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

