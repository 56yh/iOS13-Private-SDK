//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSSet, REMNSPersistentHistoryChangeTombstone, REMObjectID;

@interface _REMNSPersistentHistoryChangeStorage : NSObject <NSSecureCoding>
{
    long long _changeID;
    REMObjectID *_changedObjectID;
    long long _changeType;
    REMNSPersistentHistoryChangeTombstone *_tombstone;
    NSSet *_updatedProperties;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSSet *updatedProperties; // @synthesize updatedProperties=_updatedProperties;
@property(copy, nonatomic) REMNSPersistentHistoryChangeTombstone *tombstone; // @synthesize tombstone=_tombstone;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) REMObjectID *changedObjectID; // @synthesize changedObjectID=_changedObjectID;
@property(nonatomic) long long changeID; // @synthesize changeID=_changeID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

