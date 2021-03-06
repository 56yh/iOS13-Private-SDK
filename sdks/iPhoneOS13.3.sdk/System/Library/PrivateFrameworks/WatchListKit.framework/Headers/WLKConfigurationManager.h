//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionConfiguration, WLKServerConfigurationResponse;
@protocol OS_dispatch_queue;

@interface WLKConfigurationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    WLKServerConfigurationResponse *_config;
    NSURLSessionConfiguration *_sharedCacheSessionConfiguration;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)_stringForCachePolicy:(NSUInteger)arg1;
- (void)_handleLibraryDidChangeNotification:(id)arg1;
- (void)_invalidateNetworkCache;
- (void)_invalidateCache;
- (void)_setConfig:(id)arg1;
- (id)_config;
- (void)_setUtsk:(id)arg1;
- (id)_utsk;
- (id)_configurationWithOptions:(long long)arg1 cachePolicy:(NSUInteger)arg2 queryParameters:(id)arg3;
- (id)_configuration;
- (void)fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(NSUInteger)arg2 queryParameters:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)fetchConfigurationWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)init;
- (id)_init;

@end

