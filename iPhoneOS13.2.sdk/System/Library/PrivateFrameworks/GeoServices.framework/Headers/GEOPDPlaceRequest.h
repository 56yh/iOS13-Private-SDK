//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEOPDPlaceRequestParameters, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDPlaceRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    NSData *_handleData;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _requestType;
    _Bool _needLatency;
    _Bool _suppressResultsRequiringAttribution;
    struct {
        unsigned int has_requestType:1;
        unsigned int has_needLatency:1;
        unsigned int has_suppressResultsRequiringAttribution:1;
        unsigned int read_unknownFields:1;
        unsigned int read_analyticMetadata:1;
        unsigned int read_clientMetadata:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_displayRegion:1;
        unsigned int read_handleData:1;
        unsigned int read_placeRequestParameters:1;
        unsigned int read_requestedComponents:1;
        unsigned int read_spokenLanguages:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_analyticMetadata:1;
        unsigned int wrote_clientMetadata:1;
        unsigned int wrote_displayLanguages:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_handleData:1;
        unsigned int wrote_placeRequestParameters:1;
        unsigned int wrote_requestedComponents:1;
        unsigned int wrote_spokenLanguages:1;
        unsigned int wrote_requestType:1;
        unsigned int wrote_needLatency:1;
        unsigned int wrote_suppressResultsRequiringAttribution:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;
+ (Class)displayLanguageType;
+ (id)createRequestedComponentsForReason:(unsigned long long)arg1 traits:(id)arg2 count:(unsigned int)arg3;
+ (id)componentInfoWithType:(int)arg1 count:(unsigned int)arg2 traits:(id)arg3;
@property(retain, nonatomic) NSData *handleData;
@property(readonly, nonatomic) _Bool hasHandleData;
- (void)_readHandleData;
@property(nonatomic) _Bool hasNeedLatency;
@property(nonatomic) _Bool needLatency;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (void)_readDisplayRegion;
@property(retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters;
@property(readonly, nonatomic) _Bool hasPlaceRequestParameters;
- (void)_readPlaceRequestParameters;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType;
@property(nonatomic) _Bool hasSuppressResultsRequiringAttribution;
@property(nonatomic) _Bool suppressResultsRequiringAttribution;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestedComponentsCount;
- (void)_addNoFlagsRequestedComponent:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)clearRequestedComponents;
@property(retain, nonatomic) NSMutableArray *requestedComponents;
- (void)_readRequestedComponents;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenLanguagesCount;
- (void)_addNoFlagsSpokenLanguage:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (void)clearSpokenLanguages;
@property(retain, nonatomic) NSMutableArray *spokenLanguages;
- (void)_readSpokenLanguages;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (void)_addNoFlagsDisplayLanguage:(id)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (void)clearDisplayLanguages;
@property(retain, nonatomic) NSMutableArray *displayLanguages;
- (void)_readDisplayLanguages;
@property(retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property(readonly, nonatomic) _Bool hasClientMetadata;
- (void)_readClientMetadata;
@property(retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property(readonly, nonatomic) _Bool hasAnalyticMetadata;
- (void)_readAnalyticMetadata;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)cacheKey;
- (id)pdSpatialEventLookupParametersForParameters:(id)arg1;
- (id)pdSpatialEventLookupParametersArrayForParameters:(id)arg1;
- (id)pdSpatialPlaceLookupParametersForParameters:(id)arg1;
- (id)pdSpatialPlaceLookupParametersArrayForParameters:(id)arg1;
- (int)resultProviderID;
- (_Bool)hasResultProviderID;
- (_Bool)shouldConsiderCaching;
- (_Bool)isPlaceRefinementRequest;
- (_Bool)isMerchantRequest;
- (_Bool)isCanonicalLocationSearchRequest;
- (_Bool)isForwardGeocoderRequest;
- (id)initForDatasetCheckWithTraits:(id)arg1;
- (_Bool)isBrandLookupRequest;
- (id)initWithSpatialEventLookupParameters:(id)arg1 traits:(id)arg2;
- (id)initWithSpatialPlaceLookupParameters:(id)arg1 traits:(id)arg2;
- (id)initForGeoIpLookupWithIpAddress:(id)arg1 traits:(id)arg2;
- (id)initForWifiFingerprintLookupWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 entryTime:(unsigned long long)arg4 exitTime:(unsigned long long)arg5 traits:(id)arg6;
- (id)initForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)initForNearestTransitStationWithLine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initForDFRCategoryListWithTraits:(id)arg1;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (int)geoUserPreferredTransportType;
- (id)initForCategoryListWithTraits:(id)arg1 isFromNoQueryState:(_Bool)arg2;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 filters:(id)arg4 retainedSearch:(id)arg5 tappedQuerySuggestion:(id)arg6 error:(id *)arg7;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 filters:(id)arg7 suppressResultsRequiringAttribution:(_Bool)arg8 traits:(id)arg9 error:(id *)arg10;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithTripIds:(id)arg1 traits:(id)arg2;
- (id)initWithTransitDeparturesAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithTransitTripDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithUpdatedTransitScheduleDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithTransitScheduleAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)_initWithTransitScheduleRequestForStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithCollectionIdentifier:(id)arg1 traits:(id)arg2;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithInitialRequestData:(id)arg1 traits:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 floorOrdinal:(int)arg2 includeEntryPoints:(_Bool)arg3 preserveOriginalLocation:(_Bool)arg4 traits:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(_Bool)arg2 preserveOriginalLocation:(_Bool)arg3 traits:(id)arg4;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 fuzzyMatched:(id)arg31 traits:(id)arg32;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)_initWithTraits:(id)arg1 includeHistoricalLocations:(_Bool)arg2;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;
- (void)addRequestedComponentsForReason:(unsigned long long)arg1 traits:(id)arg2 count:(unsigned int)arg3;
- (void)addRequestedComponents:(id)arg1;

@end

