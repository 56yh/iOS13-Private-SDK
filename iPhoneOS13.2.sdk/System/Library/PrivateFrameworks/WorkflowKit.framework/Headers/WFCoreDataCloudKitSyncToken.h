//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSData, NSDate, NSString;

@interface WFCoreDataCloudKitSyncToken : NSManagedObject <WFRecordStorage>
{
}

+ (id)fetchRequest;
- (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *account; // @dynamic account;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSData *lastOrderingData; // @dynamic lastOrderingData;
@property(retain, nonatomic) NSData *serverChangeTokenData; // @dynamic serverChangeTokenData;
@property(readonly) Class superclass;

@end

