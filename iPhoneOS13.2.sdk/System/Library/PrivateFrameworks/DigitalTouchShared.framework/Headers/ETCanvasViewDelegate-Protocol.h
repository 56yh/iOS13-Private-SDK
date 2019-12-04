//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ETCanvasView, ETMessage, UITapGestureRecognizer;

@protocol ETCanvasViewDelegate 
- (long long)recentHeartRate;
- (_Bool)canvasViewShouldSendWithTimer:(ETCanvasView *)arg1;
- (void)canvasViewWillReachComposingSizeLimit:(ETCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(ETCanvasView *)arg1;
- (void)canvasViewDidBeginStroke:(ETCanvasView *)arg1;
- (void)canvasView:(ETCanvasView *)arg1 sendMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didEndComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didUpdateComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didBeginComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didEndPlayingMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 willEndPlayingMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didBeginPlayingMessage:(ETMessage *)arg2;

@optional
- (void)canvasView:(ETCanvasView *)arg1 angerUsesForceTouch:(_Bool)arg2;
- (void)canvasViewDidEndMediaAppearance:(ETCanvasView *)arg1;
- (void)canvasViewDidStartMediaAppearance:(ETCanvasView *)arg1;
- (_Bool)canvasView:(ETCanvasView *)arg1 tapRecognizerShouldBegin:(UITapGestureRecognizer *)arg2;
- (void)canvasViewDidUnpause:(ETCanvasView *)arg1;
- (void)canvasViewDidPause:(ETCanvasView *)arg1;
- (_Bool)canvasViewShouldUseFastVerticalWisp:(ETCanvasView *)arg1;
@end

