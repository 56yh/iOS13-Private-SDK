//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSDBrushStrokeLayoutOptions : NSObject
{
    NSArray *_patternOffsetsBySubpath;
    NSArray *_transparencyLayersBySubpath;
    double _strokeEnd;
}

@property(nonatomic) double strokeEnd; // @synthesize strokeEnd=_strokeEnd;
@property(copy, nonatomic) NSArray *transparencyLayersBySubpath; // @synthesize transparencyLayersBySubpath=_transparencyLayersBySubpath;
@property(copy, nonatomic) NSArray *patternOffsetsBySubpath; // @synthesize patternOffsetsBySubpath=_patternOffsetsBySubpath;
- (id)init;

@end

