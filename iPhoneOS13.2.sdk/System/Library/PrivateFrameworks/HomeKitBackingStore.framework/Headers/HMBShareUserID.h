//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>



@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>
{
    CKRecordID *_userRecordID;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(readonly) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)initWithUserRecordID:(id)arg1;

@end

