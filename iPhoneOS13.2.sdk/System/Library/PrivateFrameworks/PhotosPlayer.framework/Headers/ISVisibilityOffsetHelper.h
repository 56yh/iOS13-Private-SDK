//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/ISVisibilityOffsetComputer-Protocol.h>

@class UIScrollView;

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer>
{
    long long _direction;
    double _maximumDistance;
    double _maximumDistanceLag;
    UIScrollView *__scrollView;
    struct CGPoint __targetContentOffset;
}

@property(nonatomic, setter=_setTargetContentOffset:) struct CGPoint _targetContentOffset; // @synthesize _targetContentOffset=__targetContentOffset;
@property(retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic) double maximumDistanceLag; // @synthesize maximumDistanceLag=_maximumDistanceLag;
@property(nonatomic) double maximumDistance; // @synthesize maximumDistance=_maximumDistance;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void)getVisibility:(_Bool *)arg1 offset:(double *)arg2 targetVisibilityOffset:(double *)arg3 forView:(struct NSObject *)arg4;
- (struct CGRect)boundsForView:(struct NSObject *)arg1 inScrollView:(struct NSObject *)arg2;
- (struct CGRect)visibleRectForScrollView:(struct NSObject *)arg1;
- (struct ISVisibilityRange)_visibilityRangeForRect:(struct CGRect)arg1;
- (void)_updateDirectionIfNeeded;
- (void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(struct CGPoint)arg2 usingBlock:(id /* block */)arg3;

@end

