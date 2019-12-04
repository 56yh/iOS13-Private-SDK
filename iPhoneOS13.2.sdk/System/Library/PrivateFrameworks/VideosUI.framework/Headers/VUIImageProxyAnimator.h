//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIImageProxyAnimator : NSObject
{
    _Bool _animating;
    _Bool _cachingEnabled;
    NSArray *_imageProxies;
    unsigned long long _animationOptions;
    double _animationDuration;
    double _transitionInterval;
    unsigned long long _displayImageIndex;
    unsigned long long _indexOfFetchedImage;
    _TVImageView *_imageView;
    NSTimer *_transitionTimer;
}

@property(nonatomic, getter=isCachingEnabled) _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) __weak NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long indexOfFetchedImage; // @synthesize indexOfFetchedImage=_indexOfFetchedImage;
@property(nonatomic) unsigned long long displayImageIndex; // @synthesize displayImageIndex=_displayImageIndex;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double transitionInterval; // @synthesize transitionInterval=_transitionInterval;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void)_displayIntervalTimerFired:(id)arg1;
- (void)_fetchNext;
- (void)_updateImageWithIndex:(unsigned long long)arg1;
- (void)loadImageProxy:(id)arg1 withWeakObject:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setImage:(id)arg1 animated:(_Bool)arg2;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithImageView:(id)arg1 andProxies:(id)arg2;
- (id)init;

@end

