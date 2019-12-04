//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSMutableArray, NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBMediaExposure : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _countOfImagesExposed;
    int _countOfImagesInGallery;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_galleryId;
    int _galleryType;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_mediaId;
    int _mediaLocation;
    int _mediaType;
    NSString *_metadata;
    NSMutableArray *_namedEntities;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _videoType;
    NTPBWidgetEngagement *_widgetEngagement;
    _Bool _adSupportedChannel;
    _Bool _isDigitalReplicaAd;
    _Bool _isNativeAd;
    _Bool _isUserSubscribedToFeed;
    _Bool _isVideoInFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int countOfImagesExposed:1;
        unsigned int countOfImagesInGallery:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int galleryType:1;
        unsigned int mediaLocation:1;
        unsigned int mediaType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int videoType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isNativeAd:1;
        unsigned int isUserSubscribedToFeed:1;
        unsigned int isVideoInFeed:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(retain, nonatomic) NSString *galleryId; // @synthesize galleryId=_galleryId;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(nonatomic) _Bool isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) int countOfImagesInGallery; // @synthesize countOfImagesInGallery=_countOfImagesInGallery;
@property(nonatomic) int countOfImagesExposed; // @synthesize countOfImagesExposed=_countOfImagesExposed;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(nonatomic) _Bool isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property(nonatomic) _Bool isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIssueViewData;
@property(readonly, nonatomic) _Bool hasIssueExposureData;
@property(readonly, nonatomic) _Bool hasIssueData;
@property(readonly, nonatomic) _Bool hasIadNativeCampaignAd;
@property(readonly, nonatomic) _Bool hasIadNativeAd;
@property(readonly, nonatomic) _Bool hasIadNativeLine;
@property(readonly, nonatomic) _Bool hasIadNativeCampaign;
@property(readonly, nonatomic) _Bool hasGalleryId;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property(nonatomic) _Bool hasBackendArticleVersionInt64;
@property(nonatomic) _Bool hasPublisherArticleVersionInt64;
@property(nonatomic) _Bool hasIsNativeAd;
- (int)StringAsVideoType:(id)arg1;
- (id)videoTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasVideoType;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(nonatomic) _Bool hasCountOfImagesInGallery;
@property(nonatomic) _Bool hasCountOfImagesExposed;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
@property(nonatomic) _Bool hasIsVideoInFeed;
@property(nonatomic) _Bool hasMediaLocation;
@property(nonatomic) int mediaLocation; // @synthesize mediaLocation=_mediaLocation;
@property(nonatomic) _Bool hasIsDigitalReplicaAd;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
- (int)StringAsGalleryType:(id)arg1;
- (id)galleryTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGalleryType;
@property(nonatomic) int galleryType; // @synthesize galleryType=_galleryType;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasMediaId;
- (int)StringAsMediaType:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end

