//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCReorderableTagSubscription-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface FCSubscription : NSObject <FCReorderableTagSubscription>
{
    _Bool _notificationsEnabled;
    _Bool _canRetry;
    NSString *_subscriptionID;
    unsigned long long _subscriptionType;
    NSNumber *_order;
    NSDate *_dateAdded;
    unsigned long long _zone;
    unsigned long long _subscriptionOrigin;
    NSString *_tagID;
    NSString *_groupID;
    NSURL *_url;
    NSString *_title;
    NSURL *_pollingURL;
    NSString *_errorMessage;
}

+ (id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
+ (id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 type:(unsigned long long)arg3 order:(id)arg4 origin:(unsigned long long)arg5 groupID:(id)arg6 dateAdded:(id)arg7 notificationsEnabled:(_Bool)arg8 zone:(unsigned long long)arg9;
+ (id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2;
@property(readonly, nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSURL *pollingURL; // @synthesize pollingURL=_pollingURL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(readonly, nonatomic) unsigned long long subscriptionOrigin; // @synthesize subscriptionOrigin=_subscriptionOrigin;
@property(readonly, nonatomic) unsigned long long zone; // @synthesize zone=_zone;
@property(readonly, nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(readonly, copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, copy, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(readonly, nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(readonly, copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
- (id)copyWithOrder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)asReorderableTagSubscription;
- (id)asCKRecord;
- (long long)comparePriority:(id)arg1;
- (unsigned long long)priority;
- (_Bool)isDeprecated;
- (_Bool)isTypeIgnoredTag;
- (_Bool)isTypeGroupableTag;
- (_Bool)isTypeAutoFavoriteTag;
- (_Bool)isTypeMutedTag;
- (_Bool)isTypeTag;
- (_Bool)isTypePending;
- (id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
- (id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4 subscriptionType:(unsigned long long)arg5 order:(id)arg6 origin:(unsigned long long)arg7 notificationsEnabled:(_Bool)arg8 zone:(unsigned long long)arg9;
- (id)dictionaryRepresentation;

@end

