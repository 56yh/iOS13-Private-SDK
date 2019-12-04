//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SignpostFrameLatencyInterval, SignpostHIDLatencyInterval, SignpostRenderServerRenderInterval;

@interface SignpostFrameAccumulatedState : NSObject
{
    unsigned int _frameSeed;
    NSMutableDictionary *_contextIDtoContextInfoDict;
    SignpostRenderServerRenderInterval *_renderInterval;
    SignpostHIDLatencyInterval *_hidLatency;
    SignpostFrameLatencyInterval *_frameLatency;
}

@property(retain, nonatomic) SignpostFrameLatencyInterval *frameLatency; // @synthesize frameLatency=_frameLatency;
@property(retain, nonatomic) SignpostHIDLatencyInterval *hidLatency; // @synthesize hidLatency=_hidLatency;
@property(retain, nonatomic) SignpostRenderServerRenderInterval *renderInterval; // @synthesize renderInterval=_renderInterval;
@property(retain, nonatomic) NSMutableDictionary *contextIDtoContextInfoDict; // @synthesize contextIDtoContextInfoDict=_contextIDtoContextInfoDict;
@property(readonly, nonatomic) unsigned int frameSeed; // @synthesize frameSeed=_frameSeed;
- (id)initWithFrameSeed:(unsigned int)arg1;

@end

