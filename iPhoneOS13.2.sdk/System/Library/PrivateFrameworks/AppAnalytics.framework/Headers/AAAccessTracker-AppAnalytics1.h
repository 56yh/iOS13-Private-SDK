//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAnalytics/AAAccessTracker.h>

@interface AAAccessTracker (AppAnalytics1)
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)submitRawEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2;
- (void)submitRawEvent:(id)arg1;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)submitEventType:(Class)arg1 completion:(id /* block */)arg2;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(_Bool)arg2;
- (void)submitEventType:(Class)arg1;
@end

