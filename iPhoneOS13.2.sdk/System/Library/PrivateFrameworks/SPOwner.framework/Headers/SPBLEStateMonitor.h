//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPBLEStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface SPBLEStateMonitor : NSObject
{
    unsigned long long _bleState;
    id <SPBLEStateMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <SPBLEStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bleState; // @synthesize bleState=_bleState;
- (void)_updateBLEStatus;
- (void)notifyDelegate:(unsigned long long)arg1;
- (void)startMonitoring;
- (id)init;

@end

