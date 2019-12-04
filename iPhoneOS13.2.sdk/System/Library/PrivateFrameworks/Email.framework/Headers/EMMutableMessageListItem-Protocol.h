//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMMessageListItem-Protocol.h>

@class ECMessageFlags, ECSubject, NSArray, NSDate, NSIndexSet, NSString;
@protocol EMCollectionItemID;

@protocol EMMutableMessageListItem <EMMessageListItem>
@property long long _internalID;
@property(retain) id <EMCollectionItemID> displayMessageItemID;
@property(copy) NSArray *mailboxes;
@property(copy) NSArray *mailboxObjectIDs;
@property long long conversationID;
@property unsigned long long count;
@property long long conversationNotificationLevel;
@property _Bool hasAttachments;
@property _Bool isBlocked;
@property _Bool isVIP;
@property(copy) NSIndexSet *flagColors;
@property _Bool hasUnflagged;
@property(retain) ECMessageFlags *flags;
@property _Bool isCCMe;
@property _Bool isToMe;
@property(copy) NSArray *ccList;
@property(copy) NSArray *toList;
@property(copy) NSArray *senderList;
@property(copy) NSString *summary;
@property(retain) ECSubject *subject;
@property(retain) NSDate *date;
@end

