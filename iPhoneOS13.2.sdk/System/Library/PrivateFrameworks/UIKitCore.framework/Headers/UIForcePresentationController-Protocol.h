//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIGestureRecognizer, UIView, _UIStatesFeedbackGenerator;
@protocol _UIForcePresentationControllerDelegate;

@protocol UIForcePresentationController 
@property(nonatomic) __weak id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property(readonly, nonatomic) UIView *_revealContainerView;
@property(nonatomic) _Bool _sourceViewSnapshotAndScaleTransformSuppressed;
@property(retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer;
@property(copy, nonatomic) id /* block */ presentationPhaseCompletionBlock;
- (_Bool)_canCommitPresentation;
- (_Bool)_canDismissPresentation;

@optional
- (void)_willCommitPresentation;
@end

