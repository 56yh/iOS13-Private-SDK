//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableCuratedLibraryAnalysisStatus-Protocol.h>

@class NSString, NSTimer, PXCuratedLibraryAssetsDataSourceManager;
@protocol PXCuratedLibraryEventLogger;

@interface PXCuratedLibraryAnalysisStatus : PXObservable <PXMutableCuratedLibraryAnalysisStatus>
{
    long long _numberOfRequestsToCycleThroughAlternateTitles;
    NSTimer *_alternateTitleTimer;
    _Bool _isDaysMonthsYearsStructureEnabled;
    _Bool _isDevicePlugged;
    _Bool _hasBattery;
    float _progress;
    float _displayProgress;
    PXCuratedLibraryAssetsDataSourceManager *_dataSourceManager;
    id <PXCuratedLibraryEventLogger> _eventLogger;
    long long _state;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    long long _alternateTitleIndex;
}

@property(readonly, nonatomic) _Bool hasBattery; // @synthesize hasBattery=_hasBattery;
@property(readonly, nonatomic) long long alternateTitleIndex; // @synthesize alternateTitleIndex=_alternateTitleIndex;
@property(readonly, nonatomic) _Bool isDevicePlugged; // @synthesize isDevicePlugged=_isDevicePlugged;
@property(readonly, nonatomic) _Bool isDaysMonthsYearsStructureEnabled; // @synthesize isDaysMonthsYearsStructureEnabled=_isDaysMonthsYearsStructureEnabled;
@property(readonly, nonatomic) float displayProgress; // @synthesize displayProgress=_displayProgress;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <PXCuratedLibraryEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)setIsDevicePlugged:(_Bool)arg1;
- (void)setIsDaysMonthsYearsStructureEnabled:(_Bool)arg1;
- (void)setDisplayProgress:(float)arg1;
- (void)setProgress:(float)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setState:(long long)arg1;
- (void)_updateEventLogging;
- (void)didPerformChanges;
- (void)alternateTitleIndexDidChange;
- (void)cycleToNextAlternateTitle;
- (void)_handleAlternateTitleTimer:(id)arg1;
- (void)stopCyclingThroughAlternateTitles;
- (void)startCyclingThroughAlternateTitles;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithDataSourceManager:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

