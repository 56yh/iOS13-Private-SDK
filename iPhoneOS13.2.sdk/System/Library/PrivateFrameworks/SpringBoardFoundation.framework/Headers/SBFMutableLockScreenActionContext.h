//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFLockScreenActionContext.h>

@class NSString;

@interface SBFMutableLockScreenActionContext : SBFLockScreenActionContext
{
}


// Remaining properties
@property(copy, nonatomic) id /* block */ action; // @dynamic action;
@property(nonatomic) _Bool canBypassPinLock; // @dynamic canBypassPinLock;
@property(nonatomic) _Bool confirmedNotInPocket; // @dynamic confirmedNotInPocket;
@property(nonatomic) _Bool deactivateAwayController; // @dynamic deactivateAwayController;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) int intent; // @dynamic intent;
@property(retain, nonatomic) NSString *lockLabel; // @dynamic lockLabel;
@property(nonatomic) _Bool requiresAuthentication; // @dynamic requiresAuthentication;
@property(nonatomic) _Bool requiresUIUnlock; // @dynamic requiresUIUnlock;
@property(retain, nonatomic) NSString *shortLockLabel; // @dynamic shortLockLabel;
@property(nonatomic) int source; // @dynamic source;
@property(copy, nonatomic) NSString *unlockDestination; // @dynamic unlockDestination;
@property(nonatomic) _Bool wantsBiometricPresentation; // @dynamic wantsBiometricPresentation;
@end

