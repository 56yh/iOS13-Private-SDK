//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSMutableArray, NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBWidgetEngagement;

@interface NTPBShareResult : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    NSString *_campaignId;
    NSString *_campaignType;
    NTPBChannelData *_channelData;
    int _characterCount;
    NSString *_contentId;
    int _contentType;
    NSString *_creativeId;
    NSString *_externalWeblinkUrl;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_groupFeedId;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NSString *_iosActivityType;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NSString *_language;
    NSMutableArray *_namedEntities;
    NSString *_nativeCampaignData;
    int _nextArticleAffordanceType;
    NSString *_nextArticleAffordanceTypeFeedId;
    NSString *_notificationId;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    int _resultType;
    NSString *_sectionHeadlineId;
    int _shareLocation;
    int _shareMethod;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _topStoryType;
    NTPBWidgetEngagement *_widgetEngagement;
    _Bool _fromNextArticleAffordanceTap;
    _Bool _isBreakingNewsArticle;
    _Bool _isCoverArticle;
    _Bool _isDigitalReplicaAd;
    _Bool _isFreeArticle;
    _Bool _isGroupedArticle;
    _Bool _isNativeAd;
    _Bool _isNotificationArticle;
    _Bool _isPaidSubscriberToSourceChannel;
    _Bool _isSearchResult;
    _Bool _isTopStoryArticle;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int characterCount:1;
        unsigned int contentType:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int nextArticleAffordanceType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int resultType:1;
        unsigned int shareLocation:1;
        unsigned int shareMethod:1;
        unsigned int topStoryType:1;
        unsigned int fromNextArticleAffordanceTap:1;
        unsigned int isBreakingNewsArticle:1;
        unsigned int isCoverArticle:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isFreeArticle:1;
        unsigned int isGroupedArticle:1;
        unsigned int isNativeAd:1;
        unsigned int isNotificationArticle:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int isSearchResult:1;
        unsigned int isTopStoryArticle:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
@property(retain, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property(nonatomic) _Bool isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(nonatomic) _Bool isSearchResult; // @synthesize isSearchResult=_isSearchResult;
@property(nonatomic) _Bool isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property(nonatomic) _Bool isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property(retain, nonatomic) NSString *nextArticleAffordanceTypeFeedId; // @synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId;
@property(nonatomic) _Bool fromNextArticleAffordanceTap; // @synthesize fromNextArticleAffordanceTap=_fromNextArticleAffordanceTap;
@property(nonatomic) _Bool isCoverArticle; // @synthesize isCoverArticle=_isCoverArticle;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(nonatomic) _Bool isNotificationArticle; // @synthesize isNotificationArticle=_isNotificationArticle;
@property(nonatomic) _Bool isFreeArticle; // @synthesize isFreeArticle=_isFreeArticle;
@property(nonatomic) _Bool isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(nonatomic) _Bool isGroupedArticle; // @synthesize isGroupedArticle=_isGroupedArticle;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(retain, nonatomic) NSString *externalWeblinkUrl; // @synthesize externalWeblinkUrl=_externalWeblinkUrl;
@property(nonatomic) _Bool isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *iosActivityType; // @synthesize iosActivityType=_iosActivityType;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasChannelData;
@property(readonly, nonatomic) _Bool hasIssueExposureData;
@property(readonly, nonatomic) _Bool hasIssueData;
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
@property(readonly, nonatomic) _Bool hasIadNativeCampaignAd;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasIadNativeAd;
@property(readonly, nonatomic) _Bool hasIadNativeLine;
@property(readonly, nonatomic) _Bool hasIadNativeCampaign;
@property(nonatomic) _Bool hasBackendArticleVersionInt64;
@property(nonatomic) _Bool hasPublisherArticleVersionInt64;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
@property(readonly, nonatomic) _Bool hasNativeCampaignData;
@property(nonatomic) _Bool hasIsNativeAd;
@property(nonatomic) _Bool hasIsSearchResult;
@property(nonatomic) _Bool hasIsTopStoryArticle;
- (int)StringAsTopStoryType:(id)arg1;
- (id)topStoryTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) _Bool hasIsBreakingNewsArticle;
@property(readonly, nonatomic) _Bool hasNextArticleAffordanceTypeFeedId;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNextArticleAffordanceType;
@property(nonatomic) int nextArticleAffordanceType; // @synthesize nextArticleAffordanceType=_nextArticleAffordanceType;
@property(nonatomic) _Bool hasFromNextArticleAffordanceTap;
@property(nonatomic) _Bool hasIsCoverArticle;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(readonly, nonatomic) _Bool hasNotificationId;
@property(nonatomic) _Bool hasIsNotificationArticle;
@property(nonatomic) _Bool hasIsFreeArticle;
@property(nonatomic) _Bool hasIsPaidSubscriberToSourceChannel;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) _Bool hasGroupFeedId;
@property(nonatomic) _Bool hasIsGroupedArticle;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
@property(readonly, nonatomic) _Bool hasExternalWeblinkUrl;
@property(nonatomic) _Bool hasIsDigitalReplicaAd;
@property(readonly, nonatomic) _Bool hasIosActivityType;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(nonatomic) _Bool hasCharacterCount;
@property(nonatomic) _Bool hasShareLocation;
@property(nonatomic) int shareLocation; // @synthesize shareLocation=_shareLocation;
@property(nonatomic) _Bool hasShareMethod;
@property(nonatomic) int shareMethod; // @synthesize shareMethod=_shareMethod;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasContentId;
- (int)StringAsContentType:(id)arg1;
- (id)contentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;

@end

