//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface CRRecentContact : NSObject <NSSecureCoding>
{
    NSMutableArray *_recentDates;
    long long _contactID;
    NSString *_recentsDomain;
    NSString *_displayName;
    NSString *_kind;
    NSString *_address;
    NSString *_lastSendingAddress;
    NSString *_originalSource;
    NSDictionary *_metadata;
    NSNumber *_weight;
    NSNumber *_decayedWeight;
    NSArray *_members;
    unsigned long long _groupKind;
    long long _recentID;
    NSString *_groupName;
    NSString *_rawAddress;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) long long recentID; // @synthesize recentID=_recentID;
@property(nonatomic) unsigned long long groupKind; // @synthesize groupKind=_groupKind;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) NSNumber *decayedWeight; // @synthesize decayedWeight=_decayedWeight;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *originalSource; // @synthesize originalSource=_originalSource;
@property(copy, nonatomic) NSString *lastSendingAddress; // @synthesize lastSendingAddress=_lastSendingAddress;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *recentsDomain; // @synthesize recentsDomain=_recentsDomain;
@property(nonatomic) long long contactID; // @synthesize contactID=_contactID;
- (id)archivableGroupKind;
- (void)setArchivableGroupKind:(id)arg1;
- (id)archivableMetadata;
- (void)setArchivableMetadata:(id)arg1;
- (id)archivableGroupMembers;
- (void)setArchivableGroupMembers:(id)arg1;
- (id)archivableContactID;
- (void)setArchivableContactID:(id)arg1;
- (id)archivableRecentID;
- (void)setArchivableRecentID:(id)arg1;
- (void)enumerateArchivablePropertiesWithBlock:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(_Bool)arg3;
- (unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(_Bool *)arg2;
- (void)lazilyCreateRecentDates;
- (void)recordRecentEventForDate:(id)arg1 userInitiated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *recentDates;
@property(readonly, copy, nonatomic) NSDate *leastRecentDate;
@property(readonly, copy, nonatomic) NSDate *mostRecentDate;
@property(readonly, nonatomic) unsigned long long countOfRecents;
- (void)applyWeight:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasFullTextMatch:(id)arg1;
- (void)_enumerateWordsInString:(id)arg1 usingBlock:(id /* block */)arg2;
- (struct __CFStringTokenizer *)_wordTokenizerForString:(id)arg1 locale:(id)arg2;
@property(readonly, nonatomic, getter=isGroup) _Bool group;
- (id)description;
- (void)dealloc;
- (id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5;
- (id)initWithContactID:(long long)arg1;

@end

