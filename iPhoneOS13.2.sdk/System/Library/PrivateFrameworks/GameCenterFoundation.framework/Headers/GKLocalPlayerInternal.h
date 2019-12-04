//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
    unsigned long long _loginStatus;
}

+ (id)secureCodedPropertyKeys;
+ (_Bool)supportsSecureCoding;
@property unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (unsigned short)numberOfChallenges;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (unsigned short)numberOfTurns;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (unsigned short)numberOfRequests;
- (id)iCloudUserID;
- (void)setFacebookUserID:(id)arg1;
- (id)facebookUserID;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (int)defaultFamiliarity;
- (void)setICloudUserID:(id)arg1;
- (_Bool)isFriend;
- (_Bool)isLocalPlayer;
- (void)setPhotoPending:(_Bool)arg1;
- (_Bool)isPhotoPending;
- (void)setFindable:(_Bool)arg1;
- (_Bool)isFindable;
- (void)setUnderage:(_Bool)arg1;
- (_Bool)isUnderage;
- (void)setDefaultNickname:(_Bool)arg1;
- (_Bool)isDefaultNickname;
- (void)setPurpleBuddyAccount:(_Bool)arg1;
- (_Bool)isPurpleBuddyAccount;
- (id)minimalInternal;
- (void)dealloc;

@end

