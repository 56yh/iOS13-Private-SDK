//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAnimationSettings;
@protocol _UIBasicAnimationFactory;

@interface UIStatusBarAnimationParameters : NSObject
{
    double _duration;
    double _delay;
    long long _curve;
    id <_UIBasicAnimationFactory> _animationFactory;
    _Bool _skipFencing;
    double _startTime;
}

+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 frameInterval:(double)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithParameters:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)fencingAnimation;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id <_UIBasicAnimationFactory> animationFactory; // @synthesize animationFactory=_animationFactory;
@property(nonatomic) _Bool skipFencing; // @synthesize skipFencing=_skipFencing;
@property(nonatomic) long long curve; // @synthesize curve=_curve;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) BSAnimationSettings *bsAnimationSettings;
- (_Bool)shouldAnimate;
- (id)initWithEmptyParameters;
- (id)initWithDefaultParameters;
- (id)init;

@end

