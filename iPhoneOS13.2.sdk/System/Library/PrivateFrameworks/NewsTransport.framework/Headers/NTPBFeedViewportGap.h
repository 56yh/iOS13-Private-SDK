//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, NSString, NTPBDate, NTPBFeedViewportEdition;

@interface NTPBFeedViewportGap : PBCodable <NSCopying>
{
    CDStruct_95bda58d _activeGroupEmitterIDRefs;
    CDStruct_95bda58d _groupEmitterIDRefs;
    NSMutableArray *_cursors;
    NSString *_identifier;
    NTPBFeedViewportEdition *_lastCompletedEdition;
    NTPBDate *_modificationDate;
    NSMutableArray *_pendingGroups;
    NTPBDate *_refreshDate;
    _Bool _isOffline;
    _Bool _reachedEnd;
    struct {
        unsigned int isOffline:1;
        unsigned int reachedEnd:1;
    } _has;
}

+ (Class)pendingGroupsType;
+ (Class)cursorsType;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(retain, nonatomic) NSMutableArray *pendingGroups; // @synthesize pendingGroups=_pendingGroups;
@property(retain, nonatomic) NTPBFeedViewportEdition *lastCompletedEdition; // @synthesize lastCompletedEdition=_lastCompletedEdition;
@property(retain, nonatomic) NSMutableArray *cursors; // @synthesize cursors=_cursors;
@property(nonatomic) _Bool reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(retain, nonatomic) NTPBDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NTPBDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsOffline;
- (void)setActiveGroupEmitterIDRefs:(int *)arg1 count:(unsigned long long)arg2;
- (int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)arg1;
- (void)addActiveGroupEmitterIDRefs:(int)arg1;
- (void)clearActiveGroupEmitterIDRefs;
@property(readonly, nonatomic) int *activeGroupEmitterIDRefs;
@property(readonly, nonatomic) unsigned long long activeGroupEmitterIDRefsCount;
- (id)pendingGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pendingGroupsCount;
- (void)addPendingGroups:(id)arg1;
- (void)clearPendingGroups;
@property(readonly, nonatomic) _Bool hasLastCompletedEdition;
- (id)cursorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cursorsCount;
- (void)addCursors:(id)arg1;
- (void)clearCursors;
- (void)setGroupEmitterIDRefs:(int *)arg1 count:(unsigned long long)arg2;
- (int)groupEmitterIDRefAtIndex:(unsigned long long)arg1;
- (void)addGroupEmitterIDRef:(int)arg1;
- (void)clearGroupEmitterIDRefs;
@property(readonly, nonatomic) int *groupEmitterIDRefs;
@property(readonly, nonatomic) unsigned long long groupEmitterIDRefsCount;
@property(nonatomic) _Bool hasReachedEnd;
@property(readonly, nonatomic) _Bool hasModificationDate;
@property(readonly, nonatomic) _Bool hasRefreshDate;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;

@end

