//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NURenderPipelineVideoFrame : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    CDStruct_1b6d18a9 _frameTime;
}

@property(readonly) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
@property(readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;
- (id)initWithFrameTime:(CDStruct_1b6d18a9)arg1 pixelBuffer:(struct __CVBuffer *)arg2;

@end

