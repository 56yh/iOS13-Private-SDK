//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXSharingSettings : PXSettings
{
    _Bool _showConfidentialityWarnings;
    _Bool _disableMailDrop;
    _Bool _showInternalGIFExport;
    _Bool _forceNonCMMActivitiesToBeVisibleForCMM;
    _Bool _sharingSuggestionsWidgetAllStreamEnabled;
    _Bool _sharingSuggestionsWidgetHeuristicsEnabled;
    _Bool _sharingSuggestionsWidgetLearningEnabled;
    _Bool _sharingSuggestionsWidgetCoreDuetEnabled;
    _Bool _enableNewShareSheet;
    _Bool _enableNewActionShareSheet;
    _Bool _enableOneUpAnimation;
    _Bool _allowFallbacksWhilePreparing;
    _Bool _performPreYukonColorSpaceConversions;
    _Bool _disableMetadataCorrections;
    _Bool _forceDateTimeMetadataBaking;
    _Bool _forceLocationMetadataBaking;
    _Bool _sendAssetURLsToMessages;
    _Bool _simulateDownloadFailure;
    _Bool _simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
    _Bool _simulatePhotoRemakingError;
    _Bool _simulateLivePhotoBundlingError;
    _Bool _simulateCPLNotReadyError;
    _Bool _simulateMismatchedExportCounts;
    _Bool _showSingleVideoDurationInShareSheetHeader;
    _Bool _showLivePhotoCountInShareSheetHeader;
    _Bool _showSecondaryActionSheet;
    _Bool _showGlobalLivenessExclusionSwitch;
    _Bool _showGlobalLocationExclusionSwitch;
    _Bool _excludeLivenessByDefaultWhenSharing;
    _Bool _excludeLocationByDefaultWhenSharing;
    _Bool _showSendAsOriginalsForCMM;
    _Bool _showSendAsOriginalsForIndividualItems;
    _Bool _sendAsOriginalsByDefaultWhenSharing;
    _Bool _savePhotosBundlesToFilesWithoutExtractingMedia;
    _Bool _debugRevealCMMShadowActivities;
    double _cornerRadius;
    unsigned long long _firstRotationAngle;
    unsigned long long _rotationAngle;
    unsigned long long _verticalAdjustment;
    unsigned long long _maximumNumberOfItems;
    double _shadowRadius;
    double _shadowOpacity;
    double _minShadowOffset;
    double _maxShadowOffset;
    unsigned long long _maxMessagesAssetLimit;
    unsigned long long _maxMailPhotoLimit;
    unsigned long long _confidentialityWarningsVersion;
    long long _locationBakingComparisonStrategy;
    long long _sharingHeaderLocationDisplayStyle;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) _Bool debugRevealCMMShadowActivities; // @synthesize debugRevealCMMShadowActivities=_debugRevealCMMShadowActivities;
@property(nonatomic) _Bool savePhotosBundlesToFilesWithoutExtractingMedia; // @synthesize savePhotosBundlesToFilesWithoutExtractingMedia=_savePhotosBundlesToFilesWithoutExtractingMedia;
@property(nonatomic) _Bool sendAsOriginalsByDefaultWhenSharing; // @synthesize sendAsOriginalsByDefaultWhenSharing=_sendAsOriginalsByDefaultWhenSharing;
@property(nonatomic) _Bool showSendAsOriginalsForIndividualItems; // @synthesize showSendAsOriginalsForIndividualItems=_showSendAsOriginalsForIndividualItems;
@property(nonatomic) _Bool showSendAsOriginalsForCMM; // @synthesize showSendAsOriginalsForCMM=_showSendAsOriginalsForCMM;
@property(nonatomic) _Bool excludeLocationByDefaultWhenSharing; // @synthesize excludeLocationByDefaultWhenSharing=_excludeLocationByDefaultWhenSharing;
@property(nonatomic) _Bool excludeLivenessByDefaultWhenSharing; // @synthesize excludeLivenessByDefaultWhenSharing=_excludeLivenessByDefaultWhenSharing;
@property(nonatomic) _Bool showGlobalLocationExclusionSwitch; // @synthesize showGlobalLocationExclusionSwitch=_showGlobalLocationExclusionSwitch;
@property(nonatomic) _Bool showGlobalLivenessExclusionSwitch; // @synthesize showGlobalLivenessExclusionSwitch=_showGlobalLivenessExclusionSwitch;
@property(nonatomic) _Bool showSecondaryActionSheet; // @synthesize showSecondaryActionSheet=_showSecondaryActionSheet;
@property(nonatomic) long long sharingHeaderLocationDisplayStyle; // @synthesize sharingHeaderLocationDisplayStyle=_sharingHeaderLocationDisplayStyle;
@property(nonatomic) _Bool showLivePhotoCountInShareSheetHeader; // @synthesize showLivePhotoCountInShareSheetHeader=_showLivePhotoCountInShareSheetHeader;
@property(nonatomic) _Bool showSingleVideoDurationInShareSheetHeader; // @synthesize showSingleVideoDurationInShareSheetHeader=_showSingleVideoDurationInShareSheetHeader;
@property(nonatomic) _Bool simulateMismatchedExportCounts; // @synthesize simulateMismatchedExportCounts=_simulateMismatchedExportCounts;
@property(nonatomic) _Bool simulateCPLNotReadyError; // @synthesize simulateCPLNotReadyError=_simulateCPLNotReadyError;
@property(nonatomic) _Bool simulateLivePhotoBundlingError; // @synthesize simulateLivePhotoBundlingError=_simulateLivePhotoBundlingError;
@property(nonatomic) _Bool simulatePhotoRemakingError; // @synthesize simulatePhotoRemakingError=_simulatePhotoRemakingError;
@property(nonatomic) _Bool simulateMaxFilesizeLimitForGIFsInSharedAlbumsError; // @synthesize simulateMaxFilesizeLimitForGIFsInSharedAlbumsError=_simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
@property(nonatomic) _Bool simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;
@property(nonatomic) _Bool sendAssetURLsToMessages; // @synthesize sendAssetURLsToMessages=_sendAssetURLsToMessages;
@property(nonatomic) _Bool forceLocationMetadataBaking; // @synthesize forceLocationMetadataBaking=_forceLocationMetadataBaking;
@property(nonatomic) _Bool forceDateTimeMetadataBaking; // @synthesize forceDateTimeMetadataBaking=_forceDateTimeMetadataBaking;
@property(nonatomic) _Bool disableMetadataCorrections; // @synthesize disableMetadataCorrections=_disableMetadataCorrections;
@property(nonatomic) long long locationBakingComparisonStrategy; // @synthesize locationBakingComparisonStrategy=_locationBakingComparisonStrategy;
@property(nonatomic) _Bool performPreYukonColorSpaceConversions; // @synthesize performPreYukonColorSpaceConversions=_performPreYukonColorSpaceConversions;
@property(nonatomic) _Bool allowFallbacksWhilePreparing; // @synthesize allowFallbacksWhilePreparing=_allowFallbacksWhilePreparing;
@property(nonatomic) _Bool enableOneUpAnimation; // @synthesize enableOneUpAnimation=_enableOneUpAnimation;
@property(nonatomic) _Bool enableNewActionShareSheet; // @synthesize enableNewActionShareSheet=_enableNewActionShareSheet;
@property(nonatomic) _Bool enableNewShareSheet; // @synthesize enableNewShareSheet=_enableNewShareSheet;
@property(nonatomic) _Bool sharingSuggestionsWidgetCoreDuetEnabled; // @synthesize sharingSuggestionsWidgetCoreDuetEnabled=_sharingSuggestionsWidgetCoreDuetEnabled;
@property(nonatomic) _Bool sharingSuggestionsWidgetLearningEnabled; // @synthesize sharingSuggestionsWidgetLearningEnabled=_sharingSuggestionsWidgetLearningEnabled;
@property(nonatomic) _Bool sharingSuggestionsWidgetHeuristicsEnabled; // @synthesize sharingSuggestionsWidgetHeuristicsEnabled=_sharingSuggestionsWidgetHeuristicsEnabled;
@property(nonatomic) _Bool sharingSuggestionsWidgetAllStreamEnabled; // @synthesize sharingSuggestionsWidgetAllStreamEnabled=_sharingSuggestionsWidgetAllStreamEnabled;
@property(nonatomic) unsigned long long confidentialityWarningsVersion; // @synthesize confidentialityWarningsVersion=_confidentialityWarningsVersion;
@property(nonatomic) _Bool forceNonCMMActivitiesToBeVisibleForCMM; // @synthesize forceNonCMMActivitiesToBeVisibleForCMM=_forceNonCMMActivitiesToBeVisibleForCMM;
@property(nonatomic) _Bool showInternalGIFExport; // @synthesize showInternalGIFExport=_showInternalGIFExport;
@property(nonatomic) unsigned long long maxMailPhotoLimit; // @synthesize maxMailPhotoLimit=_maxMailPhotoLimit;
@property(nonatomic) unsigned long long maxMessagesAssetLimit; // @synthesize maxMessagesAssetLimit=_maxMessagesAssetLimit;
@property(nonatomic) _Bool disableMailDrop; // @synthesize disableMailDrop=_disableMailDrop;
@property(nonatomic) _Bool showConfidentialityWarnings; // @synthesize showConfidentialityWarnings=_showConfidentialityWarnings;
@property(nonatomic) double maxShadowOffset; // @synthesize maxShadowOffset=_maxShadowOffset;
@property(nonatomic) double minShadowOffset; // @synthesize minShadowOffset=_minShadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) unsigned long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(nonatomic) unsigned long long verticalAdjustment; // @synthesize verticalAdjustment=_verticalAdjustment;
@property(nonatomic) unsigned long long rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) unsigned long long firstRotationAngle; // @synthesize firstRotationAngle=_firstRotationAngle;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)debugDescription;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (void)setDefaultValues;
- (id)parentSettings;

@end

