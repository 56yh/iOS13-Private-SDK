//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface _UIActiveTimer : NSObject
{
    CADisplayLink *_displayLink;
    id /* CDUnknownBlockType */ _updateHandler;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isComplete) BOOL complete;
- (void)invalidate;
- (void)_tick:(id)arg1;
- (id)initWithDuration:(double)arg1 updateHandler:(id /* CDUnknownBlockType */)arg2;

@end

