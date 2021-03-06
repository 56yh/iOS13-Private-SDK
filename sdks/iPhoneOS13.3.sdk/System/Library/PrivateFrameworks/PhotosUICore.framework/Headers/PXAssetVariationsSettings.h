//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAssetVariationsSettings : PXSettings
{
    BOOL _addSimulatedProgressComponent;
    BOOL _simulateLoadingFailure;
    BOOL _simulateSavingFailure;
    BOOL _useNeutrinoRendering;
    BOOL _showStatusInDisclosureLabel;
    BOOL _showLoopBadges;
    BOOL _invalidateCachedPreviews;
    BOOL _useLiveRenderedPreviews;
    double _selectionDetailsDismissalDelay;
    long long _suggestionsScheme;
    long long _layoutStyle;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) BOOL useLiveRenderedPreviews; // @synthesize useLiveRenderedPreviews=_useLiveRenderedPreviews;
@property(nonatomic) BOOL invalidateCachedPreviews; // @synthesize invalidateCachedPreviews=_invalidateCachedPreviews;
@property(nonatomic) BOOL showLoopBadges; // @synthesize showLoopBadges=_showLoopBadges;
@property(nonatomic) BOOL showStatusInDisclosureLabel; // @synthesize showStatusInDisclosureLabel=_showStatusInDisclosureLabel;
@property(nonatomic) BOOL useNeutrinoRendering; // @synthesize useNeutrinoRendering=_useNeutrinoRendering;
@property(nonatomic) BOOL simulateSavingFailure; // @synthesize simulateSavingFailure=_simulateSavingFailure;
@property(nonatomic) BOOL simulateLoadingFailure; // @synthesize simulateLoadingFailure=_simulateLoadingFailure;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) BOOL addSimulatedProgressComponent; // @synthesize addSimulatedProgressComponent=_addSimulatedProgressComponent;
@property(nonatomic) long long suggestionsScheme; // @synthesize suggestionsScheme=_suggestionsScheme;
@property(nonatomic) double selectionDetailsDismissalDelay; // @synthesize selectionDetailsDismissalDelay=_selectionDetailsDismissalDelay;
- (void)setDefaultValues;
- (id)parentSettings;

@end

