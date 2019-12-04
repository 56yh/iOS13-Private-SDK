//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString, NSUUID;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _groupID;
    NSUUID *_organizationUUID;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
@property(readonly, nonatomic) unsigned short groupID; // @synthesize groupID=_groupID;
@property(readonly, copy, nonatomic) NSUUID *organizationUUID; // @synthesize organizationUUID=_organizationUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToGroupIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithString:(id)arg1;
- (id)init;

@end

