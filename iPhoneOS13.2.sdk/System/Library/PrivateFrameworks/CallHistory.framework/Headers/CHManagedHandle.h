//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CHHandle, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CHManagedHandle : NSManagedObject
{
}

+ (id)managedHandlesForHandles:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)managedHandleForHandle:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) CHHandle *chHandle;

// Remaining properties
@property(retain, nonatomic) NSSet *localParticipantCalls; // @dynamic localParticipantCalls;
@property(copy, nonatomic) NSString *normalizedValue; // @dynamic normalizedValue;
@property(retain, nonatomic) NSSet *remoteParticipantCalls; // @dynamic remoteParticipantCalls;
@property(nonatomic) short type; // @dynamic type;
@property(retain, nonatomic) NSString *value; // @dynamic value;

@end

