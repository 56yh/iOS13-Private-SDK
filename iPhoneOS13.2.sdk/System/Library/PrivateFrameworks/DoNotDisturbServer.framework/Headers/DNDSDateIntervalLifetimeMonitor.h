//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class PCPersistentTimer;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor
{
    PCPersistentTimer *_lifetimeTimer;
}

+ (Class)lifetimeClass;
- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;

@end

