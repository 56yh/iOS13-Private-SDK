//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIPreviewInteraction, UIView;
@protocol UICoordinateSpace, UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@protocol _UIPreviewInteractionImpl 
@property(nonatomic) __weak UIPreviewInteraction *previewInteraction;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property(readonly, nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <UIPreviewInteractionDelegate> delegate;
- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (id)initWithView:(UIView *)arg1 previewInteraction:(UIPreviewInteraction *)arg2;
@end

