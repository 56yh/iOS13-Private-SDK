//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JITAppKit/TKAdaptiveResourceObject.h>

@class NSString, NSURL, TKAdaptiveImage_Trait, UIColor, UIImage;
@protocol TKNetworkTask;

@interface TKAdaptiveImage : TKAdaptiveResourceObject
{
    _Bool _supportsTraits;
    TKAdaptiveImage_Trait *_currentTrait;
    id <TKNetworkTask> _task;
    _Bool _loading;
    NSURL *_url;
    NSString *_priority;
    NSString *_service;
    UIColor *_backgroundColor;
    double _quality;
    UIImage *_image;
    NSURL *_currentURL;
    unsigned long long _state;
}

+ (id)zeroTrait;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)url:(id)arg1 withTrait:(id)arg2;
- (id)imageTraitForMetrics;
- (id)traits;
- (void)adaptiveMetricsDidChange;
- (void)tmlObjectCompleted;
- (void)didLoadImage:(id)arg1 state:(unsigned long long)arg2;
- (void)loadWithTrait:(id)arg1;
- (void)stop;
- (void)start;
- (void)tmlDispose;
- (void)dealloc;
- (id)init;

@end

