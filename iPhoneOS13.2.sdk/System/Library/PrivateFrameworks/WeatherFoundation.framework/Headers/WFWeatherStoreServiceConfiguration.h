//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString, NSURL, NSURLSession, NWPathEvaluator, WFSettingsManager;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSURLSessionTaskDelegate, NSCopying>
{
    struct os_unfair_lock_s _serviceConnectivityEvaluationURLLock;
    struct os_unfair_lock_s _serviceConnectivityEvaluatorLock;
    NWPathEvaluator *_serviceConnectivityEvaluator;
    NSURL *_serviceConnectivityEvaluationURL;
    NSURLSession *_session;
    NSURL *_cacheURL;
    Class _cacheClass;
    WFSettingsManager *_settingsManager;
}

+ (id)generateUserAgent;
+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1;
@property(retain, nonatomic) WFSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
@property(retain, nonatomic) Class cacheClass; // @synthesize cacheClass=_cacheClass;
@property(nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluatorLock; // @synthesize serviceConnectivityEvaluatorLock=_serviceConnectivityEvaluatorLock;
@property(nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluationURLLock; // @synthesize serviceConnectivityEvaluationURLLock=_serviceConnectivityEvaluationURLLock;
@property(copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NWPathEvaluator *serviceConnectivityEvaluator; // @synthesize serviceConnectivityEvaluator=_serviceConnectivityEvaluator;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 apiVersion:(id)arg6 error:(id *)arg7;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 apiVersion:(id)arg4 error:(id *)arg5;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) _Bool isValid;
- (_Bool)isServiceAvailableSync;
@property(readonly, nonatomic) _Bool isServiceAvailable;
@property(retain, nonatomic) NSURL *serviceConnectivityEvaluationURL; // @synthesize serviceConnectivityEvaluationURL=_serviceConnectivityEvaluationURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)apiConfigurationForAPIVersion:(id)arg1;
- (id)apiConfiguration;
@property(readonly, nonatomic) NSString *apiVersion;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

