//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOAutomobileOptions, GEODestinationInfo, GEOTransitOptions, GEOWalkingOptions, NSString, PBDataReader, PBUnknownFields;

@interface GEORouteAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _additionalTransportTypes;
    CDStruct_95bda58d _uiContexts;
    struct GEOTimepoint _timepoint;
    GEOAutomobileOptions *_automobileOptions;
    GEODestinationInfo *_destinationInfo;
    NSString *_phoneticLocaleIdentifier;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _basicPointsToBeIncluded;
    int _destinationType;
    int _mainTransportType;
    int _trafficType;
    unsigned int _walkingLimitMeters;
    _Bool _directZilchByLaneFlowlines;
    _Bool _enableExperimentalMode;
    _Bool _includeContingencyRoutes;
    _Bool _includeHistoricTravelTime;
    _Bool _includeLaneGuidance;
    _Bool _includeManeuverIcons;
    _Bool _includePhonetics;
    _Bool _includeTrafficAlongRoute;
    _Bool _includeTrafficIncidents;
    _Bool _includeZilchPoints;
    _Bool _includeCrossLanguagePhonetics;
    _Bool _includeLaneWidths;
    _Bool _useMetricThreshold;
    struct {
        unsigned int has_timepoint:1;
        unsigned int has_basicPointsToBeIncluded:1;
        unsigned int has_destinationType:1;
        unsigned int has_mainTransportType:1;
        unsigned int has_trafficType:1;
        unsigned int has_walkingLimitMeters:1;
        unsigned int has_directZilchByLaneFlowlines:1;
        unsigned int has_enableExperimentalMode:1;
        unsigned int has_includeContingencyRoutes:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeLaneGuidance:1;
        unsigned int has_includeManeuverIcons:1;
        unsigned int has_includePhonetics:1;
        unsigned int has_includeTrafficAlongRoute:1;
        unsigned int has_includeTrafficIncidents:1;
        unsigned int has_includeZilchPoints:1;
        unsigned int has_includeCrossLanguagePhonetics:1;
        unsigned int has_includeLaneWidths:1;
        unsigned int has_useMetricThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_additionalTransportTypes:1;
        unsigned int read_uiContexts:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_destinationInfo:1;
        unsigned int read_phoneticLocaleIdentifier:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_additionalTransportTypes:1;
        unsigned int wrote_uiContexts:1;
        unsigned int wrote_timepoint:1;
        unsigned int wrote_automobileOptions:1;
        unsigned int wrote_destinationInfo:1;
        unsigned int wrote_phoneticLocaleIdentifier:1;
        unsigned int wrote_transitOptions:1;
        unsigned int wrote_walkingOptions:1;
        unsigned int wrote_basicPointsToBeIncluded:1;
        unsigned int wrote_destinationType:1;
        unsigned int wrote_mainTransportType:1;
        unsigned int wrote_trafficType:1;
        unsigned int wrote_walkingLimitMeters:1;
        unsigned int wrote_directZilchByLaneFlowlines:1;
        unsigned int wrote_enableExperimentalMode:1;
        unsigned int wrote_includeContingencyRoutes:1;
        unsigned int wrote_includeHistoricTravelTime:1;
        unsigned int wrote_includeLaneGuidance:1;
        unsigned int wrote_includeManeuverIcons:1;
        unsigned int wrote_includePhonetics:1;
        unsigned int wrote_includeTrafficAlongRoute:1;
        unsigned int wrote_includeTrafficIncidents:1;
        unsigned int wrote_includeZilchPoints:1;
        unsigned int wrote_includeCrossLanguagePhonetics:1;
        unsigned int wrote_includeLaneWidths:1;
        unsigned int wrote_useMetricThreshold:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (id)defaultRouteAttributes;
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
@property(nonatomic) _Bool hasIncludeLaneWidths;
@property(nonatomic) _Bool includeLaneWidths;
@property(nonatomic) _Bool hasDirectZilchByLaneFlowlines;
@property(nonatomic) _Bool directZilchByLaneFlowlines;
@property(nonatomic) _Bool hasIncludeCrossLanguagePhonetics;
@property(nonatomic) _Bool includeCrossLanguagePhonetics;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType;
@property(retain, nonatomic) GEODestinationInfo *destinationInfo;
@property(readonly, nonatomic) _Bool hasDestinationInfo;
- (void)_readDestinationInfo;
@property(nonatomic) _Bool hasEnableExperimentalMode;
@property(nonatomic) _Bool enableExperimentalMode;
@property(nonatomic) _Bool hasUseMetricThreshold;
@property(nonatomic) _Bool useMetricThreshold;
- (int)StringAsUiContexts:(id)arg1;
- (id)uiContextsAsString:(int)arg1;
- (void)setUiContexts:(int *)arg1 count:(unsigned long long)arg2;
- (int)uiContextAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsUiContext:(int)arg1;
- (void)addUiContext:(int)arg1;
- (void)clearUiContexts;
@property(readonly, nonatomic) int *uiContexts;
@property(readonly, nonatomic) unsigned long long uiContextsCount;
- (void)_readUiContexts;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
- (void)_readWalkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
- (void)_readTransitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
- (void)_readAutomobileOptions;
- (int)StringAsAdditionalTransportTypes:(id)arg1;
- (id)additionalTransportTypesAsString:(int)arg1;
- (void)setAdditionalTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)additionalTransportTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAdditionalTransportType:(int)arg1;
- (void)addAdditionalTransportType:(int)arg1;
- (void)clearAdditionalTransportTypes;
@property(readonly, nonatomic) int *additionalTransportTypes;
@property(readonly, nonatomic) unsigned long long additionalTransportTypesCount;
- (void)_readAdditionalTransportTypes;
@property(nonatomic) _Bool hasWalkingLimitMeters;
@property(nonatomic) unsigned int walkingLimitMeters;
@property(nonatomic) _Bool hasIncludeTrafficIncidents;
@property(nonatomic) _Bool includeTrafficIncidents;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;
@property(nonatomic) _Bool includeHistoricTravelTime;
@property(nonatomic) _Bool hasTimepoint;
@property(nonatomic) struct GEOTimepoint timepoint;
@property(nonatomic) _Bool hasIncludeTrafficAlongRoute;
@property(nonatomic) _Bool includeTrafficAlongRoute;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;
- (void)_readPhoneticLocaleIdentifier;
- (int)StringAsTrafficType:(id)arg1;
- (id)trafficTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTrafficType;
@property(nonatomic) int trafficType;
- (int)StringAsBasicPointsToBeIncluded:(id)arg1;
- (id)basicPointsToBeIncludedAsString:(int)arg1;
@property(nonatomic) _Bool hasBasicPointsToBeIncluded;
@property(nonatomic) int basicPointsToBeIncluded;
@property(nonatomic) _Bool hasIncludeLaneGuidance;
@property(nonatomic) _Bool includeLaneGuidance;
@property(nonatomic) _Bool hasIncludeContingencyRoutes;
@property(nonatomic) _Bool includeContingencyRoutes;
@property(nonatomic) _Bool hasIncludeZilchPoints;
@property(nonatomic) _Bool includeZilchPoints;
@property(nonatomic) _Bool hasIncludeManeuverIcons;
@property(nonatomic) _Bool includeManeuverIcons;
@property(nonatomic) _Bool hasIncludePhonetics;
@property(nonatomic) _Bool includePhonetics;
- (int)StringAsMainTransportType:(id)arg1;
- (id)mainTransportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMainTransportType;
@property(nonatomic) int mainTransportType;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
