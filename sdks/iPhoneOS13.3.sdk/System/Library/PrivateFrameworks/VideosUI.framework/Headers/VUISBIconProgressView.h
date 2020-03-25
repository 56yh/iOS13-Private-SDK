//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIImage, _VUISBIconProgressFractionTransition, _VUISBIconProgressPausedTransition, _VUISBInstallProgressStateTransition;
@protocol VUISBIconProgressViewDelegate;

__attribute__((visibility("hidden")))
@interface VUISBIconProgressView : UIView
{
    _VUISBInstallProgressStateTransition *_activeStateTransition;
    _VUISBIconProgressPausedTransition *_activePausedTransition;
    _VUISBIconProgressFractionTransition *_activeFractionTransition;
    long long _modelState;
    BOOL _modelPaused;
    double _modelFraction;
    CADisplayLink *_displayLink;
    double _lastUpdate;
    UIImage *_maskImage;
    BOOL _canAnimate;
    BOOL _displayingPaused;
    id <VUISBIconProgressViewDelegate> _delegate;
    UIImage *_overlayImage;
    double _backgroundAlpha;
    double _foregroundAlpha;
    double _circleRadiusFraction;
    double _pauseRadiusFraction;
    long long _displayedState;
    double _displayedFraction;
}

+ (id)_pieImageAtFraction:(double)arg1;
+ (id)_pieImagesMemoryPool;
@property(nonatomic) double displayedFraction; // @synthesize displayedFraction=_displayedFraction;
@property(nonatomic) BOOL displayingPaused; // @synthesize displayingPaused=_displayingPaused;
@property(nonatomic) long long displayedState; // @synthesize displayedState=_displayedState;
@property(nonatomic) double pauseRadiusFraction; // @synthesize pauseRadiusFraction=_pauseRadiusFraction;
@property(nonatomic) double circleRadiusFraction; // @synthesize circleRadiusFraction=_circleRadiusFraction;
@property(nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) BOOL canAnimate; // @synthesize canAnimate=_canAnimate;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) id <VUISBIconProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CGRect circleBoundingRect;
- (id)_maskImage;
- (void)_drawPauseUIWithCenter:(CGPoint)arg1;
- (void)_drawIncomingCircleWithCenter:(CGPoint)arg1;
- (void)_drawOutgoingCircleWithCenter:(CGPoint)arg1;
- (void)_drawPieWithCenter:(CGPoint)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)_clearDisplayLink;
- (void)_ensureDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)_clearTransitionIfComplete:(id )arg1;
- (void)_updateFractionTransitionAnimated:(BOOL)arg1;
- (void)_updateStateTransitionAnimated:(BOOL)arg1;
- (void)_updatePausedTransitionAnimated:(BOOL)arg1;
- (void)_updateTransitionsAnimated:(BOOL)arg1;
- (BOOL)_hasActiveTransitions;
- (void)setState:(long long)arg1 paused:(BOOL)arg2 fractionLoaded:(double)arg3 animated:(BOOL)arg4;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
