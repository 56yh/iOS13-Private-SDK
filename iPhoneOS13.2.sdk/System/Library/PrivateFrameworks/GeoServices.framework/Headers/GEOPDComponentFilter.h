//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDAddressFilter, GEOPDAddressObjectFilter, GEOPDAmenitiesFilter, GEOPDAnnotatedItemListFilter, GEOPDAssociatedAppFilter, GEOPDBoundsFilter, GEOPDBrowseCategoriesFilter, GEOPDBusinessClaimFilter, GEOPDBusinessHoursFilter, GEOPDCaptionedPhotoFilter, GEOPDContainedPlaceFilter, GEOPDETAFilter, GEOPDEntityFilter, GEOPDExternalActionFilter, GEOPDFactoidFilter, GEOPDFlyoverFilter, GEOPDGroundViewLabelFilter, GEOPDHoursFilter, GEOPDIconFilter, GEOPDLinkedServiceFilter, GEOPDLocationEventFilter, GEOPDMessageLinkFilter, GEOPDOfflineAreaFilter, GEOPDOfflineIdentifierFilter, GEOPDOfflineQuadNodesFilter, GEOPDOfflineSizeFilter, GEOPDOfflineUpdateManifestFilter, GEOPDPhotoFilter, GEOPDPlaceCollectionFilter, GEOPDPlaceInfoFilter, GEOPDPlacecardLayoutConfigurationFilter, GEOPDPlacecardURLFilter, GEOPDPoiEventFilter, GEOPDPriceDescriptionFilter, GEOPDPrototypeContainerFilter, GEOPDQuickLinkFilter, GEOPDRapFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDRelatedPlaceFilter, GEOPDRestaurantReservationLinkFilter, GEOPDResultSnippetFilter, GEOPDReviewFilter, GEOPDRoadAccessInfoFilter, GEOPDSimpleRestaurantMenuTextFilter, GEOPDSpatialLookupFilter, GEOPDStorefrontFilter, GEOPDStorefrontPresentationFilter, GEOPDStyleAttributesFilter, GEOPDSupportsOfflineMapsFilter, GEOPDTextBlockFilter, GEOPDTipFilter, GEOPDTransitAttributionFilter, GEOPDTransitIncidentFilter, GEOPDTransitInfoFilter, GEOPDTransitInfoSnippetFilter, GEOPDTransitScheduleFilter, GEOPDTransitTripGeometryFilter, GEOPDTransitTripStopFilter, GEOPDTransitTripStopTimeFilter, GEOPDVehiclePositionFilter, GEOPDVenueInfoFilter, GEOPDWalletCategoryInformationFilter, GEOPDWifiFingerprintFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRoadAccessInfoFilter *_accessInfoFilter;
    GEOPDAddressFilter *_addressFilter;
    GEOPDAddressObjectFilter *_addressObjectFilter;
    GEOPDAmenitiesFilter *_amenitiesFilter;
    GEOPDAnnotatedItemListFilter *_annotatedItemListFilter;
    GEOPDAssociatedAppFilter *_associatedAppFilter;
    GEOPDBoundsFilter *_boundsFilter;
    GEOPDBrowseCategoriesFilter *_browseCategoriesFilter;
    GEOPDBusinessClaimFilter *_businessClaimFilter;
    GEOPDBusinessHoursFilter *_businessHoursFilter;
    GEOPDCaptionedPhotoFilter *_captionedPhotoFilter;
    GEOPDContainedPlaceFilter *_containedPlaceFilter;
    GEOPDEntityFilter *_entityFilter;
    GEOPDETAFilter *_etaFilter;
    GEOPDExternalActionFilter *_externalActionFilter;
    GEOPDFactoidFilter *_factoidFilter;
    GEOPDFlyoverFilter *_flyoverFilter;
    GEOPDGroundViewLabelFilter *_groundViewLabelFilter;
    GEOPDHoursFilter *_hoursFilter;
    GEOPDIconFilter *_iconFilter;
    GEOPDLinkedServiceFilter *_linkedServiceFilter;
    GEOPDLocationEventFilter *_locationEventFilter;
    GEOPDMessageLinkFilter *_messageLinkFilter;
    GEOPDOfflineAreaFilter *_offlineAreaFilter;
    GEOPDOfflineIdentifierFilter *_offlineIdentifierFilter;
    GEOPDOfflineQuadNodesFilter *_offlineQuadNodesFilter;
    GEOPDOfflineSizeFilter *_offlineSizeFilter;
    GEOPDPhotoFilter *_photoFilter;
    GEOPDPlaceCollectionFilter *_placeCollectionFilter;
    GEOPDPlaceInfoFilter *_placeInfoFilter;
    GEOPDPlacecardLayoutConfigurationFilter *_placecardLayoutConfigurationFilter;
    GEOPDPlacecardURLFilter *_placecardUrlFilter;
    GEOPDPoiEventFilter *_poiEventFilter;
    GEOPDPriceDescriptionFilter *_priceDescriptionFilter;
    GEOPDPrototypeContainerFilter *_protoTypeContainerFilter;
    GEOPDQuickLinkFilter *_quickLinkFilter;
    GEOPDRapFilter *_rapFilter;
    GEOPDRatingFilter *_ratingFilter;
    GEOPDRawAttributeFilter *_rawAttributeFilter;
    GEOPDRelatedPlaceFilter *_relatedPlaceFilter;
    GEOPDRestaurantReservationLinkFilter *_restaurantReservationLinkFilter;
    GEOPDResultSnippetFilter *_resultSnippetFilter;
    GEOPDReviewFilter *_reviewFilter;
    GEOPDSimpleRestaurantMenuTextFilter *_simpleRestaurantMenuTextFilter;
    GEOPDSpatialLookupFilter *_spatialLookupFilter;
    GEOPDStorefrontFilter *_storefrontFilter;
    GEOPDStorefrontPresentationFilter *_storefrontPresentationFilter;
    GEOPDStyleAttributesFilter *_styleAttributesFilter;
    GEOPDSupportsOfflineMapsFilter *_supportsOfflineMapsFilter;
    GEOPDTextBlockFilter *_textBlockFilter;
    GEOPDTipFilter *_tipFilter;
    GEOPDTransitAttributionFilter *_transitAttributionFilter;
    GEOPDTransitIncidentFilter *_transitIncidentFilter;
    GEOPDTransitInfoFilter *_transitInfoFilter;
    GEOPDTransitInfoSnippetFilter *_transitInfoSnippetFilter;
    GEOPDTransitScheduleFilter *_transitScheduleFilter;
    GEOPDTransitTripGeometryFilter *_transitTripGeometryFilter;
    GEOPDTransitTripStopFilter *_transitTripStopFilter;
    GEOPDTransitTripStopTimeFilter *_transitTripStopTimeFilter;
    GEOPDVehiclePositionFilter *_transitVehiclePositionFilter;
    GEOPDOfflineUpdateManifestFilter *_updateManifestFilter;
    GEOPDVenueInfoFilter *_venueInfoFilter;
    GEOPDWalletCategoryInformationFilter *_walletCategoryInformationFilter;
    GEOPDWifiFingerprintFilter *_wifiFingerprintFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_accessInfoFilter:1;
        unsigned int read_addressFilter:1;
        unsigned int read_addressObjectFilter:1;
        unsigned int read_amenitiesFilter:1;
        unsigned int read_annotatedItemListFilter:1;
        unsigned int read_associatedAppFilter:1;
        unsigned int read_boundsFilter:1;
        unsigned int read_browseCategoriesFilter:1;
        unsigned int read_businessClaimFilter:1;
        unsigned int read_businessHoursFilter:1;
        unsigned int read_captionedPhotoFilter:1;
        unsigned int read_containedPlaceFilter:1;
        unsigned int read_entityFilter:1;
        unsigned int read_etaFilter:1;
        unsigned int read_externalActionFilter:1;
        unsigned int read_factoidFilter:1;
        unsigned int read_flyoverFilter:1;
        unsigned int read_groundViewLabelFilter:1;
        unsigned int read_hoursFilter:1;
        unsigned int read_iconFilter:1;
        unsigned int read_linkedServiceFilter:1;
        unsigned int read_locationEventFilter:1;
        unsigned int read_messageLinkFilter:1;
        unsigned int read_offlineAreaFilter:1;
        unsigned int read_offlineIdentifierFilter:1;
        unsigned int read_offlineQuadNodesFilter:1;
        unsigned int read_offlineSizeFilter:1;
        unsigned int read_photoFilter:1;
        unsigned int read_placeCollectionFilter:1;
        unsigned int read_placeInfoFilter:1;
        unsigned int read_placecardLayoutConfigurationFilter:1;
        unsigned int read_placecardUrlFilter:1;
        unsigned int read_poiEventFilter:1;
        unsigned int read_priceDescriptionFilter:1;
        unsigned int read_protoTypeContainerFilter:1;
        unsigned int read_quickLinkFilter:1;
        unsigned int read_rapFilter:1;
        unsigned int read_ratingFilter:1;
        unsigned int read_rawAttributeFilter:1;
        unsigned int read_relatedPlaceFilter:1;
        unsigned int read_restaurantReservationLinkFilter:1;
        unsigned int read_resultSnippetFilter:1;
        unsigned int read_reviewFilter:1;
        unsigned int read_simpleRestaurantMenuTextFilter:1;
        unsigned int read_spatialLookupFilter:1;
        unsigned int read_storefrontFilter:1;
        unsigned int read_storefrontPresentationFilter:1;
        unsigned int read_styleAttributesFilter:1;
        unsigned int read_supportsOfflineMapsFilter:1;
        unsigned int read_textBlockFilter:1;
        unsigned int read_tipFilter:1;
        unsigned int read_transitAttributionFilter:1;
        unsigned int read_transitIncidentFilter:1;
        unsigned int read_transitInfoFilter:1;
        unsigned int read_transitInfoSnippetFilter:1;
        unsigned int read_transitScheduleFilter:1;
        unsigned int read_transitTripGeometryFilter:1;
        unsigned int read_transitTripStopFilter:1;
        unsigned int read_transitTripStopTimeFilter:1;
        unsigned int read_transitVehiclePositionFilter:1;
        unsigned int read_updateManifestFilter:1;
        unsigned int read_venueInfoFilter:1;
        unsigned int read_walletCategoryInformationFilter:1;
        unsigned int read_wifiFingerprintFilter:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessInfoFilter:1;
        unsigned int wrote_addressFilter:1;
        unsigned int wrote_addressObjectFilter:1;
        unsigned int wrote_amenitiesFilter:1;
        unsigned int wrote_annotatedItemListFilter:1;
        unsigned int wrote_associatedAppFilter:1;
        unsigned int wrote_boundsFilter:1;
        unsigned int wrote_browseCategoriesFilter:1;
        unsigned int wrote_businessClaimFilter:1;
        unsigned int wrote_businessHoursFilter:1;
        unsigned int wrote_captionedPhotoFilter:1;
        unsigned int wrote_containedPlaceFilter:1;
        unsigned int wrote_entityFilter:1;
        unsigned int wrote_etaFilter:1;
        unsigned int wrote_externalActionFilter:1;
        unsigned int wrote_factoidFilter:1;
        unsigned int wrote_flyoverFilter:1;
        unsigned int wrote_groundViewLabelFilter:1;
        unsigned int wrote_hoursFilter:1;
        unsigned int wrote_iconFilter:1;
        unsigned int wrote_linkedServiceFilter:1;
        unsigned int wrote_locationEventFilter:1;
        unsigned int wrote_messageLinkFilter:1;
        unsigned int wrote_offlineAreaFilter:1;
        unsigned int wrote_offlineIdentifierFilter:1;
        unsigned int wrote_offlineQuadNodesFilter:1;
        unsigned int wrote_offlineSizeFilter:1;
        unsigned int wrote_photoFilter:1;
        unsigned int wrote_placeCollectionFilter:1;
        unsigned int wrote_placeInfoFilter:1;
        unsigned int wrote_placecardLayoutConfigurationFilter:1;
        unsigned int wrote_placecardUrlFilter:1;
        unsigned int wrote_poiEventFilter:1;
        unsigned int wrote_priceDescriptionFilter:1;
        unsigned int wrote_protoTypeContainerFilter:1;
        unsigned int wrote_quickLinkFilter:1;
        unsigned int wrote_rapFilter:1;
        unsigned int wrote_ratingFilter:1;
        unsigned int wrote_rawAttributeFilter:1;
        unsigned int wrote_relatedPlaceFilter:1;
        unsigned int wrote_restaurantReservationLinkFilter:1;
        unsigned int wrote_resultSnippetFilter:1;
        unsigned int wrote_reviewFilter:1;
        unsigned int wrote_simpleRestaurantMenuTextFilter:1;
        unsigned int wrote_spatialLookupFilter:1;
        unsigned int wrote_storefrontFilter:1;
        unsigned int wrote_storefrontPresentationFilter:1;
        unsigned int wrote_styleAttributesFilter:1;
        unsigned int wrote_supportsOfflineMapsFilter:1;
        unsigned int wrote_textBlockFilter:1;
        unsigned int wrote_tipFilter:1;
        unsigned int wrote_transitAttributionFilter:1;
        unsigned int wrote_transitIncidentFilter:1;
        unsigned int wrote_transitInfoFilter:1;
        unsigned int wrote_transitInfoSnippetFilter:1;
        unsigned int wrote_transitScheduleFilter:1;
        unsigned int wrote_transitTripGeometryFilter:1;
        unsigned int wrote_transitTripStopFilter:1;
        unsigned int wrote_transitTripStopTimeFilter:1;
        unsigned int wrote_transitVehiclePositionFilter:1;
        unsigned int wrote_updateManifestFilter:1;
        unsigned int wrote_venueInfoFilter:1;
        unsigned int wrote_walletCategoryInformationFilter:1;
        unsigned int wrote_wifiFingerprintFilter:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDWalletCategoryInformationFilter *walletCategoryInformationFilter;
@property(readonly, nonatomic) _Bool hasWalletCategoryInformationFilter;
- (void)_readWalletCategoryInformationFilter;
@property(retain, nonatomic) GEOPDTransitTripGeometryFilter *transitTripGeometryFilter;
@property(readonly, nonatomic) _Bool hasTransitTripGeometryFilter;
- (void)_readTransitTripGeometryFilter;
@property(retain, nonatomic) GEOPDTransitTripStopTimeFilter *transitTripStopTimeFilter;
@property(readonly, nonatomic) _Bool hasTransitTripStopTimeFilter;
- (void)_readTransitTripStopTimeFilter;
@property(retain, nonatomic) GEOPDTransitTripStopFilter *transitTripStopFilter;
@property(readonly, nonatomic) _Bool hasTransitTripStopFilter;
- (void)_readTransitTripStopFilter;
@property(retain, nonatomic) GEOPDRelatedPlaceFilter *relatedPlaceFilter;
@property(readonly, nonatomic) _Bool hasRelatedPlaceFilter;
- (void)_readRelatedPlaceFilter;
@property(retain, nonatomic) GEOPDPlaceCollectionFilter *placeCollectionFilter;
@property(readonly, nonatomic) _Bool hasPlaceCollectionFilter;
- (void)_readPlaceCollectionFilter;
@property(retain, nonatomic) GEOPDBusinessHoursFilter *businessHoursFilter;
@property(readonly, nonatomic) _Bool hasBusinessHoursFilter;
- (void)_readBusinessHoursFilter;
@property(retain, nonatomic) GEOPDLinkedServiceFilter *linkedServiceFilter;
@property(readonly, nonatomic) _Bool hasLinkedServiceFilter;
- (void)_readLinkedServiceFilter;
@property(retain, nonatomic) GEOPDVehiclePositionFilter *transitVehiclePositionFilter;
@property(readonly, nonatomic) _Bool hasTransitVehiclePositionFilter;
- (void)_readTransitVehiclePositionFilter;
@property(retain, nonatomic) GEOPDPrototypeContainerFilter *protoTypeContainerFilter;
@property(readonly, nonatomic) _Bool hasProtoTypeContainerFilter;
- (void)_readProtoTypeContainerFilter;
@property(retain, nonatomic) GEOPDPlacecardLayoutConfigurationFilter *placecardLayoutConfigurationFilter;
@property(readonly, nonatomic) _Bool hasPlacecardLayoutConfigurationFilter;
- (void)_readPlacecardLayoutConfigurationFilter;
@property(retain, nonatomic) GEOPDStorefrontPresentationFilter *storefrontPresentationFilter;
@property(readonly, nonatomic) _Bool hasStorefrontPresentationFilter;
- (void)_readStorefrontPresentationFilter;
@property(retain, nonatomic) GEOPDPoiEventFilter *poiEventFilter;
@property(readonly, nonatomic) _Bool hasPoiEventFilter;
- (void)_readPoiEventFilter;
@property(retain, nonatomic) GEOPDAnnotatedItemListFilter *annotatedItemListFilter;
@property(readonly, nonatomic) _Bool hasAnnotatedItemListFilter;
- (void)_readAnnotatedItemListFilter;
@property(retain, nonatomic) GEOPDGroundViewLabelFilter *groundViewLabelFilter;
@property(readonly, nonatomic) _Bool hasGroundViewLabelFilter;
- (void)_readGroundViewLabelFilter;
@property(retain, nonatomic) GEOPDStorefrontFilter *storefrontFilter;
@property(readonly, nonatomic) _Bool hasStorefrontFilter;
- (void)_readStorefrontFilter;
@property(retain, nonatomic) GEOPDBrowseCategoriesFilter *browseCategoriesFilter;
@property(readonly, nonatomic) _Bool hasBrowseCategoriesFilter;
- (void)_readBrowseCategoriesFilter;
@property(retain, nonatomic) GEOPDPriceDescriptionFilter *priceDescriptionFilter;
@property(readonly, nonatomic) _Bool hasPriceDescriptionFilter;
- (void)_readPriceDescriptionFilter;
@property(retain, nonatomic) GEOPDIconFilter *iconFilter;
@property(readonly, nonatomic) _Bool hasIconFilter;
- (void)_readIconFilter;
@property(retain, nonatomic) GEOPDWifiFingerprintFilter *wifiFingerprintFilter;
@property(readonly, nonatomic) _Bool hasWifiFingerprintFilter;
- (void)_readWifiFingerprintFilter;
@property(retain, nonatomic) GEOPDContainedPlaceFilter *containedPlaceFilter;
@property(readonly, nonatomic) _Bool hasContainedPlaceFilter;
- (void)_readContainedPlaceFilter;
@property(retain, nonatomic) GEOPDOfflineUpdateManifestFilter *updateManifestFilter;
@property(readonly, nonatomic) _Bool hasUpdateManifestFilter;
- (void)_readUpdateManifestFilter;
@property(retain, nonatomic) GEOPDVenueInfoFilter *venueInfoFilter;
@property(readonly, nonatomic) _Bool hasVenueInfoFilter;
- (void)_readVenueInfoFilter;
@property(retain, nonatomic) GEOPDOfflineSizeFilter *offlineSizeFilter;
@property(readonly, nonatomic) _Bool hasOfflineSizeFilter;
- (void)_readOfflineSizeFilter;
@property(retain, nonatomic) GEOPDOfflineQuadNodesFilter *offlineQuadNodesFilter;
@property(readonly, nonatomic) _Bool hasOfflineQuadNodesFilter;
- (void)_readOfflineQuadNodesFilter;
@property(retain, nonatomic) GEOPDOfflineIdentifierFilter *offlineIdentifierFilter;
@property(readonly, nonatomic) _Bool hasOfflineIdentifierFilter;
- (void)_readOfflineIdentifierFilter;
@property(retain, nonatomic) GEOPDSupportsOfflineMapsFilter *supportsOfflineMapsFilter;
@property(readonly, nonatomic) _Bool hasSupportsOfflineMapsFilter;
- (void)_readSupportsOfflineMapsFilter;
@property(retain, nonatomic) GEOPDLocationEventFilter *locationEventFilter;
@property(readonly, nonatomic) _Bool hasLocationEventFilter;
- (void)_readLocationEventFilter;
@property(retain, nonatomic) GEOPDOfflineAreaFilter *offlineAreaFilter;
@property(readonly, nonatomic) _Bool hasOfflineAreaFilter;
- (void)_readOfflineAreaFilter;
@property(retain, nonatomic) GEOPDRapFilter *rapFilter;
@property(readonly, nonatomic) _Bool hasRapFilter;
- (void)_readRapFilter;
@property(retain, nonatomic) GEOPDQuickLinkFilter *quickLinkFilter;
@property(readonly, nonatomic) _Bool hasQuickLinkFilter;
- (void)_readQuickLinkFilter;
@property(retain, nonatomic) GEOPDMessageLinkFilter *messageLinkFilter;
@property(readonly, nonatomic) _Bool hasMessageLinkFilter;
- (void)_readMessageLinkFilter;
@property(retain, nonatomic) GEOPDAssociatedAppFilter *associatedAppFilter;
@property(readonly, nonatomic) _Bool hasAssociatedAppFilter;
- (void)_readAssociatedAppFilter;
@property(retain, nonatomic) GEOPDPlacecardURLFilter *placecardUrlFilter;
@property(readonly, nonatomic) _Bool hasPlacecardUrlFilter;
- (void)_readPlacecardUrlFilter;
@property(retain, nonatomic) GEOPDTipFilter *tipFilter;
@property(readonly, nonatomic) _Bool hasTipFilter;
- (void)_readTipFilter;
@property(retain, nonatomic) GEOPDSpatialLookupFilter *spatialLookupFilter;
@property(readonly, nonatomic) _Bool hasSpatialLookupFilter;
- (void)_readSpatialLookupFilter;
@property(retain, nonatomic) GEOPDRestaurantReservationLinkFilter *restaurantReservationLinkFilter;
@property(readonly, nonatomic) _Bool hasRestaurantReservationLinkFilter;
- (void)_readRestaurantReservationLinkFilter;
@property(retain, nonatomic) GEOPDSimpleRestaurantMenuTextFilter *simpleRestaurantMenuTextFilter;
@property(readonly, nonatomic) _Bool hasSimpleRestaurantMenuTextFilter;
- (void)_readSimpleRestaurantMenuTextFilter;
@property(retain, nonatomic) GEOPDAddressObjectFilter *addressObjectFilter;
@property(readonly, nonatomic) _Bool hasAddressObjectFilter;
- (void)_readAddressObjectFilter;
@property(retain, nonatomic) GEOPDResultSnippetFilter *resultSnippetFilter;
@property(readonly, nonatomic) _Bool hasResultSnippetFilter;
- (void)_readResultSnippetFilter;
@property(retain, nonatomic) GEOPDExternalActionFilter *externalActionFilter;
@property(readonly, nonatomic) _Bool hasExternalActionFilter;
- (void)_readExternalActionFilter;
@property(retain, nonatomic) GEOPDTransitInfoSnippetFilter *transitInfoSnippetFilter;
@property(readonly, nonatomic) _Bool hasTransitInfoSnippetFilter;
- (void)_readTransitInfoSnippetFilter;
@property(retain, nonatomic) GEOPDCaptionedPhotoFilter *captionedPhotoFilter;
@property(readonly, nonatomic) _Bool hasCaptionedPhotoFilter;
- (void)_readCaptionedPhotoFilter;
@property(retain, nonatomic) GEOPDBusinessClaimFilter *businessClaimFilter;
@property(readonly, nonatomic) _Bool hasBusinessClaimFilter;
- (void)_readBusinessClaimFilter;
@property(retain, nonatomic) GEOPDTransitAttributionFilter *transitAttributionFilter;
@property(readonly, nonatomic) _Bool hasTransitAttributionFilter;
- (void)_readTransitAttributionFilter;
@property(retain, nonatomic) GEOPDFactoidFilter *factoidFilter;
@property(readonly, nonatomic) _Bool hasFactoidFilter;
- (void)_readFactoidFilter;
@property(retain, nonatomic) GEOPDTextBlockFilter *textBlockFilter;
@property(readonly, nonatomic) _Bool hasTextBlockFilter;
- (void)_readTextBlockFilter;
@property(retain, nonatomic) GEOPDTransitIncidentFilter *transitIncidentFilter;
@property(readonly, nonatomic) _Bool hasTransitIncidentFilter;
- (void)_readTransitIncidentFilter;
@property(retain, nonatomic) GEOPDStyleAttributesFilter *styleAttributesFilter;
@property(readonly, nonatomic) _Bool hasStyleAttributesFilter;
- (void)_readStyleAttributesFilter;
@property(retain, nonatomic) GEOPDAmenitiesFilter *amenitiesFilter;
@property(readonly, nonatomic) _Bool hasAmenitiesFilter;
- (void)_readAmenitiesFilter;
@property(retain, nonatomic) GEOPDRawAttributeFilter *rawAttributeFilter;
@property(readonly, nonatomic) _Bool hasRawAttributeFilter;
- (void)_readRawAttributeFilter;
@property(retain, nonatomic) GEOPDFlyoverFilter *flyoverFilter;
@property(readonly, nonatomic) _Bool hasFlyoverFilter;
- (void)_readFlyoverFilter;
@property(retain, nonatomic) GEOPDETAFilter *etaFilter;
@property(readonly, nonatomic) _Bool hasEtaFilter;
- (void)_readEtaFilter;
@property(retain, nonatomic) GEOPDTransitScheduleFilter *transitScheduleFilter;
@property(readonly, nonatomic) _Bool hasTransitScheduleFilter;
- (void)_readTransitScheduleFilter;
@property(retain, nonatomic) GEOPDTransitInfoFilter *transitInfoFilter;
@property(readonly, nonatomic) _Bool hasTransitInfoFilter;
- (void)_readTransitInfoFilter;
@property(retain, nonatomic) GEOPDHoursFilter *hoursFilter;
@property(readonly, nonatomic) _Bool hasHoursFilter;
- (void)_readHoursFilter;
@property(retain, nonatomic) GEOPDPhotoFilter *photoFilter;
@property(readonly, nonatomic) _Bool hasPhotoFilter;
- (void)_readPhotoFilter;
@property(retain, nonatomic) GEOPDReviewFilter *reviewFilter;
@property(readonly, nonatomic) _Bool hasReviewFilter;
- (void)_readReviewFilter;
@property(retain, nonatomic) GEOPDRatingFilter *ratingFilter;
@property(readonly, nonatomic) _Bool hasRatingFilter;
- (void)_readRatingFilter;
@property(retain, nonatomic) GEOPDAddressFilter *addressFilter;
@property(readonly, nonatomic) _Bool hasAddressFilter;
- (void)_readAddressFilter;
@property(retain, nonatomic) GEOPDBoundsFilter *boundsFilter;
@property(readonly, nonatomic) _Bool hasBoundsFilter;
- (void)_readBoundsFilter;
@property(retain, nonatomic) GEOPDRoadAccessInfoFilter *accessInfoFilter;
@property(readonly, nonatomic) _Bool hasAccessInfoFilter;
- (void)_readAccessInfoFilter;
@property(retain, nonatomic) GEOPDPlaceInfoFilter *placeInfoFilter;
@property(readonly, nonatomic) _Bool hasPlaceInfoFilter;
- (void)_readPlaceInfoFilter;
@property(retain, nonatomic) GEOPDEntityFilter *entityFilter;
@property(readonly, nonatomic) _Bool hasEntityFilter;
- (void)_readEntityFilter;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initAddressObjectFilterWithLibraryVersion:(id)arg1;
- (id)initTransitTripStopTimeFilterWithTraits:(id)arg1;
- (id)initTransitScheduleFilterWithTraits:(id)arg1;
- (id)initTipUserPhotoFilterWithTraits:(id)arg1;
- (id)initReviewUserPhotoFilterWithTraits:(id)arg1;
- (id)initResultSnippetFilterWithTraits:(id)arg1;
- (id)initRestaurantReservationLinkFilterWithTraits:(id)arg1;
- (id)initAnnotatedItemListFilterWithTraits:(id)arg1;
- (id)initCaptionedPhotoFilterWithTraits:(id)arg1;
- (id)initPhotoFilterWithTraits:(id)arg1;
- (id)initEntityFilterWithSpokenNames;

@end

