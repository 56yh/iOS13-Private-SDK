//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSDate, NSMutableArray, TVPExternalImageLoader, UIImage;
@protocol TVPMediaItem;

__attribute__((visibility("hidden")))
@interface TVPExternalImagePlayer : NSObject
{
    double _rate;
    NSDate *_playbackDate;
    UIImage *_currentImage;
    id /* block */ _elapsedTimeUpdateBlock;
    id /* block */ _imageUpdateBlock;
    CADisplayLink *_displayLink;
    double _previousTimestamp;
    NSDate *_referenceDate;
    TVPExternalImageLoader *_imageLoader;
    NSObject<TVPMediaItem> *_mediaItem;
    NSMutableArray *_imageInfosBeingLoaded;
    double _currentImageTime;
    double _imageInterval;
    CDStruct_1b6d18a9 _elapsedTime;
    CDStruct_1b6d18a9 _referenceTime;
}

@property(nonatomic) double imageInterval; // @synthesize imageInterval=_imageInterval;
@property(nonatomic) double currentImageTime; // @synthesize currentImageTime=_currentImageTime;
@property(retain, nonatomic) NSMutableArray *imageInfosBeingLoaded; // @synthesize imageInfosBeingLoaded=_imageInfosBeingLoaded;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) TVPExternalImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(nonatomic) CDStruct_1b6d18a9 referenceTime; // @synthesize referenceTime=_referenceTime;
@property(nonatomic) double previousTimestamp; // @synthesize previousTimestamp=_previousTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) id /* block */ imageUpdateBlock; // @synthesize imageUpdateBlock=_imageUpdateBlock;
@property(copy, nonatomic) id /* block */ elapsedTimeUpdateBlock; // @synthesize elapsedTimeUpdateBlock=_elapsedTimeUpdateBlock;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(retain, nonatomic) NSDate *playbackDate; // @synthesize playbackDate=_playbackDate;
@property(nonatomic) CDStruct_1b6d18a9 elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (double)_timeAfterRemovingInterstitials:(double)arg1;
- (void)_updateImageIntervalWithRate:(double)arg1;
- (void)_cancelStaleImageLoadsForTime:(double)arg1;
- (void)_cancelAllImageLoads;
- (void)_loadImagesIfNecessary;
- (void)_displayLinkTimerFired:(id)arg1;
- (void)invalidate;
- (id)initWithMediaItem:(id)arg1 referenceTime:(CDStruct_1b6d18a9)arg2 forDate:(id)arg3;

@end

