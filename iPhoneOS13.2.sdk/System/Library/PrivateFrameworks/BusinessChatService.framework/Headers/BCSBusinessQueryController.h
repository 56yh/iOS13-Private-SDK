//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSXPCDaemonProtocol-Protocol.h>

@class BCSBusinessItemController, BCSConfigController, BCSIconController;

@interface BCSBusinessQueryController : NSObject <BCSXPCDaemonProtocol>
{
    BCSBusinessItemController *_bizItemController;
    BCSIconController *_iconController;
    BCSConfigController *_configController;
}

@property(retain, nonatomic) BCSConfigController *configController; // @synthesize configController=_configController;
@property(retain, nonatomic) BCSIconController *iconController; // @synthesize iconController=_iconController;
@property(retain, nonatomic) BCSBusinessItemController *bizItemController; // @synthesize bizItemController=_bizItemController;
- (CDStruct_912cb5d2)_businessItemBucketRangeFromPhoneHash:(long long)arg1 bucketCount:(long long)arg2;
- (long long)_shardStartIndexForPhoneHash:(long long)arg1 shardCount:(long long)arg2;
- (id)_matchingBusinessItemInBusinessItemBucket:(id)arg1 forPhoneHash:(long long)arg2;
- (void)_deleteInMemoryCache;
- (_Bool)_deleteDiskCache;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;
- (id)init;

@end
