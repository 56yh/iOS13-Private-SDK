//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, GEOTrafficTrafficApiResponse, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint _clientTimepoint;
    struct GEOSessionID _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    NSString *_requestingAppId;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    double _sessionRelativeTimestamp;
    NSData *_sessionState;
    GEOTrafficTrafficApiResponse *_trafficApiResponse;
    NSMutableArray *_trafficSnapshotIds;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSData *_tripID;
    NSString *_xpcUuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxAlternateRouteCount;
    unsigned int _previouslyRejectedRerouteSavings;
    int _rerouteStatus;
    _Bool _includeBetterRouteSuggestion;
    _Bool _needServerLatency;
    _Bool _useClientTimepointAsNow;
    _Bool _useLiveTrafficAsFallback;
    struct {
        unsigned int has_clientTimepoint:1;
        unsigned int has_sessionID:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_maxAlternateRouteCount:1;
        unsigned int has_previouslyRejectedRerouteSavings:1;
        unsigned int has_rerouteStatus:1;
        unsigned int has_includeBetterRouteSuggestion:1;
        unsigned int has_needServerLatency:1;
        unsigned int has_useClientTimepointAsNow:1;
        unsigned int has_useLiveTrafficAsFallback:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_commonOptions:1;
        unsigned int read_currentUserLocation:1;
        unsigned int read_destinationWaypointTypeds:1;
        unsigned int read_directionsResponseID:1;
        unsigned int read_requestingAppId:1;
        unsigned int read_routeAttributes:1;
        unsigned int read_routes:1;
        unsigned int read_serviceTags:1;
        unsigned int read_sessionState:1;
        unsigned int read_trafficApiResponse:1;
        unsigned int read_trafficSnapshotIds:1;
        unsigned int read_trafficSnapshot:1;
        unsigned int read_tripID:1;
        unsigned int read_xpcUuid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientTimepoint:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_additionalEnabledMarkets:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_commonOptions:1;
        unsigned int wrote_currentUserLocation:1;
        unsigned int wrote_destinationWaypointTypeds:1;
        unsigned int wrote_directionsResponseID:1;
        unsigned int wrote_requestingAppId:1;
        unsigned int wrote_routeAttributes:1;
        unsigned int wrote_routes:1;
        unsigned int wrote_serviceTags:1;
        unsigned int wrote_sessionRelativeTimestamp:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_trafficApiResponse:1;
        unsigned int wrote_trafficSnapshotIds:1;
        unsigned int wrote_trafficSnapshot:1;
        unsigned int wrote_tripID:1;
        unsigned int wrote_xpcUuid:1;
        unsigned int wrote_maxAlternateRouteCount:1;
        unsigned int wrote_previouslyRejectedRerouteSavings:1;
        unsigned int wrote_rerouteStatus:1;
        unsigned int wrote_includeBetterRouteSuggestion:1;
        unsigned int wrote_needServerLatency:1;
        unsigned int wrote_useClientTimepointAsNow:1;
        unsigned int wrote_useLiveTrafficAsFallback:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)trafficSnapshotIdsType;
+ (Class)serviceTagType;
+ (Class)destinationWaypointTypedType;
+ (Class)routeType;
@property(retain, nonatomic) NSString *xpcUuid;
@property(readonly, nonatomic) _Bool hasXpcUuid;
- (void)_readXpcUuid;
@property(nonatomic) _Bool hasNeedServerLatency;
@property(nonatomic) _Bool needServerLatency;
@property(nonatomic) _Bool hasUseClientTimepointAsNow;
@property(nonatomic) _Bool useClientTimepointAsNow;
@property(nonatomic) _Bool hasClientTimepoint;
@property(nonatomic) struct GEOTimepoint clientTimepoint;
@property(nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property(nonatomic) _Bool useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) _Bool hasTrafficSnapshot;
- (void)_readTrafficSnapshot;
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
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSnapshotIdsCount;
- (void)_addNoFlagsTrafficSnapshotIds:(id)arg1;
- (void)addTrafficSnapshotIds:(id)arg1;
- (void)clearTrafficSnapshotIds;
@property(retain, nonatomic) NSMutableArray *trafficSnapshotIds;
- (void)_readTrafficSnapshotIds;
@property(retain, nonatomic) GEOTrafficTrafficApiResponse *trafficApiResponse;
@property(readonly, nonatomic) _Bool hasTrafficApiResponse;
- (void)_readTrafficApiResponse;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
- (void)_readServiceTags;
@property(retain, nonatomic) NSString *requestingAppId;
@property(readonly, nonatomic) _Bool hasRequestingAppId;
- (void)_readRequestingAppId;
@property(retain, nonatomic) NSData *tripID;
@property(readonly, nonatomic) _Bool hasTripID;
- (void)_readTripID;
@property(nonatomic) _Bool hasMaxAlternateRouteCount;
@property(nonatomic) unsigned int maxAlternateRouteCount;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
- (void)_readAbClientMetadata;
@property(retain, nonatomic) GEOCommonOptions *commonOptions;
@property(readonly, nonatomic) _Bool hasCommonOptions;
- (void)_readCommonOptions;
- (int)StringAsRerouteStatus:(id)arg1;
- (id)rerouteStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasRerouteStatus;
@property(nonatomic) int rerouteStatus;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) _Bool hasSessionState;
- (void)_readSessionState;
@property(nonatomic) _Bool hasPreviouslyRejectedRerouteSavings;
@property(nonatomic) unsigned int previouslyRejectedRerouteSavings;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (void)_addNoFlagsDestinationWaypointTyped:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
- (void)_readDestinationWaypointTypeds;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
- (void)_readAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
@property(retain, nonatomic) NSData *directionsResponseID;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
- (void)_readDirectionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
- (void)_readClientCapabilities;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)_addNoFlagsRoute:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
@property(retain, nonatomic) NSMutableArray *routes;
- (void)_readRoutes;
@property(nonatomic) _Bool hasIncludeBetterRouteSuggestion;
@property(nonatomic) _Bool includeBetterRouteSuggestion;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) _Bool hasRouteAttributes;
- (void)_readRouteAttributes;
@property(retain, nonatomic) GEOLocation *currentUserLocation;
@property(readonly, nonatomic) _Bool hasCurrentUserLocation;
- (void)_readCurrentUserLocation;
- (id)initWithData:(id)arg1;
- (id)init;

@end

