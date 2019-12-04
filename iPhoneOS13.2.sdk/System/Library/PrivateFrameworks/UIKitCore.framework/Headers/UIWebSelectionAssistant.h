//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UISelectionInteractionAssistant-Protocol.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSString, UIKeyboardTaskQueue, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UITextInteraction, UIView, UIWebSelection, UIWebSelectionView, _UIKeyboardBasedNonEditableTextSelectionGestureController, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate, UISelectionInteractionAssistant>
{
    UIView *_view;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    UILongPressGestureRecognizer *_forcePressGestureRecognizer;
    UITextInteraction *_textInteractions;
    _UIKeyboardTextSelectionController *_textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController *_textSelectionGestureController;
    _Bool _enabled;
    UIWebSelectionView *_selectionView;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *forcePressGestureRecognizer; // @synthesize forcePressGestureRecognizer=_forcePressGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIWebSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController; // @synthesize textSelectionController=_textSelectionController;
- (void)addGestureRecognizersToView:(id)arg1;
- (void)showSelectionCommands;
- (void)updateSelectionRects:(_Bool)arg1;
- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (id)scrollView;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
@property(nonatomic) _Bool enabled;
- (void)layoutChangedByScrolling:(_Bool)arg1;
- (void)hideCallout;
- (void)resignedFirstResponder;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)didEndScrollingOrZoomingPage;
- (void)willStartScrollingOrZoomingPage;
- (void)willBeginGesture;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (void)scaleChanged;
- (void)tap:(id)arg1;
- (void)makeWebSelection:(id)arg1;
- (void)addSelectionViewIfNeeded;
@property(readonly, nonatomic) struct CGRect selectionFrame;
@property(readonly, nonatomic) UIWebSelection *selection;
- (void)selectionChanged;
- (void)clearSelection;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isSelectionGestureRecognizer:(id)arg1;
- (void)setGestureRecognizers;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (void)dealloc;
- (void)initializeSelectionView;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;

@end

