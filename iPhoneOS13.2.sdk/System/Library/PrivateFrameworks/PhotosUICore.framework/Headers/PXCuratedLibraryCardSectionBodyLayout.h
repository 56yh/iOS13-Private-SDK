//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGDisplayAssetSource-Protocol.h>
#import <PhotosUICore/PXGGradientSource-Protocol.h>
#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSString, PXAssetsDataSource, PXCuratedLibraryCardSectionBodyLayoutSpec, PXCuratedLibrarySectionGeometryDescriptor, PXGLayoutGuide;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGGradientSource, PXGDisplayAssetSource, PXGSolidColorSource>
{
    unsigned short _assetVersion;
    id <PXDisplayAsset> _keyAsset;
    CDStruct_d97c9657 _updateFlags;
    struct _PXGSpriteIndexRange _assetSpriteIndexRange;
    struct _PXGSpriteIndexRange _skimmingHintSpriteIndexRange;
    _Bool _isSkimming;
    long long _section;
    PXAssetsDataSource *_dataSource;
    long long _zoomLevel;
    PXCuratedLibraryCardSectionBodyLayoutSpec *_spec;
    long long _maxSkimmingIndex;
    long long _currentSkimmingIndex;
    PXGLayoutGuide *_assetLayoutGuide;
    id <PXDisplayAssetFetchResult> _keyAssetsFetchResult;
    struct PXSimpleIndexPath _sectionIndexPath;
}

@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property(readonly, nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property(readonly, nonatomic) PXGLayoutGuide *assetLayoutGuide; // @synthesize assetLayoutGuide=_assetLayoutGuide;
@property(nonatomic) long long currentSkimmingIndex; // @synthesize currentSkimmingIndex=_currentSkimmingIndex;
@property(nonatomic) long long maxSkimmingIndex; // @synthesize maxSkimmingIndex=_maxSkimmingIndex;
@property(nonatomic) _Bool isSkimming; // @synthesize isSkimming=_isSkimming;
@property(retain, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)gradientForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)arg1;
- (void)screenScaleDidChange;
- (void)referenceSizeDidChange;
- (void)_updateKeyAssetFetchResultWithDataSource:(id)arg1 section:(long long)arg2;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(id /* block */)arg3 modifyState:(id /* block */)arg4;
- (id)layoutForItemChanges;
@property(readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
- (void)_updateSkimmingHintWithAssetFrame:(struct CGRect)arg1;
- (void)_updateSprites;
- (void)update;
@property(readonly, nonatomic) struct CGRect assetFrame;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
