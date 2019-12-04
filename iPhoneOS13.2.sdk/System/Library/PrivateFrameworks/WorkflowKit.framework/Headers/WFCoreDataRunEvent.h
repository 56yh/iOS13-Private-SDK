//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSDate, NSString, WFCoreDataTrigger;

@interface WFCoreDataRunEvent : NSManagedObject <WFRecordStorage>
{
}

+ (id)fetchRequest;
- (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) int outcome; // @dynamic outcome;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(readonly) Class superclass;
@property(retain, nonatomic) WFCoreDataTrigger *trigger; // @dynamic trigger;

@end

