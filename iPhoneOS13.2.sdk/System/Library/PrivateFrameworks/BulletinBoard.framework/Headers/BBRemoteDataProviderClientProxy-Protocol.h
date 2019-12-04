//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BBActionResponse, BBBulletinRequestParameters, BBSectionInfo, BBThumbnailSizeConstraints, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@protocol BBRemoteDataProviderClientProxy 
- (void)deliverMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (void)getAspectRatioForAttachmentUUID:(NSUUID *)arg1 recordID:(NSString *)arg2 isPrimary:(_Bool)arg3 withHandler:(void (^)(float, NSError *))arg4;
- (void)getPNGDataForAttachmentUUID:(NSUUID *)arg1 recordID:(NSString *)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(BBThumbnailSizeConstraints *)arg4 withHandler:(void (^)(NSData *, NSError *))arg5;
- (void)getDataForAttachmentUUID:(NSUUID *)arg1 recordID:(NSString *)arg2 isPrimary:(_Bool)arg3 withHandler:(void (^)(NSData *, NSError *))arg4;
- (void)deliverBulletinActionResponse:(BBActionResponse *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 lastClearedInfo:(BBSectionInfo *)arg3 completion:(void (^)(id, NSError *))arg4;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(BBSectionInfo *)arg1 completion:(void (^)(id, NSError *))arg2;
- (void)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2 completion:(void (^)(id, NSError *))arg3;
- (void)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)dataProviderDidLoad;
@end

