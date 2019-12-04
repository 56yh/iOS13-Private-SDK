//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <NotesShared/ICLoggable-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken, ICAccount, NSData, NSString;

@interface ICServerChangeToken : NSManagedObject <ICLoggable>
{
    CKRecordZoneID *_zoneID;
    CKServerChangeToken *_ckServerChangeToken;
}

+ (id)serverChangeTokensMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)serverChangeTokenForAccount:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 context:(id)arg4;
+ (id)addServerChangeTokenForAccount:(id)arg1 ckServerChangeToken:(id)arg2 zoneID:(id)arg3 databaseScope:(long long)arg4 context:(id)arg5;
- (id)ic_loggingValues;
@property(readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void)didTurnIntoFault;
@property(nonatomic) long long databaseScope; // @dynamic databaseScope;
@property(retain, nonatomic) CKServerChangeToken *ckServerChangeToken; // @synthesize ckServerChangeToken=_ckServerChangeToken;

// Remaining properties
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
@property(retain, nonatomic) NSData *ckServerChangeTokenData; // @dynamic ckServerChangeTokenData;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(retain, nonatomic) NSString *ownerName; // @dynamic ownerName;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *zoneName; // @dynamic zoneName;

@end

