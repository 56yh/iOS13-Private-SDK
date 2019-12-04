//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIGestureRecognizer, UIMultiSelectInteraction;

@protocol UIMultiSelectInteractionDelegate 
- (void)didEndMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (void)willBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;
- (_Bool)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;
- (_Bool)isInMultiSelectMode;
- (_Bool)supportsMultiSelectInteraction:(UIMultiSelectInteraction *)arg1;

@optional
- (_Bool)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;
- (void)automaticallyTransitionToMultiSelectMode;
- (void)didCancelMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(UIGestureRecognizer *)arg1;
@end

