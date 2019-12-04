//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSGestureMonitor : CSEventMonitor
{
    unsigned long long _wakeGestureTimestamp;
    unsigned long long _dismissalTimestamp;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long dismissalTimestamp; // @synthesize dismissalTimestamp=_dismissalTimestamp;
@property(nonatomic) unsigned long long wakeGestureTimestamp; // @synthesize wakeGestureTimestamp=_wakeGestureTimestamp;
- (_Bool)isTriggerHandheld;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;

@end

