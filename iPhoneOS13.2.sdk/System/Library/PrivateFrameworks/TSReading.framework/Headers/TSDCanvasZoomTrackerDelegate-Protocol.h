//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class TSDCanvasZoomTracker;

@protocol TSDCanvasZoomTrackerDelegate 
- (void)canvasZoomTrackerDidFinish:(TSDCanvasZoomTracker *)arg1;
- (void)canvasZoomTrackerDidEndFinalZoomAnimation:(TSDCanvasZoomTracker *)arg1;
- (void)canvasZoomTrackerWillBeginFinalZoomAnimation:(TSDCanvasZoomTracker *)arg1;
- (void)canvasZoomTrackerDidEndViewScaleFeedback:(TSDCanvasZoomTracker *)arg1;
- (void)canvasZoomTracker:(TSDCanvasZoomTracker *)arg1 willUpdateViewScaleFeedbackWithScale:(double)arg2;
- (void)canvasZoomTracker:(TSDCanvasZoomTracker *)arg1 willBeginViewScaleFeedbackWithFastPinch:(_Bool)arg2;
@end

