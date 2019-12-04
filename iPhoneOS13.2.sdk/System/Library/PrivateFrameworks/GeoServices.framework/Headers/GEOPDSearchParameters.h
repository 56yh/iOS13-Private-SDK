//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDAutocompleteEntry, GEOPDRecentRouteInfo, GEOPDRetainedSearchMetadata, GEOPDSearchFilter, GEOPDSearchLocationParameters, GEOPDSearchStructureIntentRequestType, GEOPDViewportInfo, NSData, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDSearchFilter *_searchFilter;
    GEOPDSearchLocationParameters *_searchLocationParameters;
    NSString *_searchString;
    GEOPDSearchStructureIntentRequestType *_searchStructureIntentType;
    NSData *_suggestionEntryMetadata;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
    int _searchType;
    int _sortOrder;
    _Bool _supportDirectionIntentSearch;
    _Bool _supportDymSuggestion;
    _Bool _supportSearchResultSection;
    _Bool _supportUnresolvedDirectionIntent;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int has_sortOrder:1;
        unsigned int has_supportDirectionIntentSearch:1;
        unsigned int has_supportDymSuggestion:1;
        unsigned int has_supportSearchResultSection:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int read_unknownFields:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_retainedSearch:1;
        unsigned int read_searchFilter:1;
        unsigned int read_searchLocationParameters:1;
        unsigned int read_searchString:1;
        unsigned int read_searchStructureIntentType:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_suggestionEntry:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_recentRouteInfo:1;
        unsigned int wrote_retainedSearch:1;
        unsigned int wrote_searchFilter:1;
        unsigned int wrote_searchLocationParameters:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_searchStructureIntentType:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_suggestionEntry:1;
        unsigned int wrote_suggestionMetadata:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_searchType:1;
        unsigned int wrote_sortOrder:1;
        unsigned int wrote_supportDirectionIntentSearch:1;
        unsigned int wrote_supportDymSuggestion:1;
        unsigned int wrote_supportSearchResultSection:1;
        unsigned int wrote_supportUnresolvedDirectionIntent:1;
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
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSupportSearchResultSection;
@property(nonatomic) _Bool supportSearchResultSection;
@property(nonatomic) _Bool hasSupportUnresolvedDirectionIntent;
@property(nonatomic) _Bool supportUnresolvedDirectionIntent;
@property(retain, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch;
@property(readonly, nonatomic) _Bool hasRetainedSearch;
- (void)_readRetainedSearch;
@property(nonatomic) _Bool hasSupportDirectionIntentSearch;
@property(nonatomic) _Bool supportDirectionIntentSearch;
@property(nonatomic) _Bool hasSupportDymSuggestion;
@property(nonatomic) _Bool supportDymSuggestion;
@property(retain, nonatomic) GEOPDSearchFilter *searchFilter;
@property(readonly, nonatomic) _Bool hasSearchFilter;
- (void)_readSearchFilter;
@property(retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo;
@property(readonly, nonatomic) _Bool hasRecentRouteInfo;
- (void)_readRecentRouteInfo;
@property(retain, nonatomic) GEOPDSearchLocationParameters *searchLocationParameters;
@property(readonly, nonatomic) _Bool hasSearchLocationParameters;
- (void)_readSearchLocationParameters;
@property(retain, nonatomic) GEOPDSearchStructureIntentRequestType *searchStructureIntentType;
@property(readonly, nonatomic) _Bool hasSearchStructureIntentType;
- (void)_readSearchStructureIntentType;
- (int)StringAsSearchType:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchType;
@property(nonatomic) int searchType;
@property(retain, nonatomic) GEOPDAutocompleteEntry *suggestionEntry;
@property(readonly, nonatomic) _Bool hasSuggestionEntry;
- (void)_readSuggestionEntry;
@property(retain, nonatomic) NSData *suggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
- (void)_readSuggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata;
@property(readonly, nonatomic) _Bool hasSuggestionMetadata;
- (void)_readSuggestionMetadata;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) _Bool hasViewportInfo;
- (void)_readViewportInfo;
@property(retain, nonatomic) NSString *searchString;
@property(readonly, nonatomic) _Bool hasSearchString;
- (void)_readSearchString;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) unsigned int maxResults;
- (int)StringAsSortOrder:(id)arg1;
- (id)sortOrderAsString:(int)arg1;
@property(nonatomic) _Bool hasSortOrder;
@property(nonatomic) int sortOrder;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;

@end

