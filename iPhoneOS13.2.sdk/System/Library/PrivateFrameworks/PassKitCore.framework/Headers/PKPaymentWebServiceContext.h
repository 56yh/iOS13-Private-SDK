//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKWebServiceContext.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSObject, NSString, NSURL, PKPaymentWebServiceConfiguration, PKPaymentWebServiceRegion;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceContext : PKWebServiceContext
{
    struct os_unfair_lock_s _lock_context;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    NSDictionary *_regions;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _cacheLock;
    NSMutableDictionary *_featureSupportedLangaugeCache;
    _Bool _devSigned;
    _Bool _transactionServiceDisabled;
    _Bool _messageServiceDisabled;
    _Bool _ignoreProvisioningEnablementPercentage;
    long long _version;
    NSString *_deviceID;
    NSString *_secureElementID;
    NSString *_pushToken;
    NSString *_nextPushToken;
    NSString *_companionSerialNumber;
    NSDate *_registrationDate;
    NSDate *_configurationDate;
    PKPaymentWebServiceConfiguration *_configuration;
    NSString *_primaryRegionIdentifier;
    long long _consistencyCheckBackoffLevel;
    NSArray *_certificates;
    NSString *_lastUpdatedTag;
}

+ (void)_migrateFrom0To1:(id)arg1;
+ (void)_migrateContext:(id)arg1;
+ (id)contextWithArchive:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy) NSArray *certificates; // @synthesize certificates=_certificates;
@property long long consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(copy) NSString *primaryRegionIdentifier; // @synthesize primaryRegionIdentifier=_primaryRegionIdentifier;
@property _Bool ignoreProvisioningEnablementPercentage; // @synthesize ignoreProvisioningEnablementPercentage=_ignoreProvisioningEnablementPercentage;
@property _Bool messageServiceDisabled; // @synthesize messageServiceDisabled=_messageServiceDisabled;
@property _Bool transactionServiceDisabled; // @synthesize transactionServiceDisabled=_transactionServiceDisabled;
@property(retain) PKPaymentWebServiceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy) NSDate *configurationDate; // @synthesize configurationDate=_configurationDate;
@property(copy) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(copy) NSString *nextPushToken; // @synthesize nextPushToken=_nextPushToken;
@property(copy) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property long long version; // @synthesize version=_version;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)arg1;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)arg1;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg1;
- (double)_contextProvisioningEnablementValue;
- (id)betaPaymentNetworksForRegion:(id)arg1;
- (_Bool)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg1 paymentNetwork:(long long)arg2;
- (_Bool)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1;
- (id)_regionWithPeerPaymentServiceURL;
@property(readonly, nonatomic) _Bool hasPeerPaymentAccount;
@property(readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property(readonly) __weak NSDictionary *TSMURLStringByPushTopic;
- (id)TSMPushTopics;
@property(readonly) __weak PKPaymentWebServiceRegion *primaryRegion;
- (id)regionForIdentifier:(id)arg1;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (void)_localizationUpdated;
- (id)debugDescription;
@property(retain) NSDictionary *regions;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

