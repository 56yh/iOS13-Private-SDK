//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BLTPBBulletin, BLTPBBulletinSummary, BLTPBFullBulletinList, NSDate, NSString;

@protocol BLTGizmoClient 
- (void)updateBulletinList:(BLTPBFullBulletinList *)arg1;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)addBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)cancelBulletinWithPublisherMatchID:(NSString *)arg1 universalSectionID:(NSString *)arg2 feed:(unsigned long long)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5;
- (void)addBulletin:(BLTPBBulletin *)arg1 playLightsAndSirens:(_Bool)arg2 updateType:(unsigned long long)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5;
@end

