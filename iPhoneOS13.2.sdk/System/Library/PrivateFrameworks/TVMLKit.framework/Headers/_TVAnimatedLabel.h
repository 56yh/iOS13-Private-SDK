//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVLabel.h>

@class CALayer, NSArray, __TVAnimatedImageView;

@interface _TVAnimatedLabel : _TVLabel
{
    _Bool _crossfading;
    _Bool _marqueeNeeded;
    _Bool _marqueeing;
    _Bool _starting;
    _Bool _stopping;
    CALayer *_maskLayer;
    _Bool _animating;
    _Bool _paused;
    float _scrollRate;
    double _marqueeDelay;
    double _replicationPadding;
    double _maskCapWidth;
    double _crossfadeDuration;
    NSArray *_attributedStrings;
    unsigned long long _currentAttributedStringIndex;
    double _underPosterOutset;
    __TVAnimatedImageView *_currentMarqueeView;
    __TVAnimatedImageView *_nextMarqueeView;
}

@property(readonly, nonatomic) __weak __TVAnimatedImageView *nextMarqueeView; // @synthesize nextMarqueeView=_nextMarqueeView;
@property(readonly, nonatomic) __weak __TVAnimatedImageView *currentMarqueeView; // @synthesize currentMarqueeView=_currentMarqueeView;
@property(nonatomic) double underPosterOutset; // @synthesize underPosterOutset=_underPosterOutset;
@property(readonly, nonatomic) unsigned long long currentAttributedStringIndex; // @synthesize currentAttributedStringIndex=_currentAttributedStringIndex;
@property(copy, nonatomic) NSArray *attributedStrings; // @synthesize attributedStrings=_attributedStrings;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) float scrollRate; // @synthesize scrollRate=_scrollRate;
@property(nonatomic) double maskCapWidth; // @synthesize maskCapWidth=_maskCapWidth;
@property(nonatomic) double replicationPadding; // @synthesize replicationPadding=_replicationPadding;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)setMarqueeRunning:(_Bool)arg1;
- (void)setMarqueeEnabled:(_Bool)arg1;
- (void)_startMarqueeIfNeeded;
- (_Bool)_shouldCycle;
- (void)_prepareNextMarqueeWithDelay:(double)arg1;
- (id)_rasterizedTextWithMarquee:(_Bool)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (_Bool)_isRTL;
- (void)stopAndResetScrollWithDuration:(double)arg1;
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;
- (void)stopAnimating;
- (void)_clearAnimations;
- (void)setNeedsDisplay;
- (void)setHighlighted:(_Bool)arg1;
- (void)_clearAttributedStrings;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

