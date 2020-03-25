//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>

@class ECMessageFlags, NSArray, NSDate, NSNumber, NSString;
@protocol EMCollectionItemID, EMMessageListItemChangeFlagColors, EMMessageListItemChangeSubject, EMMessageListItemChangeSummary;

@interface EMMessageListItemChange : NSObject <EFPubliclyDescribable, NSSecureCoding>
{
    NSArray *_mailboxObjectIDs;
    NSArray *_mailboxes;
    BOOL _isToMe;
    BOOL _isCCMe;
    NSDate *_date;
    id <EMMessageListItemChangeSubject> _subject;
    id <EMMessageListItemChangeSummary> _summary;
    NSArray *_senderList;
    NSArray *_toList;
    NSArray *_ccList;
    ECMessageFlags *_flags;
    NSNumber *_hasUnflagged;
    id <EMMessageListItemChangeFlagColors> _flagColors;
    NSNumber *_isVIP;
    NSNumber *_isBlocked;
    NSNumber *_hasAttachments;
    NSNumber *_conversationNotificationLevel;
    NSNumber *_count;
    NSNumber *_conversationID;
    id <EMCollectionItemID> _displayMessageItemID;
}

+ (BOOL)supportsSecureCoding;
+ (id)changesForKeyPaths:(id)arg1 ofItems:(id)arg2;
+ (id)changeForKeyPaths:(id)arg1 ofItem:(id)arg2;
+ (id)changeFrom:(id)arg1 to:(id)arg2;
@property(retain, nonatomic) id <EMCollectionItemID> displayMessageItemID; // @synthesize displayMessageItemID=_displayMessageItemID;
@property(retain, nonatomic) NSNumber *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *conversationNotificationLevel; // @synthesize conversationNotificationLevel=_conversationNotificationLevel;
@property(retain, nonatomic) NSNumber *hasAttachments; // @synthesize hasAttachments=_hasAttachments;
@property(retain, nonatomic) NSNumber *isBlocked; // @synthesize isBlocked=_isBlocked;
@property(retain, nonatomic) NSNumber *isVIP; // @synthesize isVIP=_isVIP;
@property(copy, nonatomic) id <EMMessageListItemChangeFlagColors> flagColors; // @synthesize flagColors=_flagColors;
@property(retain, nonatomic) NSNumber *hasUnflagged; // @synthesize hasUnflagged=_hasUnflagged;
@property(retain, nonatomic) ECMessageFlags *flags; // @synthesize flags=_flags;
@property BOOL isCCMe; // @synthesize isCCMe=_isCCMe;
@property BOOL isToMe; // @synthesize isToMe=_isToMe;
@property(copy, nonatomic) NSArray *ccList; // @synthesize ccList=_ccList;
@property(copy, nonatomic) NSArray *toList; // @synthesize toList=_toList;
@property(copy, nonatomic) NSArray *senderList; // @synthesize senderList=_senderList;
@property(copy, nonatomic) id <EMMessageListItemChangeSummary> summary; // @synthesize summary=_summary;
@property(retain, nonatomic) id <EMMessageListItemChangeSubject> subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)applyToMessageListItem:(id)arg1;
- (void)addChange:(id)arg1;
@property(copy, nonatomic) NSArray *mailboxes;
@property(copy, nonatomic) NSArray *mailboxObjectIDs;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)_changeDescriptionsForInternal:(BOOL)arg1 useDebugDescriptions:(BOOL)arg2;
- (id)_descriptionForInternal:(BOOL)arg1 useDebugDescriptions:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;

@end
