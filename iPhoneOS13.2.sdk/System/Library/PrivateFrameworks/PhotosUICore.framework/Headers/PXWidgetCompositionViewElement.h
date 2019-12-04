//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXWidgetCompositionElement.h>

#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>

@class NSMutableSet, NSString, PXBasicTileAnimator, PXTilingController, PXWidgetCompositionViewElementLayout;

@interface PXWidgetCompositionViewElement : PXWidgetCompositionElement <PXTileSource, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate>
{
    PXBasicTileAnimator *__tileAnimator;
    PXWidgetCompositionViewElementLayout *__layout;
    NSMutableSet *__tilesInUse;
    PXTilingController *__tilingController;
    struct CGPoint __anchorOffset;
}

@property(nonatomic, setter=_setAnchorOffset:) struct CGPoint _anchorOffset; // @synthesize _anchorOffset=__anchorOffset;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(readonly, nonatomic) PXWidgetCompositionViewElementLayout *_layout; // @synthesize _layout=__layout;
@property(readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (struct CGPoint)_anchorPoint;
- (void)_loadTilingController;
- (void)saveAnchoring;
- (id)contentTilingController;
- (void)checkInViewTile:(id)arg1;
- (id)checkOutViewTile;
- (id)createTileAnimator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

