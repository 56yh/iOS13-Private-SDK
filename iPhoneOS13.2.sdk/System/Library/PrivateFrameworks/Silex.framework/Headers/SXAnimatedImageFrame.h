//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXAnimatedImageViewCache;

@interface SXAnimatedImageFrame : NSObject
{
    SXAnimatedImageViewCache *_cache;
    struct CGImageSource *_imageSource;
    double _duration;
    unsigned long long _index;
    long long _imageType;
}

@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
- (void)dealloc;
- (id)image;
- (void)captureFrameProperties;
- (id)initWithImageSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2 cache:(id)arg3 type:(long long)arg4;

@end

