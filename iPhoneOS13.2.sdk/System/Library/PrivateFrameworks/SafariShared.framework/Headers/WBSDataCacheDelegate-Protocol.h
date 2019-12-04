//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSError, NSString;
@protocol WBSDataCache;

@protocol WBSDataCacheDelegate 

@optional
- (void)dataCacheDidReset:(id <WBSDataCache>)arg1;
- (void)dataCache:(id <WBSDataCache>)arg1 didFailToLoadEntryForKeyString:(NSString *)arg2 error:(NSError *)arg3;
- (void)dataCache:(id <WBSDataCache>)arg1 didLoadEntry:(NSData *)arg2 forKeyString:(NSString *)arg3;
- (void)dataCacheDidSetUp:(id <WBSDataCache>)arg1;
@end

