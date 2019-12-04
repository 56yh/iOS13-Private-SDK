//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioSessionMonitor : CSEventMonitor
{
    unsigned long long _audioSessionState;
}

+ (id)sharedInstance;
@property(nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState; // @synthesize audioSessionState=_audioSessionState;
- (void)notifyAduioSessionStateChange:(unsigned long long)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

