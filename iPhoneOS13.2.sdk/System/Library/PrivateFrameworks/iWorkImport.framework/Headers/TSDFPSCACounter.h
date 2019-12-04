//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDFPSCounter.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface TSDFPSCACounter : TSDFPSCounter
{
    unsigned int _CAFrameCount;
    NSTimer *_timer;
    unsigned long long _maxFrameDelta;
    _Bool _shouldRunTimer;
}

@property(nonatomic) _Bool shouldRunTimer; // @synthesize shouldRunTimer=_shouldRunTimer;
- (void)stopLoggingFPS;
- (void)startLoggingFPS;
- (void)p_updateFrameCount;
- (void)reset;
- (id)init;

@end

