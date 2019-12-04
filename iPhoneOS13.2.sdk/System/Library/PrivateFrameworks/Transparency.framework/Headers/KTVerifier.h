//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, TransparencyApplication;

@interface KTVerifier : NSObject
{
    NSString *_applicationIdentifier;
    NSXPCConnection *_connection;
    TransparencyApplication *_application;
}

@property(retain) TransparencyApplication *application; // @synthesize application=_application;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)copyApplicationTranscript:(id /* block */)arg1;
- (void)copyDaemonState:(id /* block */)arg1;
- (void)clearPublicKeyStoreState:(id /* block */)arg1;
- (void)clearLogClientConfiguration:(id /* block */)arg1;
- (void)copyLogClientConfiguration:(id /* block */)arg1;
- (void)forceDutyCycle:(id /* block */)arg1;
- (void)copyKeyStoreStateFromDisk:(id /* block */)arg1;
- (void)copyKeyStoreState:(id /* block */)arg1;
- (void)copyDataStoreStatistics:(id /* block */)arg1;
- (void)copyApplicationState:(id /* block */)arg1;
- (void)forceApplicationConfig:(id /* block */)arg1;
- (void)forceApplicationKeysFetch:(id /* block */)arg1;
- (void)forceApplicationKeysDownload:(id /* block */)arg1;
- (void)forceConfigUpdate:(id /* block */)arg1;
- (void)clearState:(id /* block */)arg1;
- (void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(id /* block */)arg3;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(id /* block */)arg6;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(id /* block */)arg5;
- (void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 promiseCompletionBlock:(id /* block */)arg5;
- (void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 promiseCompletionBlock:(id /* block */)arg5;
- (id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 queryRequest:(id)arg4 insertResponse:(id)arg5 error:(id *)arg6;
- (id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 error:(id *)arg5;
- (id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id *)arg6;
- (id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 error:(id *)arg5;
- (void)invokeXPCSynchronousCallWithBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (id)initWithApplication:(id)arg1;

@end

