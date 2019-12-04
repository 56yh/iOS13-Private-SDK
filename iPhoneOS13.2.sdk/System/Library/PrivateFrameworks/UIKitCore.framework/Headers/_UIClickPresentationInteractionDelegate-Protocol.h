//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UITargetedPreview, UIViewController, _UIClickPresentation, _UIClickPresentationInteraction;

@protocol _UIClickPresentationInteractionDelegate 
- (_UIClickPresentation *)clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 presentationForPresentingViewController:(UIViewController *)arg2;

@optional
- (void)clickPresentationInteractionEnded:(_UIClickPresentationInteraction *)arg1 wasCancelled:(_Bool)arg2;
- (_Bool)clickPresentationInteractionShouldPresent:(_UIClickPresentationInteraction *)arg1;
- (UITargetedPreview *)clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (_Bool)clickPresentationInteractionShouldBegin:(_UIClickPresentationInteraction *)arg1;
@end

