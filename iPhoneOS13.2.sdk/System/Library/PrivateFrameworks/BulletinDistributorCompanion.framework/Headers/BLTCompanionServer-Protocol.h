//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BLTActionInfo, NSDate, NSString;

@protocol BLTCompanionServer 
- (void)willSendLightsAndSirensWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 inPhoneSection:(NSString *)arg3 systemApp:(_Bool)arg4 completion:(void (^)(_Bool, unsigned long long))arg5;
- (_Bool)shouldSuppressLightsAndSirensNow;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(NSString *)arg2 inPhoneSection:(NSString *)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5 replyToken:(NSString *)arg6;
- (void)handleAction:(BLTActionInfo *)arg1;
@end

