//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSData, NSMutableArray, NSString, PKProtobufPaymentMerchantSession;

@interface PKProtobufPaymentRequest : PBRequest <NSCopying>
{
    unsigned int _apiType;
    NSData *_applicationData;
    NSData *_billingContact;
    NSString *_countryCode;
    NSString *_currencyCode;
    unsigned int _merchantCapabilities;
    NSString *_merchantIdentifier;
    PKProtobufPaymentMerchantSession *_merchantSession;
    NSString *_originatingURL;
    unsigned int _requiredBillingAddressFields;
    NSMutableArray *_requiredBillingContactFields;
    unsigned int _requiredShippingAddressFields;
    NSMutableArray *_requiredShippingContactFields;
    NSData *_shippingContact;
    NSMutableArray *_shippingMethods;
    NSMutableArray *_summaryItems;
    NSMutableArray *_supportedCountries;
    NSMutableArray *_supportedNetworks;
    NSMutableArray *_thumbnailURLs;
    BOOL _expectsMerchantSession;
    struct {
        unsigned int apiType:1;
        unsigned int merchantCapabilities:1;
        unsigned int requiredBillingAddressFields:1;
        unsigned int requiredShippingAddressFields:1;
        unsigned int expectsMerchantSession:1;
    } _has;
}

+ (Class)supportedCountriesType;
+ (Class)requiredBillingContactFieldsType;
+ (Class)requiredShippingContactFieldsType;
+ (Class)thumbnailURLsType;
+ (Class)shippingMethodsType;
+ (Class)summaryItemsType;
+ (Class)supportedNetworksType;
@property(nonatomic) unsigned int apiType; // @synthesize apiType=_apiType;
@property(retain, nonatomic) NSMutableArray *supportedCountries; // @synthesize supportedCountries=_supportedCountries;
@property(retain, nonatomic) NSMutableArray *requiredBillingContactFields; // @synthesize requiredBillingContactFields=_requiredBillingContactFields;
@property(retain, nonatomic) NSMutableArray *requiredShippingContactFields; // @synthesize requiredShippingContactFields=_requiredShippingContactFields;
@property(nonatomic) BOOL expectsMerchantSession; // @synthesize expectsMerchantSession=_expectsMerchantSession;
@property(retain, nonatomic) NSMutableArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(retain, nonatomic) PKProtobufPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
@property(retain, nonatomic) NSString *originatingURL; // @synthesize originatingURL=_originatingURL;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSMutableArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(retain, nonatomic) NSData *shippingContact; // @synthesize shippingContact=_shippingContact;
@property(retain, nonatomic) NSData *billingContact; // @synthesize billingContact=_billingContact;
@property(nonatomic) unsigned int requiredShippingAddressFields; // @synthesize requiredShippingAddressFields=_requiredShippingAddressFields;
@property(nonatomic) unsigned int requiredBillingAddressFields; // @synthesize requiredBillingAddressFields=_requiredBillingAddressFields;
@property(nonatomic) unsigned int merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(retain, nonatomic) NSMutableArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasApiType;
- (id)supportedCountriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)supportedCountriesCount;
- (void)addSupportedCountries:(id)arg1;
- (void)clearSupportedCountries;
- (id)requiredBillingContactFieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)requiredBillingContactFieldsCount;
- (void)addRequiredBillingContactFields:(id)arg1;
- (void)clearRequiredBillingContactFields;
- (id)requiredShippingContactFieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)requiredShippingContactFieldsCount;
- (void)addRequiredShippingContactFields:(id)arg1;
- (void)clearRequiredShippingContactFields;
@property(nonatomic) BOOL hasExpectsMerchantSession;
- (id)thumbnailURLsAtIndex:(NSUInteger)arg1;
- (NSUInteger)thumbnailURLsCount;
- (void)addThumbnailURLs:(id)arg1;
- (void)clearThumbnailURLs;
@property(readonly, nonatomic) BOOL hasMerchantSession;
@property(readonly, nonatomic) BOOL hasOriginatingURL;
@property(readonly, nonatomic) BOOL hasApplicationData;
- (id)shippingMethodsAtIndex:(NSUInteger)arg1;
- (NSUInteger)shippingMethodsCount;
- (void)addShippingMethods:(id)arg1;
- (void)clearShippingMethods;
- (id)summaryItemsAtIndex:(NSUInteger)arg1;
- (NSUInteger)summaryItemsCount;
- (void)addSummaryItems:(id)arg1;
- (void)clearSummaryItems;
@property(readonly, nonatomic) BOOL hasShippingContact;
@property(readonly, nonatomic) BOOL hasBillingContact;
@property(nonatomic) BOOL hasRequiredShippingAddressFields;
@property(nonatomic) BOOL hasRequiredBillingAddressFields;
@property(nonatomic) BOOL hasMerchantCapabilities;
- (id)supportedNetworksAtIndex:(NSUInteger)arg1;
- (NSUInteger)supportedNetworksCount;
- (void)addSupportedNetworks:(id)arg1;
- (void)clearSupportedNetworks;
@property(readonly, nonatomic) BOOL hasCurrencyCode;
@property(readonly, nonatomic) BOOL hasCountryCode;
@property(readonly, nonatomic) BOOL hasMerchantIdentifier;

@end
