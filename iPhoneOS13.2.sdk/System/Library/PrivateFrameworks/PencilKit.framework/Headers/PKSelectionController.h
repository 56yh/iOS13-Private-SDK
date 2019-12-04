//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/UIDropInteractionDelegate_Private-Protocol.h>

@class NSString, NSUUID, PKSelectionView, PKSpaceInsertionController, PKStrokeSelection, PKTiledView, UIDropInteraction;
@protocol OS_dispatch_queue;

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private>
{
    struct CGPoint _dropPosition;
    NSUUID *_previousDrawingUUIDForSelection;
    int _selectionViewCount;
    double _cachedStrokeImageScale;
    PKSpaceInsertionController *_spaceInsertionController;
    UIDropInteraction *_dropInteraction;
    _Bool _hasCurrentSelection;
    _Bool _isCurrentlyAddingSpace;
    PKTiledView *_tiledView;
    PKStrokeSelection *_currentStrokeSelection;
    NSObject<OS_dispatch_queue> *_selectionHullQueue;
    PKSelectionView *_selectionView;
    struct CGAffineTransform _selectionTransform;
}

@property(retain, nonatomic) PKSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) _Bool isCurrentlyAddingSpace; // @synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *selectionHullQueue; // @synthesize selectionHullQueue=_selectionHullQueue;
@property(nonatomic) struct CGAffineTransform selectionTransform; // @synthesize selectionTransform=_selectionTransform;
@property(retain, nonatomic) PKStrokeSelection *currentStrokeSelection; // @synthesize currentStrokeSelection=_currentStrokeSelection;
@property(nonatomic) _Bool hasCurrentSelection; // @synthesize hasCurrentSelection=_hasCurrentSelection;
@property(nonatomic) __weak PKTiledView *tiledView; // @synthesize tiledView=_tiledView;
- (struct CGPoint)closestPointForPastedSelectionRect:(struct CGRect)arg1 withDrawing:(id *)arg2;
- (id)_attachmentForSelectionRect:(struct CGRect)arg1;
- (struct CGRect)_extendedBoundsForDrawing:(id)arg1;
- (struct CGRect)_visibleOnscreenBoundsForDrawing:(id)arg1;
- (void)applyCommand:(id)arg1 toDrawing:(id)arg2;
- (struct CGPoint)_selectionOffsetForDrawing:(id)arg1;
- (id)_drawingForSelectionRect:(struct CGRect)arg1;
- (id)_drawingForLiveAttachment;
- (_Bool)_liveDrawingIsAtEndOfDocument;
- (_Bool)_isValidDropPointForStrokes:(struct CGPoint)arg1;
- (id)drawingForUUID:(id)arg1;
- (id)_visibleStrokesWithinExtendedBounds:(id)arg1 forDrawing:(id)arg2;
- (struct CGRect)_scrollViewVisibleBounds;
- (struct CGRect)boundsForDrawing:(id)arg1;
- (struct CGRect)_scrollViewDrawingFrame;
- (struct CGPoint)_pointInStrokeSpace:(struct CGPoint)arg1 inDrawing:(id)arg2;
- (void)_setAdditionalStrokes:(id)arg1 inDrawing:(id)arg2 completion:(id /* block */)arg3;
- (void)_resetSelectedStrokeStateForRenderer;
- (void)_selectionRefreshWithChangeToDrawings:(id)arg1 completion:(id /* block */)arg2;
- (void)_selectionRefreshWithChangeToDrawings:(id)arg1;
- (id)topView;
- (struct CGAffineTransform)_selectionDrawingTransformForDrawing:(id)arg1;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)didMoveStrokeSelectionToLocation:(struct CGPoint)arg1 transform:(struct CGAffineTransform)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (_Bool)didResizeWhitespace;
- (void)dismissSpacingResizeHandles;
- (void)hideStrokes:(id)arg1 inDrawing:(id)arg2;
- (id)strokesForSpaceInsertionWithStrokeSelection:(id)arg1 inDrawing:(id)arg2 offset:(double)arg3;
- (void)didBeginSpaceInsertionWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (id)setupSpaceInsertionControllerIfNecessary;
- (void)updateCurrentStrokeSelectionTransformForLocation:(id)arg1 atLocation:(struct CGPoint)arg2 offsetInTouchView:(struct CGPoint)arg3 transform:(struct CGAffineTransform)arg4;
- (struct CGAffineTransform)_selectionTransformForStrokes:(id)arg1 atLocation:(struct CGPoint)arg2 dragOffsetInDragView:(struct CGPoint)arg3 transform:(struct CGAffineTransform)arg4 constrainSelection:(_Bool)arg5 inDrawing:(id)arg6;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(_Bool)arg2 withStrokeSelection:(id)arg3;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(_Bool)arg2;
- (void)_pasteStrokeSelection:(id)arg1 atPoint:(struct CGPoint)arg2 inDrawing:(id)arg3;
- (void)changeColorOfSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (void)commitStrokesWithCompletion:(id /* block */)arg1;
- (void)clearSelectionIfNecessaryAnimated:(_Bool)arg1 withCompletion:(id /* block */)arg2;
- (void)clearSelectionIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)clearSelectionIfNecessary;
- (void)_addItemsToPasteboard:(id)arg1;
- (void)resetStrokesAndClearSelection;
- (void)registerCommandWithUndoManager:(id)arg1;
- (void)eraseSelection;
- (void)didScroll:(struct CGPoint)arg1;
- (id)_newInk:(id)arg1 withChange:(id)arg2;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3 inkChanges:(id)arg4 withCompletion:(id /* block */)arg5;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3;
- (id)newStrokesForSelection:(id)arg1 toDrawing:(id)arg2;
- (void)_removeSelectionViewAnimated:(_Bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_removeSelectionView;
- (id)rotateUIImage:(id)arg1 clockwise:(_Bool)arg2;
- (id)_rotateImageIfNecessary:(id)arg1;
- (void)setImageOnSelectionViewForStrokeSelection:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)generateImageForStrokeSelection:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_addViewForStrokeSelection:(id)arg1 isDragSource:(_Bool)arg2 drawing:(id)arg3 withCompletion:(id /* block */)arg4;
- (struct CGRect)_calculateFrameForSelectionView:(id)arg1 inDrawing:(id)arg2;
- (struct CGSize)viewSizeForStrokeSelection:(id)arg1;
- (void)moveSelectionViewBasedOnStrokeTransform:(struct CGAffineTransform)arg1 drawing:(id)arg2;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform)arg3 drawing:(id)arg4 completion:(id /* block */)arg5;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform)arg3 drawing:(id)arg4;
- (void)didSelectStrokesNotification:(id)arg1;
- (struct CGPoint)intersectionPointAlongStroke:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2 visibleOnscreenStrokes:(id)arg3;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2;
@property(readonly, nonatomic) _Bool shouldClampInputPoints;
- (void)_layoutViewsIfNecessary;
- (void)dealloc;
- (id)initWithTiledView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

