//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/ENStoreClient.h>

@class EDAMUserStoreClient, NSString;

@interface ENUserStoreClient : ENStoreClient
{
    EDAMUserStoreClient *_client;
    NSString *_authenticationToken;
}

+ (id)userStoreClientWithUrl:(id)arg1 authenticationToken:(id)arg2;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) EDAMUserStoreClient *client; // @synthesize client=_client;
// - (void).cxx_destruct;
- (void)revokeLongSessionWithAuthenticationToken:(id)arg1 success:(id /* CDUnknownBlockType */)arg2 failure:(id /* CDUnknownBlockType */)arg3;
- (void)authenticateToBusinessWithSuccess:(id /* CDUnknownBlockType */)arg1 failure:(id /* CDUnknownBlockType */)arg2;
- (void)getNoteStoreUrlWithSuccess:(id /* CDUnknownBlockType */)arg1 failure:(id /* CDUnknownBlockType */)arg2;
- (void)getPremiumInfoWithSuccess:(id /* CDUnknownBlockType */)arg1 failure:(id /* CDUnknownBlockType */)arg2;
- (void)getPublicUserInfoWithUsername:(id)arg1 success:(id /* CDUnknownBlockType */)arg2 failure:(id /* CDUnknownBlockType */)arg3;
- (void)getUserWithSuccess:(id /* CDUnknownBlockType */)arg1 failure:(id /* CDUnknownBlockType */)arg2;
- (void)getBootstrapInfoWithLocale:(id)arg1 success:(id /* CDUnknownBlockType */)arg2 failure:(id /* CDUnknownBlockType */)arg3;
- (void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 success:(id /* CDUnknownBlockType */)arg4 failure:(id /* CDUnknownBlockType */)arg5;
- (void)revokeLongSessionWithAuthenticationToken:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)authenticateToBusinessWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchNoteStoreURLWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchPremiumInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchPublicUserInfoWithUsername:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchUserWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchBootstrapInfoWithLocale:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)authenticateToBusiness;
- (id)initWithUserStoreUrl:(id)arg1 authenticationToken:(id)arg2;

@end

