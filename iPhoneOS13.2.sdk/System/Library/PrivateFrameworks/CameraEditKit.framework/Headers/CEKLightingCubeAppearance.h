//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface CEKLightingCubeAppearance : NSObject <NSCopying, NSMutableCopying>
{
    struct CGGradient *_background;
    struct CGColor *_topFill;
    struct CGGradient *_topGlow;
    struct CGGradient *_topMask;
    struct CGColor *_bottomFill;
    struct CGGradient *_bottomInnerGlow;
    struct CGGradient *_bottomOuterGlow;
    struct CGGradient *_bottomMask;
    struct CGColor *_verticalFillColor;
    double _verticalFillFrontIntensity;
    double _verticalFillBackIntensity;
    struct CGGradient *_topOver;
    struct CGColor *_stroke;
}

+ (id)appearanceFrom:(id)arg1 to:(id)arg2 progress:(double)arg3;
@property(readonly, nonatomic) struct CGColor *stroke; // @synthesize stroke=_stroke;
@property(readonly, nonatomic) struct CGGradient *topOver; // @synthesize topOver=_topOver;
@property(readonly, nonatomic) double verticalFillFrontIntensity; // @synthesize verticalFillFrontIntensity=_verticalFillFrontIntensity;
@property(readonly, nonatomic) double verticalFillBackIntensity; // @synthesize verticalFillBackIntensity=_verticalFillBackIntensity;
@property(readonly, nonatomic) struct CGColor *verticalFillColor; // @synthesize verticalFillColor=_verticalFillColor;
@property(readonly, nonatomic) struct CGGradient *bottomMask; // @synthesize bottomMask=_bottomMask;
@property(readonly, nonatomic) struct CGGradient *bottomOuterGlow; // @synthesize bottomOuterGlow=_bottomOuterGlow;
@property(readonly, nonatomic) struct CGGradient *bottomInnerGlow; // @synthesize bottomInnerGlow=_bottomInnerGlow;
@property(readonly, nonatomic) struct CGColor *bottomFill; // @synthesize bottomFill=_bottomFill;
@property(readonly, nonatomic) struct CGGradient *topMask; // @synthesize topMask=_topMask;
@property(readonly, nonatomic) struct CGGradient *topGlow; // @synthesize topGlow=_topGlow;
@property(readonly, nonatomic) struct CGColor *topFill; // @synthesize topFill=_topFill;
@property(readonly, nonatomic) struct CGGradient *background; // @synthesize background=_background;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStroke:(struct CGColor *)arg1;

@end

