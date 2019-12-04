//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKAnimatedGIFFrame : NSObject
{
    struct CGImageSource *mSource;
    struct CGImage *mPreloadedImage;
    unsigned long long mIndex;
    double mTime;
}

@property(readonly, nonatomic) double time; // @synthesize time=mTime;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=mIndex;
@property(readonly, nonatomic) struct CGImage *image;
- (id)description;
- (void)dealloc;
- (id)initWithSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2 time:(double)arg3 preloadImage:(_Bool)arg4;

@end

