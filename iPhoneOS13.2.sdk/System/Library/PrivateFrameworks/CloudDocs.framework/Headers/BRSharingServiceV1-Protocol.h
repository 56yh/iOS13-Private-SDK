//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CKShare, NSProgress;

@protocol BRSharingServiceV1
- (NSProgress *)unshareWithCompletion:(void (^)(NSError *))arg1;
- (NSProgress *)saveShare:(CKShare *)arg1 completion:(void (^)(CKShare *, NSError *))arg2;
- (NSProgress *)fetchShareURLWithCompletion:(void (^)(NSURL *, NSError *))arg1;
- (NSProgress *)fetchShareWithCompletion:(void (^)(CKShare *, NSError *))arg1;
- (void)startPreparingForShareWhenForcing:(_Bool)arg1;
- (NSProgress *)fetchParticipantListAndPublicPermission:(void (^)(NSArray *, long long, NSError *))arg1;
- (NSProgress *)preflightCheckIfCurrentlyShareableWithCompletion:(void (^)(_Bool, id <BRFileProviderItem>, NSArray<BRFileProviderItem> *, NSArray<BRFileProviderItem> *, NSError *))arg1;
- (void)fetchSharingInfo:(void (^)(_Bool, id <BRFileProviderItem>, NSError *))arg1;
@end
