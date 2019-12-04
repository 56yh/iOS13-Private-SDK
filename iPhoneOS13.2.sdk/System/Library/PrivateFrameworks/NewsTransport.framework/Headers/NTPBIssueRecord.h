//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSMutableArray, NSString, NTPBDate, NTPBRecordBase;

@interface NTPBIssueRecord : PBCodable <NSCopying>
{
    double _coverAspectRatio;
    unsigned long long _halfLifeMilliseconds;
    double _layeredCoverAspectRatio;
    long long _minimumNewsVersion;
    NSMutableArray *_allArticleIDs;
    NSMutableArray *_allowedStorefrontIDs;
    NTPBRecordBase *_base;
    NSMutableArray *_blockedStorefrontIDs;
    NSMutableArray *_bundleFeaturedArticleIDs;
    NSString *_channelTagID;
    NSString *_coverArticleID;
    NSString *_coverImageURL;
    NSString *_coverPrimaryColor;
    NSString *_edition;
    NSString *_issueDescription;
    NSString *_layeredCover;
    NSString *_layeredCoverPrimaryColor;
    NSString *_metadataURL;
    NSString *_notificationDescription;
    NSString *_pdfResourceArchiveURL;
    NTPBDate *_publishDate;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
    NSString *_title;
    NSMutableArray *_topicTagIDs;
    int _type;
    _Bool _isDraft;
    _Bool _isPaid;
    struct {
        unsigned int coverAspectRatio:1;
        unsigned int halfLifeMilliseconds:1;
        unsigned int layeredCoverAspectRatio:1;
        unsigned int minimumNewsVersion:1;
        unsigned int type:1;
        unsigned int isDraft:1;
        unsigned int isPaid:1;
    } _has;
}

+ (Class)bundleFeaturedArticleIDsType;
+ (Class)topicTagIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)allArticleIDsType;
@property(retain, nonatomic) NSMutableArray *bundleFeaturedArticleIDs; // @synthesize bundleFeaturedArticleIDs=_bundleFeaturedArticleIDs;
@property(retain, nonatomic) NSString *pdfResourceArchiveURL; // @synthesize pdfResourceArchiveURL=_pdfResourceArchiveURL;
@property(nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(retain, nonatomic) NSMutableArray *topicTagIDs; // @synthesize topicTagIDs=_topicTagIDs;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) NTPBDate *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSString *notificationDescription; // @synthesize notificationDescription=_notificationDescription;
@property(retain, nonatomic) NSString *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) NSString *layeredCoverPrimaryColor; // @synthesize layeredCoverPrimaryColor=_layeredCoverPrimaryColor;
@property(nonatomic) double layeredCoverAspectRatio; // @synthesize layeredCoverAspectRatio=_layeredCoverAspectRatio;
@property(retain, nonatomic) NSString *layeredCover; // @synthesize layeredCover=_layeredCover;
@property(retain, nonatomic) NSString *issueDescription; // @synthesize issueDescription=_issueDescription;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic) unsigned long long halfLifeMilliseconds; // @synthesize halfLifeMilliseconds=_halfLifeMilliseconds;
@property(retain, nonatomic) NSString *edition; // @synthesize edition=_edition;
@property(retain, nonatomic) NSString *coverPrimaryColor; // @synthesize coverPrimaryColor=_coverPrimaryColor;
@property(retain, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(nonatomic) double coverAspectRatio; // @synthesize coverAspectRatio=_coverAspectRatio;
@property(retain, nonatomic) NSString *coverArticleID; // @synthesize coverArticleID=_coverArticleID;
@property(retain, nonatomic) NSString *channelTagID; // @synthesize channelTagID=_channelTagID;
@property(retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *allArticleIDs; // @synthesize allArticleIDs=_allArticleIDs;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)bundleFeaturedArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleFeaturedArticleIDsCount;
- (void)addBundleFeaturedArticleIDs:(id)arg1;
- (void)clearBundleFeaturedArticleIDs;
@property(readonly, nonatomic) _Bool hasPdfResourceArchiveURL;
@property(nonatomic) _Bool hasMinimumNewsVersion;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)topicTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicTagIDsCount;
- (void)addTopicTagIDs:(id)arg1;
- (void)clearTopicTagIDs;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasScores;
@property(readonly, nonatomic) _Bool hasPublishDate;
@property(readonly, nonatomic) _Bool hasNotificationDescription;
@property(readonly, nonatomic) _Bool hasMetadataURL;
@property(readonly, nonatomic) _Bool hasLayeredCoverPrimaryColor;
@property(nonatomic) _Bool hasLayeredCoverAspectRatio;
@property(readonly, nonatomic) _Bool hasLayeredCover;
@property(readonly, nonatomic) _Bool hasIssueDescription;
@property(nonatomic) _Bool hasIsPaid;
@property(nonatomic) _Bool hasIsDraft;
@property(nonatomic) _Bool hasHalfLifeMilliseconds;
@property(readonly, nonatomic) _Bool hasEdition;
@property(readonly, nonatomic) _Bool hasCoverPrimaryColor;
@property(readonly, nonatomic) _Bool hasCoverImageURL;
@property(nonatomic) _Bool hasCoverAspectRatio;
@property(readonly, nonatomic) _Bool hasCoverArticleID;
@property(readonly, nonatomic) _Bool hasChannelTagID;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)clearBlockedStorefrontIDs;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)clearAllowedStorefrontIDs;
- (id)allArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allArticleIDsCount;
- (void)addAllArticleIDs:(id)arg1;
- (void)clearAllArticleIDs;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end

