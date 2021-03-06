//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomePresenceCheck-Protocol.h>

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>
{
    NSDictionary *_userPresenceMap;
}

@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
// - (void).cxx_destruct;
- (BOOL)isAnyUserAtHome;
- (BOOL)isNoUserAtHome;
- (BOOL)areUsersNotAtHome:(id)arg1;
- (BOOL)areUsersAtHome:(id)arg1;
- (BOOL)isUserNotAtHome:(id)arg1;
- (BOOL)isUserAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithPresenceByPairingIdentity:(id)arg1;
- (id)initWithPresenceByUserId:(id)arg1;

@end

