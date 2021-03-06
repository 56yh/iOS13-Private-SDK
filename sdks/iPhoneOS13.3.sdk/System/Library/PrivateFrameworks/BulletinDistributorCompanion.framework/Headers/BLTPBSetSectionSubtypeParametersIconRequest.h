//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class BLTPBSectionIcon, NSString;

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying>
{
    NSUInteger _subtypeID;
    BLTPBSectionIcon *_icon;
    NSString *_sectionID;
    BOOL _defaultSubtype;
    struct {
        unsigned int subtypeID:1;
        unsigned int defaultSubtype:1;
    } _has;
}

@property(retain, nonatomic) BLTPBSectionIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) BOOL defaultSubtype; // @synthesize defaultSubtype=_defaultSubtype;
@property(nonatomic) NSUInteger subtypeID; // @synthesize subtypeID=_subtypeID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
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
@property(readonly, nonatomic) BOOL hasIcon;
@property(nonatomic) BOOL hasDefaultSubtype;
@property(nonatomic) BOOL hasSubtypeID;
@property(readonly, nonatomic) BOOL hasSectionID;

@end

