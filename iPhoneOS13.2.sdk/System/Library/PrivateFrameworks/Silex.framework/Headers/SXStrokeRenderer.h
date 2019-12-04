//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentView;

@interface SXStrokeRenderer : NSObject
{
    SXComponentView *_componentView;
}

@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
- (id)cropImage:(id)arg1 withRect:(struct CGRect)arg2;
- (double)dashLengthForWidth:(double)arg1 andStyle:(int)arg2;
- (id)imageFromContext:(struct CGContext *)arg1;
- (struct CGContext *)newContextForFrame:(struct CGRect)arg1;
- (void)drawFullDottedBorder:(id)arg1 withFrame:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (id)dottedStrokesForBorder:(id)arg1 withFrame:(struct CGRect)arg2;
- (double)phaseForBorderWidth:(double)arg1 style:(int)arg2 borderSide:(int)arg3 length:(double)arg4 startingGap:(double *)arg5;
- (void)drawDashedSide:(id)arg1 borderSide:(int)arg2 withStyleFrames:(CDStruct_b7523c42)arg3 inContext:(struct CGContext *)arg4;
- (CDStruct_b7523c42)framesForBorder:(id)arg1 contentSize:(struct CGSize)arg2;
- (id)lineForStyle:(id)arg1 andFrame:(struct CGRect)arg2;
- (id)dashedBorders:(id)arg1 forFrame:(struct CGRect)arg2;
- (id)dottedBorders:(id)arg1 forFrame:(struct CGRect)arg2;
- (id)renderBorders:(id)arg1 forFrame:(struct CGRect)arg2;
- (id)initWithComponentView:(id)arg1;

@end

