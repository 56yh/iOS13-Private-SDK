//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>


@class ASCodableCloudKitRelationship, CKRecord, CKRecordID, NSArray, NSDate, NSSet, NSString, NSUUID;

@interface ASRelationship : NSObject <ASCloudKitCodable, NSCopying>
{
    _Bool _isFriendshipActive;
    _Bool _isMuteEnabled;
    _Bool _hasIncomingInviteRequest;
    _Bool _hasOutgoingInviteRequest;
    _Bool _isAwaitingInviteResponse;
    _Bool _hasIncomingCompetitionRequest;
    _Bool _hasOutgoingCompetitionRequest;
    _Bool _hasIgnoredCompetitionRequest;
    _Bool _isAwaitingCompetitionResponse;
    _Bool _isCompetitionActive;
    _Bool _hasCompletedCompetition;
    _Bool _isHidingActivityData;
    _Bool _sentInviteResponse;
    unsigned int _supportedPhoneFeatures;
    unsigned int _supportedWatchFeatures;
    long long _version;
    NSUUID *_UUID;
    NSString *_incomingHandshakeToken;
    NSString *_outgoingHandshakeToken;
    NSString *_cloudKitAddress;
    NSSet *_addresses;
    NSString *_preferredReachableAddress;
    NSString *_preferredReachableService;
    CKRecord *_systemFieldsOnlyRecord;
    CKRecordID *_relationshipShareID;
    CKRecordID *_remoteRelationshipShareID;
    CKRecordID *_remoteActivityDataShareID;
    NSArray *_relationshipEvents;
    NSDate *_dateForLatestOutgoingCompetitionRequest;
    NSDate *_dateForLatestIncomingCompetitionRequest;
    NSDate *_dateForLatestIgnoredCompetitionRequest;
    NSDate *_dateForLatestDataHidden;
    NSDate *_dateForLatestOutgoingInviteRequest;
    NSDate *_dateForLatestRelationshipStart;
    NSDate *_dateActivityDataInitiallyBecameVisible;
}

+ (id)relationshipsWithRelationshipAndEventRecords:(id)arg1;
+ (id)relationshipWithCodableRelationship:(id)arg1 version:(long long)arg2;
+ (void)_relationshipWithRecord:(id)arg1 relationshipEventRecords:(id)arg2 completion:(id /* block */)arg3;
+ (id)relationshipWithCodableRelationshipContainer:(id)arg1;
@property(nonatomic) _Bool sentInviteResponse; // @synthesize sentInviteResponse=_sentInviteResponse;
@property(retain, nonatomic) NSDate *dateActivityDataInitiallyBecameVisible; // @synthesize dateActivityDataInitiallyBecameVisible=_dateActivityDataInitiallyBecameVisible;
@property(retain, nonatomic) NSDate *dateForLatestRelationshipStart; // @synthesize dateForLatestRelationshipStart=_dateForLatestRelationshipStart;
@property(retain, nonatomic) NSDate *dateForLatestOutgoingInviteRequest; // @synthesize dateForLatestOutgoingInviteRequest=_dateForLatestOutgoingInviteRequest;
@property(retain, nonatomic) NSDate *dateForLatestDataHidden; // @synthesize dateForLatestDataHidden=_dateForLatestDataHidden;
@property(readonly, nonatomic) _Bool isHidingActivityData; // @synthesize isHidingActivityData=_isHidingActivityData;
@property(retain, nonatomic) NSDate *dateForLatestIgnoredCompetitionRequest; // @synthesize dateForLatestIgnoredCompetitionRequest=_dateForLatestIgnoredCompetitionRequest;
@property(retain, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest; // @synthesize dateForLatestIncomingCompetitionRequest=_dateForLatestIncomingCompetitionRequest;
@property(retain, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest; // @synthesize dateForLatestOutgoingCompetitionRequest=_dateForLatestOutgoingCompetitionRequest;
@property(nonatomic) _Bool hasCompletedCompetition; // @synthesize hasCompletedCompetition=_hasCompletedCompetition;
@property(nonatomic) _Bool isCompetitionActive; // @synthesize isCompetitionActive=_isCompetitionActive;
@property(nonatomic) _Bool isAwaitingCompetitionResponse; // @synthesize isAwaitingCompetitionResponse=_isAwaitingCompetitionResponse;
@property(nonatomic) _Bool hasIgnoredCompetitionRequest; // @synthesize hasIgnoredCompetitionRequest=_hasIgnoredCompetitionRequest;
@property(nonatomic) _Bool hasOutgoingCompetitionRequest; // @synthesize hasOutgoingCompetitionRequest=_hasOutgoingCompetitionRequest;
@property(nonatomic) _Bool hasIncomingCompetitionRequest; // @synthesize hasIncomingCompetitionRequest=_hasIncomingCompetitionRequest;
@property(nonatomic) _Bool isAwaitingInviteResponse; // @synthesize isAwaitingInviteResponse=_isAwaitingInviteResponse;
@property(nonatomic) _Bool hasOutgoingInviteRequest; // @synthesize hasOutgoingInviteRequest=_hasOutgoingInviteRequest;
@property(nonatomic) _Bool hasIncomingInviteRequest; // @synthesize hasIncomingInviteRequest=_hasIncomingInviteRequest;
@property(nonatomic) _Bool isMuteEnabled; // @synthesize isMuteEnabled=_isMuteEnabled;
@property(nonatomic) _Bool isFriendshipActive; // @synthesize isFriendshipActive=_isFriendshipActive;
@property(nonatomic) unsigned int supportedWatchFeatures; // @synthesize supportedWatchFeatures=_supportedWatchFeatures;
@property(nonatomic) unsigned int supportedPhoneFeatures; // @synthesize supportedPhoneFeatures=_supportedPhoneFeatures;
@property(copy, nonatomic) NSArray *relationshipEvents; // @synthesize relationshipEvents=_relationshipEvents;
@property(retain, nonatomic) CKRecordID *remoteActivityDataShareID; // @synthesize remoteActivityDataShareID=_remoteActivityDataShareID;
@property(retain, nonatomic) CKRecordID *remoteRelationshipShareID; // @synthesize remoteRelationshipShareID=_remoteRelationshipShareID;
@property(retain, nonatomic) CKRecordID *relationshipShareID; // @synthesize relationshipShareID=_relationshipShareID;
@property(retain, nonatomic) CKRecord *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property(retain, nonatomic) NSString *preferredReachableService; // @synthesize preferredReachableService=_preferredReachableService;
@property(retain, nonatomic) NSString *preferredReachableAddress; // @synthesize preferredReachableAddress=_preferredReachableAddress;
@property(retain, nonatomic) NSSet *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSString *cloudKitAddress; // @synthesize cloudKitAddress=_cloudKitAddress;
@property(retain, nonatomic) NSString *outgoingHandshakeToken; // @synthesize outgoingHandshakeToken=_outgoingHandshakeToken;
@property(retain, nonatomic) NSString *incomingHandshakeToken; // @synthesize incomingHandshakeToken=_incomingHandshakeToken;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void)_updateCurrentRelationshipState;
- (void)_updateDateFriendshipBeganWithDate:(id)arg1;
- (void)_updateDateActivityDataBecameVisibleWithDate:(id)arg1;
- (void)_clearRelationshipState;
- (unsigned long long)_nextAnchor;
- (void)_setRelationshipEvents:(id)arg1;
- (_Bool)supportsCompetitions;
@property(readonly, nonatomic) unsigned long long currentRelationshipEventAnchor;
- (void)traverseRelationshipHistoryStartingAtEventWithAnchor:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)relationshipSnapshotForDate:(id)arg1;
@property(readonly, nonatomic) NSDate *timestampForMostRecentRelationshipEvent;
- (void)insertEvents:(id)arg1;
- (void)insertEventWithType:(unsigned short)arg1;
@property(readonly, nonatomic) _Bool isActivityDataVisible;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToRelationship:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) ASCodableCloudKitRelationship *codableRelationship;
- (id)recordWithZoneID:(id)arg1;
- (id)codableRelationshipContainerIncludingCloudKitFields:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

