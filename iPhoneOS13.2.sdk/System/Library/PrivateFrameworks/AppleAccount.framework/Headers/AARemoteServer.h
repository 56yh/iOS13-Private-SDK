//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AARemoteServerConfigurationCache, AAURLSession;
@protocol OS_dispatch_queue;

@interface AARemoteServer : NSObject
{
    struct os_unfair_lock_s _configurationLock;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AARemoteServerConfigurationCache *_configurationCache;
    AAURLSession *_session;
    AAURLSession *_signingSession;
}

+ (id)sharedServer;
@property(retain, nonatomic) AAURLSession *signingSession; // @synthesize signingSession=_signingSession;
@property(retain, nonatomic) AAURLSession *session; // @synthesize session=_session;
- (void)_fetchConfigurationAndResponseWithCompletion:(id /* block */)arg1;
- (id)_configurationLock_configurationCacheInvalidatingIfNecessary;
- (id)_configurationCacheInvalidatingIfNecessary;
- (void)_setConfigurationCache:(id)arg1;
- (void)_configurationAndResponseWithCompletion:(id /* block */)arg1;
- (void)configurationWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)_newURLRequestWithURLString:(id)arg1;
- (void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(_Bool)arg3 completion:(id /* block */)arg4;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)_redactedBodyStringWithPropertyList:(id)arg1;
- (id)_bodyDictionaryWithProtocolVersion:(id)arg1;
- (void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (void)registerAccount:(id)arg1 withHSA:(_Bool)arg2 usingCookieHeaders:(id)arg3 completion:(id /* block */)arg4;
- (void)registerAccount:(id)arg1 withHSA:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)authenticateAccount:(id)arg1 completion:(id /* block */)arg2;

@end

