//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable <NSCopying>
{
    long long _persistentId;
    long long _storeId;
    MIPArtist *_artist;
    NSString *_artworkId;
    NSString *_cloudId;
    NSString *_name;
    int _numDiscs;
    int _numTracks;
    NSString *_sortName;
    int _userRating;
    _Bool _compilation;
    struct {
        unsigned int persistentId:1;
        unsigned int storeId:1;
        unsigned int numDiscs:1;
        unsigned int numTracks:1;
        unsigned int userRating:1;
        unsigned int compilation:1;
    } _has;
}

@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(nonatomic) long long persistentId; // @synthesize persistentId=_persistentId;
@property(nonatomic) _Bool compilation; // @synthesize compilation=_compilation;
@property(nonatomic) int userRating; // @synthesize userRating=_userRating;
@property(retain, nonatomic) NSString *artworkId; // @synthesize artworkId=_artworkId;
@property(nonatomic) int numDiscs; // @synthesize numDiscs=_numDiscs;
@property(nonatomic) int numTracks; // @synthesize numTracks=_numTracks;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCloudId;
@property(nonatomic) _Bool hasPersistentId;
@property(nonatomic) _Bool hasCompilation;
@property(nonatomic) _Bool hasUserRating;
@property(readonly, nonatomic) _Bool hasArtworkId;
@property(nonatomic) _Bool hasNumDiscs;
@property(nonatomic) _Bool hasNumTracks;
@property(readonly, nonatomic) _Bool hasArtist;
@property(readonly, nonatomic) _Bool hasSortName;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasStoreId;

@end

