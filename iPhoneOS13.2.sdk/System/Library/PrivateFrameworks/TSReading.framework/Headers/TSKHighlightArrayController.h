//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKPulseAnimationControllerProtocol-Protocol.h>

@class NSArray, NSMutableArray;
@protocol TSKHighlightArrayControllerProtocol;

@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol>
{
    NSMutableArray *_layers;
    NSMutableArray *_controllers;
    double _zOrder;
    id <TSKHighlightArrayControllerProtocol> _delegate;
    _Bool _creatingLayers;
    struct CGAffineTransform _canvasTransform;
    struct CGAffineTransform _layerTransform;
    _Bool _shouldPulsate;
    _Bool _pulsating;
    _Bool _autohide;
    double _viewScale;
}

@property(nonatomic) _Bool autohide; // @synthesize autohide=_autohide;
@property(nonatomic) _Bool pulsating; // @synthesize pulsating=_pulsating;
@property(nonatomic) _Bool shouldPulsate; // @synthesize shouldPulsate=_shouldPulsate;
@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
- (void)setCanvasTransform:(struct CGAffineTransform)arg1 layerTransform:(struct CGAffineTransform)arg2;
@property(nonatomic) struct CGAffineTransform transform;
- (id)buildHighlightsForSearchReferences:(id)arg1 contentsScaleForLayers:(double)arg2;
- (void)reset;
- (void)disconnect;
- (void)pulseAnimationDidStopForPulse:(id)arg1;
- (void)stop;
- (void)startAnimating;
- (void)dealloc;
- (id)initWithZOrder:(double)arg1 delegate:(id)arg2;

@end

