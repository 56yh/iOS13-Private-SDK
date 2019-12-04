//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOThrottler-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOThrottlerLong : NSObject <_GEOThrottler>
{
    NSString *_keyPath;
    unsigned int _maxRequestCount;
    double _timeWindow;
    unsigned int _currentRequestCount;
    double _lastResetTime;
    double _lastUseTime;
}

+ (_Bool)stateIsExpired:(struct NSDictionary *)arg1;
@property(readonly, nonatomic) double timeWindow; // @synthesize timeWindow=_timeWindow;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (struct NSDictionary *)captureState;
- (void)loadState:(struct NSDictionary *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isExpired;
- (id)userInfoForError;
- (double)expiresAt;
- (unsigned int)maxReqCount;
- (double)timeUntilReset;
- (unsigned long long)remainingEntries;
- (_Bool)addRequestTimestamp;
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(struct NSDictionary *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

