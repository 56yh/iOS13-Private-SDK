//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKComposition, CKEntity, IMChat, IMService, NSArray, NSAttributedString, NSDate, NSNumber, NSSet, NSString;

@interface CKConversation : NSObject
{
    NSArray *_recipients;
    NSString *_name;
    IMChat *_chat;
    unsigned int _limitToLoad;
    struct {
        unsigned int ignoringTypingUpdates:1;
    } _conversationFlags;
    _Bool _needsReload;
    _Bool _hasLoadedAllMessages;
    _Bool _isReportedAsSpam;
    int _wasDetectedAsSMSSpam;
    int _wasDetectedAsiMessageSpam;
    NSArray *_pendingHandles;
    NSString *_selectedLastAddressedHandle;
    NSString *_selectedLastAddressedSIMID;
    NSSet *_pendingRecipients;
    NSAttributedString *_groupName;
    NSString *_previewText;
    NSNumber *_businessConversation;
    NSDate *_dateLastViewed;
}

+ (_Bool)isSMSSpamFilteringEnabled;
+ (_Bool)pinnedConversationsEnabled;
+ (id)conversationForAddresses:(id)arg1 allowRetargeting:(_Bool)arg2 candidateConversation:(id)arg3;
+ (id)newPendingConversation;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(_Bool)arg1;
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;
+ (_Bool)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 currentService:(id)arg4 forceSMS:(_Bool)arg5 error:(id *)arg6;
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(long long *)arg2;
+ (long long)_iMessage_maxAttachmentCount;
+ (_Bool)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (_Bool)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (id)_sms_localizedErrorForReason:(long long)arg1;
+ (_Bool)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 error:(id *)arg4;
+ (_Bool)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4;
+ (_Bool)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
+ (_Bool)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 phoneNumber:(id)arg2 simID:(id)arg3 errorCode:(long long *)arg4;
+ (long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)_sms_mediaObjectPassesRestriction:(id)arg1;
@property(retain, nonatomic) NSDate *dateLastViewed; // @synthesize dateLastViewed=_dateLastViewed;
@property(retain, nonatomic) NSNumber *businessConversation; // @synthesize businessConversation=_businessConversation;
@property(nonatomic) _Bool isReportedAsSpam; // @synthesize isReportedAsSpam=_isReportedAsSpam;
@property(nonatomic) _Bool hasLoadedAllMessages; // @synthesize hasLoadedAllMessages=_hasLoadedAllMessages;
@property(copy, nonatomic) NSString *previewText; // @synthesize previewText=_previewText;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) NSAttributedString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSSet *pendingRecipients; // @synthesize pendingRecipients=_pendingRecipients;
@property(retain, nonatomic) NSString *selectedLastAddressedSIMID; // @synthesize selectedLastAddressedSIMID=_selectedLastAddressedSIMID;
@property(retain, nonatomic) NSString *selectedLastAddressedHandle; // @synthesize selectedLastAddressedHandle=_selectedLastAddressedHandle;
@property(readonly, nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) unsigned int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(copy, nonatomic) NSArray *pendingHandles; // @synthesize pendingHandles=_pendingHandles;
- (id)copyForPendingConversation;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (id)_nameForHandle:(id)arg1;
@property(readonly, nonatomic) NSString *serviceDisplayName;
- (BOOL)outgoingBubbleColor;
@property(readonly, nonatomic) BOOL buttonColor;
@property(nonatomic, getter=isPinned) _Bool pinned;
@property(readonly, nonatomic) _Bool isPreviewTextForAttachment;
- (id)fastPreviewTextIgnoringPluginContent;
@property(nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
- (void)fetchSuggestedNameIfNecessary;
@property(readonly, nonatomic) unsigned long long disclosureAtomStyle; // @dynamic disclosureAtomStyle;
@property(readonly, nonatomic) _Bool shouldShowCharacterCount;
@property(readonly, copy, nonatomic) NSString *senderIdentifier;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)updateUserActivity;
@property(nonatomic) _Bool localUserIsRecording;
@property(nonatomic) _Bool localUserIsTyping;
@property(copy, nonatomic) NSString *localUserIsComposing;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2;
- (_Bool)_chatSupportsTypingIndicators;
- (void)sendMessage:(id)arg1 newComposition:(_Bool)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(_Bool)arg3;
- (id)messagesFromComposition:(id)arg1;
- (id)messageWithComposition:(id)arg1;
- (void)resortMessagesIfNecessary;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (_Bool)canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;
- (_Bool)canSendComposition:(id)arg1 error:(id *)arg2;
- (_Bool)_allowedByScreenTime;
- (_Bool)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, copy, nonatomic) NSArray *recipientStrings;
@property(readonly, copy, nonatomic) NSArray *pendingEntities; // @dynamic pendingEntities;
- (void)setPendingComposeRecipients:(id)arg1;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)shortDescription;
- (id)description;
- (_Bool)isPlaceholder;
- (void)updateLastViewedDate;
- (void)markAllMessagesAsRead;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (_Bool)hasLoadedFromSpotlight;
- (void)clearConversationLoadFromSpotlight;
- (id)ensureMessageWithGUIDIsLoaded:(id)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(_Bool)arg2;
- (void)loadMoreMessages;
- (void)loadFrequentReplies;
@property(readonly, nonatomic) NSArray *frequentReplies;
- (void)loadMoreMessagesAfterLastMessage;
- (void)loadMoreMessagesBeforeFirstMessage;
- (void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1;
- (void)loadAllMessages;
- (_Bool)_earlyReturnHistoryLoad;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)deleteAllMessages;
- (void)_deleteAllMessagesAndRemoveGroup:(_Bool)arg1;
- (id)date;
@property(readonly, nonatomic) _Bool isToEmailAddress;
@property(readonly, nonatomic) unsigned long long recipientCount;
- (id)uniqueIdentifier;
@property(readonly, nonatomic) int wasDetectedAsSMSSpam; // @synthesize wasDetectedAsSMSSpam=_wasDetectedAsSMSSpam;
@property(readonly, nonatomic) int wasDetectedAsiMessageSpam; // @synthesize wasDetectedAsiMessageSpam=_wasDetectedAsiMessageSpam;
@property(readonly, nonatomic) int wasDetectedAsSpam;
@property(readonly, nonatomic) NSString *deviceIndependentID;
@property(readonly, nonatomic) NSString *groupID; // @dynamic groupID;
- (_Bool)noAvailableServices;
- (BOOL)sendButtonColor;
- (void)_chatPropertiesChanged:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (_Bool)_handleIsForThisConversation:(id)arg1;
@property(readonly, nonatomic) IMService *sendingService;
- (void)refreshServiceForSending;
- (id)orderedContactsWithMaxCount:(unsigned long long)arg1 keysToFetch:(id)arg2;
- (id)orderedContactsForAvatar3DTouchUIWithKeysToFetch:(id)arg1;
- (id)orderedContactsForAvatarView;
- (void)updateDisplayNameIfSMSSpam;
- (void)removeRecipientHandles:(id)arg1;
- (void)addRecipientHandles:(id)arg1;
- (void)setSendReadReceipts:(_Bool)arg1;
@property(readonly, nonatomic, getter=shouldSendReadReceipts) _Bool sendReadReceipts;
- (void)setMutedUntilDate:(id)arg1;
- (void)unmute;
- (_Bool)hasReplyEnabled;
- (_Bool)hasVerifiedBusiness;
- (_Bool)isMakoConversation;
- (_Bool)isAppleConversation;
- (_Bool)isBusinessConversation;
@property(readonly, nonatomic, getter=isMuted) _Bool muted;
- (_Bool)canInsertMoreRecipients;
- (long long)maximumRecipientsForSendingService;
@property(readonly, nonatomic) _Bool supportsMutatingGroupMembers;
@property(readonly, nonatomic, getter=hasLeftGroupChat) _Bool leftGroupChat;
@property(readonly, nonatomic, getter=hasLeft) _Bool left;
@property(readonly, nonatomic) _Bool canLeave;
@property(readonly, nonatomic, getter=isGroupConversation) _Bool groupConversation;
@property(nonatomic) _Bool forceMMS; // @dynamic forceMMS;
@property(nonatomic, getter=isIgnoringTypingUpdates) _Bool ignoringTypingUpdates; // @dynamic ignoringTypingUpdates;
- (_Bool)isDowngraded;
@property(retain, nonatomic) CKComposition *unsentComposition; // @dynamic unsentComposition;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)acceptTransfer:(id)arg1;
@property(readonly, nonatomic) CKEntity *recipient; // @dynamic recipient;
- (_Bool)containsHandleWithUID:(id)arg1;
@property(readonly, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly, nonatomic) _Bool hasUnreadMessages; // @dynamic hasUnreadMessages;
@property(readonly, nonatomic) unsigned long long unreadCount; // @dynamic unreadCount;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)resetCaches;
- (void)resetNameCaches;
@property(readonly, nonatomic) NSString *lastAddressedSIMID;
@property(readonly, nonatomic) NSString *lastAddressedHandle;
- (void)didBecomeActive;
- (void)willBecomeInactive;
- (id)initWithChat:(id)arg1;
- (id)init;
- (void)dealloc;
- (_Bool)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;
- (_Bool)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (_Bool)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;
- (_Bool)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (_Bool)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (_Bool)supportsSurf;

@end

