//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class FCFeedRange, NSData, NSDate, NSNumber, NSSet;

@interface FCFDBFeedSegment : NSManagedObject
{
}

- (id)description;
@property(readonly, nonatomic) FCFeedRange *feedRange;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;

// Remaining properties
@property(nonatomic) unsigned long long bottom; // @dynamic bottom;
@property(retain, nonatomic) NSData *ckCursor; // @dynamic ckCursor;
@property(retain, nonatomic) NSNumber *feedItemCount; // @dynamic feedItemCount;
@property(retain, nonatomic) NSSet *feedItemIndexes; // @dynamic feedItemIndexes;
@property(retain, nonatomic) NSDate *lastAccessDate; // @dynamic lastAccessDate;
@property(nonatomic) unsigned long long top; // @dynamic top;

@end

