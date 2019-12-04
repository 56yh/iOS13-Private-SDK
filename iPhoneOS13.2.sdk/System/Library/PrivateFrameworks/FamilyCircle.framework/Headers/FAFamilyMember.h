//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSDictionary, NSNumber, NSString;

@interface FAFamilyMember : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionary;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(_Bool)arg2 completionHandler:(id /* block */)arg3;
@property(readonly, nonatomic) _Bool hasLinkediTunesAccount;
@property(readonly, copy, nonatomic) NSString *iTunesAccountUsername;
@property(readonly, nonatomic) NSNumber *iTunesAccountDSID;
@property(readonly, nonatomic) _Bool hasAskToBuyEnabled;
@property(readonly, nonatomic) _Bool isOrganizer;
@property(readonly, nonatomic) _Bool isParent;
@property(readonly, nonatomic) _Bool hasParentalControlsEnabled;
@property(readonly, nonatomic) _Bool isChildAccount;
@property(readonly, copy, nonatomic) NSString *inviteEmail;
@property(readonly, copy, nonatomic) NSString *statusString;
@property(readonly, copy, nonatomic) NSDate *joinedDate;
@property(readonly, nonatomic) long long memberType;
@property(readonly, copy, nonatomic) NSString *memberTypeString;
@property(readonly, copy, nonatomic) NSString *memberTypeDisplayString;
@property(readonly, nonatomic) unsigned long long age;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
@property(readonly, copy, nonatomic) NSString *altDSID;
@property(readonly, copy, nonatomic) NSString *hashedDSID;
@property(readonly, copy, nonatomic) NSNumber *dsid;
@property(readonly, copy, nonatomic) NSString *appleID;
@property(readonly, nonatomic) _Bool isMe;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

