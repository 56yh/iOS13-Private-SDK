//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, PSYServiceSyncSession;

@protocol PSYServiceSyncSessionDelegate <NSObject>
- (void)syncSession:(PSYServiceSyncSession *)arg1 reportProgress:(double)arg2;
- (void)syncSession:(PSYServiceSyncSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)syncSessionDidComplete:(PSYServiceSyncSession *)arg1;
- (void)syncSessionDidCompleteSending:(PSYServiceSyncSession *)arg1;
@end

