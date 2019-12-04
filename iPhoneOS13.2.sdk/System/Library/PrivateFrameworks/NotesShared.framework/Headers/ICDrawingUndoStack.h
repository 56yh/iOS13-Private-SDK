//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingAttachmentController, ICDrawingUndoCheckPoint, NSMutableArray, NSOperationQueue, NSUndoManager;

@interface ICDrawingUndoStack : NSObject
{
    ICDrawingAttachmentController *_drawingController;
    NSMutableArray *_undoStack;
    NSMutableArray *_redoStack;
    NSMutableArray *_checkPointCommands;
    NSOperationQueue *_operationQueue;
    NSUndoManager *_undoManager;
    ICDrawingUndoCheckPoint *_initialCheckPoint;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableArray *checkPointCommands; // @synthesize checkPointCommands=_checkPointCommands;
@property(retain, nonatomic) NSMutableArray *redoStack; // @synthesize redoStack=_redoStack;
@property(retain, nonatomic) NSMutableArray *undoStack; // @synthesize undoStack=_undoStack;
@property(retain, nonatomic) ICDrawingUndoCheckPoint *initialCheckPoint; // @synthesize initialCheckPoint=_initialCheckPoint;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(readonly, nonatomic) __weak ICDrawingAttachmentController *drawingController; // @synthesize drawingController=_drawingController;
- (void)didUndoOrRedo:(id)arg1;
- (void)finishRedo:(id)arg1;
- (void)performRedo;
- (void)redo;
- (void)finishUndo:(id)arg1;
- (void)performUndo;
- (void)undo;
- (void)undoManagerCommand:(id)arg1;
- (id)findUndoCheckPointRenderCostOut:(double *)arg1 commandsAfterOut:(id *)arg2;
- (void)addEraseUndoCommand:(id)arg1;
- (void)applyCommandFromStack:(id)arg1 toStack:(id)arg2 completion:(id /* block */)arg3;
- (void)didRemoveCheckPoint;
- (void)didAddCheckPoint;
- (void)checkIfNewCheckPointIsNeeded;
- (void)didAddNewCommand:(id)arg1;
- (void)addUndoCommand:(id)arg1;
@property(readonly, nonatomic) unsigned long long undoStackDepth; // @dynamic undoStackDepth;
- (void)setInitialImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forCommands:(id)arg3;
- (void)reset;
- (void)dealloc;
- (id)initWithDrawingController:(id)arg1;

@end

