//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TSReading/TSWPTextMagnifier-Protocol.h>
#import <TSReading/TSWPTextMagnifierRendererDelegate-Protocol.h>

@class NSString, TSWPRep, TSWPTextMagnifierRenderer, TSWPTextMagnifierTimeWeightedPoint;

@interface TSWPTextMagnifierCaret : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate>
{
    TSWPRep *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _offset;
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    double _yOffset;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
}

+ (id)sharedCaretMagnifier;
@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_magnificationPoint;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) TSWPRep *target; // @synthesize target=_target;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)shouldHideCanvasLayer;
@property(readonly, nonatomic) NSString *maskImageName;
@property(readonly, nonatomic) NSString *overlayImageName;
@property(readonly, nonatomic) NSString *underlayImageName;
- (void)stopMagnifying:(_Bool)arg1;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;
- (void)updateFrameAndOffset;
- (void)remove;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (void)autoscrollWillNotStart;
- (void)setAutoscrollDirections:(int)arg1;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool terminalPointPlacedCarefully;
@property(readonly, nonatomic) struct CGPoint terminalPoint;
@property(nonatomic) struct CGPoint magnificationPoint;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithDefaultFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

