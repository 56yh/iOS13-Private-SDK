//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ENGroup, ENGroupContext, ENGroupID, NSData, _ENGroupInfo;
@protocol ENCypher;

@protocol ENGroupContextDataSource 
- (void)validateCachedGroup:(ENGroup *)arg1 isParentOfGroup:(ENGroup *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)participantsForCypher:(id <ENCypher>)arg1 completion:(void (^)(NSArray *, _Bool))arg2;
- (void)groupFromPublicDataRepresentation:(NSData *)arg1 inContext:(ENGroupContext *)arg2 completion:(void (^)(ENGroup *, NSError *))arg3;
- (void)publicDataRepresentationForGroup:(ENGroup *)arg1 inContext:(ENGroupContext *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 fetchGroupWithID:(ENGroupID *)arg2 completion:(void (^)(ENGroup *, NSError *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 upsertGroupWithInfo:(_ENGroupInfo *)arg2 previousGroup:(ENGroup *)arg3 completion:(void (^)(ENGroup *, NSError *))arg4;
@end

