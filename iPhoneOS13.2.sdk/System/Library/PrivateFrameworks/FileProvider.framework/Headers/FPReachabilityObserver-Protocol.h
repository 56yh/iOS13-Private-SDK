//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FPReachabilityMonitor;

@protocol FPReachabilityObserver 
- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityStatusTo:(_Bool)arg2;

@optional
- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;
@end

