//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsTransport/NTPBRecordBase.h>

@interface NTPBRecordBase (FCAssetURLExpiration)
@property(readonly, nonatomic) _Bool hasExpiredAssetURLs;
@property(readonly, nonatomic) _Bool needsAssetURLRefresh;
- (_Bool)fc_isCachedAgeLessThan:(double)arg1;
- (_Bool)fc_isCachedAgeGreaterThan:(double)arg1;
@end

