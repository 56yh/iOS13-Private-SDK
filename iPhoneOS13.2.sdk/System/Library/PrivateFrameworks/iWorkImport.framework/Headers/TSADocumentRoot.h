//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPDocumentRoot.h>

#import <iWorkImport/TSDImportExportDelegate-Protocol.h>
#import <iWorkImport/TSDScrollingAwareChangeSource-Protocol.h>
#import <iWorkImport/TSKPencilAnnotationSupportedDocument-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, SFUCryptoKey, TSADocumentInfo, TSADrawableFactory, TSAFunctionBrowserState, TSAShortcutController, TSCECalculationEngine, TSDFreehandDrawingToolkitUIState, TSKCustomFormatList, TSKViewState, TSPLazyReference, TSTCustomFormatList;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSADocumentRoot : TSWPDocumentRoot <TSKPencilAnnotationSupportedDocument, TSDImportExportDelegate, TSDScrollingAwareChangeSource>
{
    // Error parsing type: Ai, name: _needsToCaptureViewState
    NSMutableDictionary *_upgradeState;
    TSPLazyReference *_viewStateReference;
    NSMutableSet *_warnings;
    NSString *_documentLanguage;
    unsigned long long _documentLanguageWritingDirection;
    TSCECalculationEngine *_calculationEngine;
    TSAFunctionBrowserState *_functionBrowserState;
    TSTCustomFormatList *_deprecatedTablesCustomFormatList;
    TSKCustomFormatList *_tablesCustomFormatList;
    TSAShortcutController *_shortcutController;
    _Bool _didLoadControllers;
    _Bool _needsMediaCompatibilityUpgrade;
    _Bool _collaborativeMediaCompatibilityUpgradeDidFail;
    _Bool _canUseHEVC;
    _Bool _isClosed;
    _Bool _documentLocaleWasUpdated;
    _Bool _didPauseRecalculationForBackgroundDocument;
    NSString *_templateIdentifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    SFUCryptoKey *_accessQueue_documentCacheDecryptionKey;
    NSObject<OS_dispatch_queue> *_fetchLatestRevisionQueue;
    _Bool _hasPreUFFVersion;
    _Bool _didLoadDocumentFromTemplate;
    _Bool _didLoadDocumentFromRevert;
    NSArray *_buildVersionHistory;
}

+ (_Bool)shouldShowImportedDataNotificationsOnOpen;
+ (id)persistenceWarningsForData:(id)arg1 flags:(unsigned long long)arg2;
+ (unsigned long long)previewTypeForCurrentDevice;
+ (struct CGSize)previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;
+ (void)writePreviewImage:(id)arg1 group:(id)arg2 queue:(id)arg3 dataConsumerProvider:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(_Bool)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
+ (_Bool)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (_Bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;
+ (_Bool)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2;
+ (_Bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;
+ (id)scaledPreviewImageForType:(unsigned long long)arg1 scalableImage:(id)arg2;
+ (id)supportedPreviewImageExtensions;
+ (id)supportedScalablePreviewNames;
+ (id)buildVersionHistoryPathPreUFF;
+ (id)buildVersionHistoryPath;
+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTableInfo:(id)arg1 templateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
@property(nonatomic) _Bool didLoadDocumentFromRevert; // @synthesize didLoadDocumentFromRevert=_didLoadDocumentFromRevert;
@property(nonatomic) _Bool didLoadDocumentFromTemplate; // @synthesize didLoadDocumentFromTemplate=_didLoadDocumentFromTemplate;
@property(nonatomic) _Bool hasPreUFFVersion; // @synthesize hasPreUFFVersion=_hasPreUFFVersion;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_didLoadControllers;
@property(readonly, nonatomic) _Bool documentLocaleWasUpdated; // @synthesize documentLocaleWasUpdated=_documentLocaleWasUpdated;
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(copy, nonatomic) NSArray *buildVersionHistory; // @synthesize buildVersionHistory=_buildVersionHistory;
@property(readonly, nonatomic) _Bool isMultiPageForQuickLook;
- (_Bool)hasICloudConflict;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(_Bool)arg2;
@property(readonly, nonatomic) TSADrawableFactory *drawableFactory;
- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(_Bool)arg1;
@property(readonly, nonatomic) NSString *defaultDraftName;
@property(readonly, nonatomic) NSString *name;
- (void)removePencilAnnotationsFromDrawables:(id)arg1;
- (void)enumeratePencilAnnotationsFromRootObject:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePencilAnnotationsUsingBlock:(id /* block */)arg1;
- (id)pencilAnnotationEnumeratorFromRootObect:(id)arg1;
- (double)currentDesiredPencilAnnotationDrawingScale;
- (_Bool)hasPencilAnnotations;
- (void)removePencilAnnotations;
- (_Bool)childrenCanBeAnnotatedWithPencil;
- (_Bool)canBeAnnotatedWithPencil;
- (id)allPencilAnnotations;
- (_Bool)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (void)didSaveWithEncryptionChange;
- (void)documentCacheWasInvalidated;
- (id)dataFromDocumentCachePath:(id)arg1;
- (id)documentCachePath;
- (id)referencedStylesOfClass:(Class)arg1;
- (_Bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(_Bool)arg2;
@property(readonly, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
- (void)p_upgradeRemainingOutlinedTextStylesWithFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeToFixNonVariationChildStylesWithFileFormatVersion:(unsigned long long)arg1;
- (void)removeRedundantStyleOverridesAndEnsureReferencedStylesAreInStylesheet;
- (void)upgradeToSingleStylesheet;
- (void)upgradeCellStyles;
- (void)upgradeTextboxPresets;
- (void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
- (void)p_cleanupColumnStyles;
- (void)enumerateStylesheetsUsingBlock:(id /* block */)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_removeStyles:(id)arg1;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(_Bool *)arg2 number:(unsigned long long *)arg3;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(_Bool)arg2;
- (id)protected_defaultTextPresetOrdering;
- (void)prepareForSavingAsTemplate;
- (void)removeWarning:(id)arg1;
- (void)addWarning:(id)arg1;
- (id)warnings;
- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 error:(id *)arg3;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;
- (void)importerDidFinish:(id)arg1;
- (void)finalizeFromSageImport;
- (void)p_registerAllFormulasAfterImport;
- (void)didDownloadRemoteData:(id)arg1;
- (void)didDownloadDocumentResources:(id)arg1;
- (void)fontUpdatedForStyleClient:(id)arg1;
- (id)tableToShowImportedDataNotificationOnOpenFor;
- (_Bool)shouldShowFontWarningNotificationForWarnings:(id)arg1;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id *)arg2;
- (id)warningsByCombiningSortedWarnings:(id)arg1 withWarnings:(id)arg2;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)consolidatedDocumentWarningsFromWarnings:(id)arg1;
@property(readonly, nonatomic) NSDictionary *missingFontNamesAndWarningMessages;
@property(readonly, nonatomic) NSSet *missingFontWarningMessages;
- (void)prepareToGeneratePreview;
- (id)previewImageForSize:(struct CGSize)arg1;
- (id)previewImage;
- (void)blockForRecalcWithTimeout:(double)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)resumeThumbnailing;
- (void)suspendThumbnailing;
- (void)resumeBackgroundActivities;
- (void)suspendBackgroundActivities;
- (void)resetViewState;
- (void)invalidateViewState;
- (id)createViewStateRootForContinuation:(_Bool)arg1;
- (void)p_updateViewStateWithRoot:(id)arg1;
- (void)updateViewStateWithRoot:(id)arg1;
- (void)applyViewState:(id)arg1;
- (id)p_captureViewStateForImport:(_Bool)arg1;
- (id)captureViewStateForImport;
- (id)captureViewState;
- (void)captureViewStateIfNeeded;
@property(readonly, nonatomic) TSKViewState *viewState;
- (void)p_upgradeTablesIfNeeded:(unsigned long long)arg1;
- (void)p_upgradeCustomFormatList;
- (id)customFormatList;
- (void)setCustomFormatListToUpgrade:(id)arg1;
- (void)setFunctionBrowserState:(id)arg1;
- (id)functionBrowserState;
- (void)setShortcutController:(id)arg1;
- (id)shortcutController;
- (void)initializeForImport;
- (void)resumeRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)pauseRecalculation;
@property(retain, nonatomic) TSCECalculationEngine *calculationEngine;
- (void)willClose;
- (void)cleanupForImportFailure;
- (void)willUnload;
- (void)fulfillPasteboardPromises;
- (id)additionalResourceRequestsForObjectContext:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
@property(readonly, nonatomic) NSDictionary *packageDataForWrite;
-     // Error parsing type: v32@0:8^{DocumentArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSWP::TextPresetDisplayItemArchive>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DocumentArchive}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}BBB}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{DocumentArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSWP::TextPresetDisplayItemArchive>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DocumentArchive}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}BBB}16@24, name: loadFromArchive:unarchiver:
-     // Error parsing type: v32@0:8r^{DocumentArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSWP::TextPresetDisplayItemArchive>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DocumentArchive}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}BBB}16@24, name: stashUpgradeState:unarchiver:
- (id)upgradeState;
- (void)collectDocumentCloseAnalyticsWithLogger:(id)arg1;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (void)documentDidLoad;
- (void)backgroundDocumentDidLoad;
- (_Bool)objectsNeedToBeMigrated:(id)arg1;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
@property(readonly, nonatomic) TSADocumentInfo *documentInfo;
- (id)tsa_delegate;
- (void)dealloc;
- (unsigned long long)writingDirection;
- (void)updateWritingDirection:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasFloatingLocale;
- (void)p_upgradeDocumentCreationLocale;
- (_Bool)p_updateDocumentLanguageToCurrentIfNeeded;
- (id)templatesMetadataBundle;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateIdentifier:(id)arg1;
- (void)prepareNewDocumentWithTemplateIdentifier:(id)arg1 bundle:(id)arg2 documentLocale:(id)arg3;
- (void)commonInit;
- (id)initWithContext:(id)arg1;
@property(nonatomic) _Bool canUseHEVC;
@property(nonatomic) _Bool collaborativeMediaCompatibilityUpgradeDidFail;
@property(nonatomic) _Bool needsMediaCompatibilityUpgrade;
@property(copy, nonatomic) NSString *templateIdentifier;
- (void)setDocumentCreationLocale:(id)arg1;
- (void)setDocumentLanguage:(id)arg1;
- (id)documentLanguage;
- (id)namedTextStyles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property(readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property(readonly, nonatomic) _Bool isBrowsingVersions;
@property(readonly) Class superclass;

@end

