//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _numVisibleResults;
    int _suggestionType;
    int _type;
    BOOL _enforceServerResultsOrder;
    BOOL _shouldInterleaveClientResults;
    struct {
        unsigned int has_numVisibleResults:1;
        unsigned int has_suggestionType:1;
        unsigned int has_type:1;
        unsigned int has_enforceServerResultsOrder:1;
        unsigned int has_shouldInterleaveClientResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entries:1;
        unsigned int read_name:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entries:1;
        unsigned int wrote_name:1;
        unsigned int wrote_numVisibleResults:1;
        unsigned int wrote_suggestionType:1;
        unsigned int wrote_type:1;
        unsigned int wrote_enforceServerResultsOrder:1;
        unsigned int wrote_shouldInterleaveClientResults:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)entriesType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEnforceServerResultsOrder;
@property(nonatomic) BOOL enforceServerResultsOrder;
@property(nonatomic) BOOL hasShouldInterleaveClientResults;
@property(nonatomic) BOOL shouldInterleaveClientResults;
@property(nonatomic) BOOL hasNumVisibleResults;
@property(nonatomic) int numVisibleResults;
- (int)StringAsSuggestionType:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSuggestionType;
@property(nonatomic) int suggestionType;
- (id)entriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)entriesCount;
- (void)_addNoFlagsEntries:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
@property(retain, nonatomic) NSMutableArray *entries;
- (void)_readEntries;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;
- (id)init;

@end
