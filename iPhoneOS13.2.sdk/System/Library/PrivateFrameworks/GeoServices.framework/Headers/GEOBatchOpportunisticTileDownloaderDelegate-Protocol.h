//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class GEOBatchOpportunisticTileDownloader, GEOTileData, NSDictionary, NSError, NSString;

@protocol GEOBatchOpportunisticTileDownloaderDelegate 
- (void)batchOpportunisticTileDownloaderDidFinish:(GEOBatchOpportunisticTileDownloader *)arg1;
- (void)batchOpportunisticTileDownloader:(GEOBatchOpportunisticTileDownloader *)arg1 failedToLoadKey:(struct _GEOTileKey)arg2 error:(NSError *)arg3;
- (void)batchOpportunisticTileDownloader:(GEOBatchOpportunisticTileDownloader *)arg1 receivedData:(GEOTileData *)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(NSString *)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(NSDictionary *)arg7;
@end

