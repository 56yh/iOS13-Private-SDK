//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDeviceUploadCredentials, MCDeviceUploadOrganization, MCDeviceUploadSubmitDeviceRequestPayload, NSString, NSXPCConnection;

@interface MCTeslaServicer : NSObject
{
    id /* block */ _callback;
    NSXPCConnection *_connection;
    NSString *_nonce;
    MCDeviceUploadCredentials *_userCredentials;
    MCDeviceUploadOrganization *_organization;
    MCDeviceUploadSubmitDeviceRequestPayload *_deviceUploadRequest;
}

@property(retain, nonatomic) MCDeviceUploadSubmitDeviceRequestPayload *deviceUploadRequest; // @synthesize deviceUploadRequest=_deviceUploadRequest;
@property(retain, nonatomic) MCDeviceUploadOrganization *organization; // @synthesize organization=_organization;
@property(retain, nonatomic) MCDeviceUploadCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) id /* block */ callback; // @synthesize callback=_callback;
- (void)submitDeviceUploadRequest:(id)arg1 credentials:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg1 credentials:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)unenrollWithCompletionBlock:(id /* block */)arg1;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)arg1;
- (void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_retrieveProxyObjectAndRunServiceType:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)_callServiceByType:(long long)arg1 onProxy:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_completeServiceWithSuccess:(_Bool)arg1 response:(id)arg2 error:(id)arg3;
- (id)_connectionError;
- (void)dealloc;
- (id)init;

@end

