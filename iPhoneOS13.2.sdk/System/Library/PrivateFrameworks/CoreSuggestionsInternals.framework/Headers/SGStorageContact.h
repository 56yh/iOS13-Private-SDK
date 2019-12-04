//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, SGContactDetailsHolder, SGRecordId;

@interface SGStorageContact : NSObject
{
    NSMutableSet *_profiles;
    long long _masterEntityId;
    SGRecordId *_recordId;
    SGContactDetailsHolder *_internalDetectedDetails;
}

+ (void)subtractDetailsFromSGContact:(id)arg1 thatMatchCNContact:(id)arg2;
+ (id)mergeAll:(id)arg1;
+ (id)contactWithMasterEntityId:(long long)arg1;
+ (id)contactFromContactEntity:(id)arg1;
@property(retain) SGContactDetailsHolder *internalDetectedDetails; // @synthesize internalDetectedDetails=_internalDetectedDetails;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) long long masterEntityId; // @synthesize masterEntityId=_masterEntityId;
- (_Bool)hasProfileFromTextMessage;
- (_Bool)hasProfileFromInteraction;
- (id)bestProfile;
- (id)convertToContact:(id)arg1 sourceEntity:(id)arg2 enrichments:(id)arg3;
- (id)convertToContact:(id)arg1;
- (id)loadBirthdayDetailsFrom:(id)arg1;
- (id)loadEmailAddressDetailsFrom:(id)arg1;
- (id)loadAddressDetailsFrom:(id)arg1;
- (id)loadPhoneDetailsFrom:(id)arg1;
- (id)loadAllDetailsFrom:(id)arg1;
- (void)reload;
- (void)merge:(id)arg1;
- (_Bool)canMerge:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)allNames;
- (id)profiles;
- (void)addProfile:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToStorageContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

