//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>



@class NSArray;

@interface REMListsDataViewInvocation_fetchByObjectIDs : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_objectIDs;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;

@end

