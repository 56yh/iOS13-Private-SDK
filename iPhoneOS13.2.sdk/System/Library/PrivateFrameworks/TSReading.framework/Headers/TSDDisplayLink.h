//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface TSDDisplayLink : NSObject
{
    CADisplayLink *_displayLink;
    id /* block */ _tickBlock;
    id /* block */ _completionBlock;
    double _startTime;
    double _lastTime;
}

@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* block */ tickBlock; // @synthesize tickBlock=_tickBlock;
- (void)p_handleDisplayLink:(id)arg1;
- (void)teardown;
- (void)start;
- (void)dealloc;

@end

