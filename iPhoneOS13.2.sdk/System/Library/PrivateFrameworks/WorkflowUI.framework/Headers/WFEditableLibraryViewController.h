//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFLibraryViewController.h>

#import <WorkflowUI/UICollectionViewDragDelegate-Protocol.h>
#import <WorkflowUI/UICollectionViewDropDelegate-Protocol.h>
#import <WorkflowUI/UIGestureRecognizerDelegate-Protocol.h>
#import <WorkflowUI/WFEditableLibraryResultsControllerDelegate-Protocol.h>

@class AVAudioPlayer, NSIndexPath, NSString, UIBarButtonItem, WFEditableLibraryResultsController;

@interface WFEditableLibraryViewController : WFLibraryViewController <UIGestureRecognizerDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, WFEditableLibraryResultsControllerDelegate>
{
    _Bool _dropping;
    UIBarButtonItem *_createButtonItem;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_duplicateButtonItem;
    AVAudioPlayer *_reorderSoundPlayer;
    NSIndexPath *_dragItemOriginIndexPath;
}

+ (Class)resultsControllerClass;
@property(retain, nonatomic) NSIndexPath *dragItemOriginIndexPath; // @synthesize dragItemOriginIndexPath=_dragItemOriginIndexPath;
@property(retain, nonatomic) AVAudioPlayer *reorderSoundPlayer; // @synthesize reorderSoundPlayer=_reorderSoundPlayer;
@property(retain, nonatomic) UIBarButtonItem *duplicateButtonItem; // @synthesize duplicateButtonItem=_duplicateButtonItem;
@property(retain, nonatomic) UIBarButtonItem *deleteButtonItem; // @synthesize deleteButtonItem=_deleteButtonItem;
@property(retain, nonatomic) UIBarButtonItem *createButtonItem; // @synthesize createButtonItem=_createButtonItem;
@property(readonly, nonatomic) _Bool dropping; // @synthesize dropping=_dropping;
- (void)accessibilityAnnounceMovingWorkflowToIndexPath:(id)arg1;
- (void)playReorderSound;
- (void)resultsController:(id)arg1 handleLegacyMoveFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)createDragItemForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)workflowCellDidRequestRename:(id)arg1;
- (void)workflowCellDidRequestDelete:(id)arg1;
- (void)workflowCellDidRequestDuplicate:(id)arg1;
- (void)moveWorkflowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)deleteWorkflowsWithoutConfirmation:(id)arg1;
- (void)deleteWorkflows:(id)arg1 withConfirmationPresentationSource:(id)arg2;
- (void)duplicateWorkflows:(id)arg1;
- (void)promptToRenameWorkflow:(id)arg1;
- (void)deleteSelectedWorkflows;
- (void)duplicateSelectedWorkflows;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)importWorkflowAtURL:(id)arg1 withSuggestedName:(id)arg2 fromSourceApplication:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)createWorkflowFromBarButtonItem;
- (void)workflowsUpdated;
- (void)updateNavigationItems;
- (void)beginEditingFromIndexPath:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) WFEditableLibraryResultsController *resultsController; // @dynamic resultsController;
@property(readonly) Class superclass;

@end

