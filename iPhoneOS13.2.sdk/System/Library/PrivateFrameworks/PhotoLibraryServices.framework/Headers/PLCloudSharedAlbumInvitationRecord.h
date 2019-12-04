//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSArray, NSDate, NSNumber, NSString, PLCloudSharedAlbum;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject
{
}

+ (id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7;
+ (id)entityName;
- (id)invitationStateDescription;
- (void)setInviteeEmails:(id)arg1 phones:(id)arg2;
@property(readonly, nonatomic) __weak NSArray *inviteePhones;
@property(readonly, nonatomic) __weak NSArray *inviteeEmails;
- (id)inviteeDisplayNameIncludingEmail:(_Bool)arg1;
- (void)delete;
- (void)prepareForDeletion;
- (void)willSave;
- (void)awakeFromInsert;
- (id)init;

// Remaining properties
@property(retain, nonatomic) PLCloudSharedAlbum *album; // @dynamic album;
@property(retain, nonatomic) NSString *albumGUID; // @dynamic albumGUID;
@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property(retain, nonatomic) NSNumber *invitationState; // @dynamic invitationState;
@property(retain, nonatomic) NSNumber *invitationStateLocal; // @dynamic invitationStateLocal;
@property(retain, nonatomic) NSNumber *inviteeEmailKey; // @dynamic inviteeEmailKey;
@property(retain, nonatomic) NSString *inviteeFirstName; // @dynamic inviteeFirstName;
@property(retain, nonatomic) NSString *inviteeFullName; // @dynamic inviteeFullName;
@property(retain, nonatomic) NSString *inviteeHashedPersonID; // @dynamic inviteeHashedPersonID;
@property(retain, nonatomic) NSString *inviteeLastName; // @dynamic inviteeLastName;
@property(retain, nonatomic) NSDate *inviteeSubscriptionDate; // @dynamic inviteeSubscriptionDate;
@property(nonatomic) _Bool isMine; // @dynamic isMine;

@end

