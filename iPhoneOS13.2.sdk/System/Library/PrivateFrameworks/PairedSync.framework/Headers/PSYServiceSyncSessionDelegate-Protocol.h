//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSError, PSYServiceSyncSession;

@protocol PSYServiceSyncSessionDelegate 
- (void)syncSession:(PSYServiceSyncSession *)arg1 reportProgress:(double)arg2;
- (void)syncSession:(PSYServiceSyncSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)syncSessionDidComplete:(PSYServiceSyncSession *)arg1;
- (void)syncSessionDidCompleteSending:(PSYServiceSyncSession *)arg1;
@end

