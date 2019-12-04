//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UITransitionState.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UIView, _UIPageCurl;

__attribute__((visibility("hidden")))
@interface _UIPageCurlState : _UITransitionState <CAAnimationDelegate>
{
    _UIPageCurl *_pageCurl;
    long long _curlType;
    struct CGPoint _initialLocation;
    struct CGPoint _referenceLocation;
    UIView *_frontPageView;
    UIView *_backPageView;
    UIView *_frontView;
    UIView *_backView;
    long long _completionCount;
    long long _curlState;
    _Bool _finished;
    _Bool _willComplete;
    id /* block */ _finally;
}

@property(readonly, nonatomic) long long curlState; // @synthesize curlState=_curlState;
@property(readonly, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(readonly, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(readonly, nonatomic) struct CGPoint referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(readonly, nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(readonly, nonatomic) long long curlType; // @synthesize curlType=_curlType;
@property(readonly, nonatomic) _UIPageCurl *pageCurl; // @synthesize pageCurl=_pageCurl;
- (_Bool)isCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (long long)_effectiveTransitionDirection;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)cleanup;
- (void)cleanupWithFinishedState:(_Bool)arg1 completedState:(_Bool)arg2;
- (void)finally;
- (void)incrementCompletionCount;
@property(readonly, nonatomic, getter=hasPendingAnimations) _Bool pendingAnimations;
- (void)setCurlState:(long long)arg1 willComplete:(_Bool)arg2;
- (void)addBackPageContent;
- (void)addFrontPageContent;
@property(readonly, nonatomic) UIView *backPageView;
@property(readonly, nonatomic) UIView *frontPageView;
- (struct CGRect)_pageViewFrame;
- (void)invalidatePageCurl;
- (void)dealloc;
- (id)initWithPageCurl:(id)arg1 andCurlType:(long long)arg2 fromLocation:(struct CGPoint)arg3 withReferenceLocation:(struct CGPoint)arg4 inDirection:(long long)arg5 withView:(id)arg6 revealingView:(id)arg7 completion:(id /* block */)arg8 finally:(id /* block */)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

