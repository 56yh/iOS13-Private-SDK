//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSDFreehandDrawingInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingAnimationPlaybackTiming : NSObject
{
    TSDFreehandDrawingInfo *_freehandDrawingInfo;
    NSArray *_fillShapes;
    NSArray *_strokeShapes;
}

- (id)p_fillTimingCurve;
- (double)visibilityOfChild:(id)arg1 atPercent:(double)arg2;
- (_Bool)shouldParameterizeStrokesWithDuration:(double)arg1 framesPerSecond:(double)arg2;
- (id)initWithFreehandDrawingInfo:(id)arg1;

@end

