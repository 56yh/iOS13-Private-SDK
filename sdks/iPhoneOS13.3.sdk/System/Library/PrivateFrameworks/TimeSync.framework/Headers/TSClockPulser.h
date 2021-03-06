//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/TSClockClient-Protocol.h>

@class TSClock;

@interface TSClockPulser : NSObject <TSClockClient>
{
    TSClock *_pulseClock;
    BOOL _hasLastTimestamp;
    BOOL _holdoverMode;
    int _lastLockState;
    BOOL _threadIsRunning;
    BOOL _threadShouldBeRunning;
    unsigned int _startSemaphore;
    unsigned int _stopSemaphore;
    BOOL _useRealtimePriority;
    int _pulseOffset;
    id /* CDUnknownBlockType */ _pulseHandler;
    NSUInteger _pulsePeriod;
}

@property(nonatomic) int pulseOffset; // @synthesize pulseOffset=_pulseOffset;
@property(nonatomic) NSUInteger pulsePeriod; // @synthesize pulsePeriod=_pulsePeriod;
@property(nonatomic) BOOL useRealtimePriority; // @synthesize useRealtimePriority=_useRealtimePriority;
@property(copy, nonatomic) id /* CDUnknownBlockType */ pulseHandler; // @synthesize pulseHandler=_pulseHandler;
- (void)dealloc;
- (void)pulseThread;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (void)didBeginClockGrandmasterChangeForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didChangeClockMasterForClock:(id)arg1;
- (BOOL)stopPulsing;
- (BOOL)startPulsing;
- (id)initWithPulseClock:(id)arg1;
- (id)init;

@end

