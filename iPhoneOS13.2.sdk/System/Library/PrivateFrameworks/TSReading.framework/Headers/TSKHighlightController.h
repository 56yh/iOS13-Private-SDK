//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/CALayerDelegate-Protocol.h>

@class CALayer, NSString, TSUImage;

@interface TSKHighlightController : NSObject <CALayerDelegate>
{
    CALayer *_imageLayer;
    TSUImage *_image;
    struct CGRect _overallRect;
    struct CGAffineTransform _canvasTransform;
    struct CGAffineTransform _layerTransform;
    CALayer *_containingLayer;
    double _viewScale;
    struct CGPath *_path;
}

@property(retain, nonatomic) TSUImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_containingLayer;
- (void)setCanvasTransform:(struct CGAffineTransform)arg1 layerTransform:(struct CGAffineTransform)arg2;
@property(nonatomic) struct CGAffineTransform transform;
- (struct CGRect)buildLayersForPath:(struct CGPath *)arg1 withImage:(id)arg2;
- (void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2;
- (void)hide;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)drawRoundedRect;
- (void)reset;
- (void)disconnect;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

