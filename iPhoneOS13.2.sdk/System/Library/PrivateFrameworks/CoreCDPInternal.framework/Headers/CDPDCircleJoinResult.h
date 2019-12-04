//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDCircleJoinResult : NSObject
{
    _Bool _didJoin;
    _Bool _needsBackupRecovery;
    _Bool _hasPeersForRemoteApproval;
    _Bool _hasPeersWithCDPBackupRecords;
    _Bool _requiresEscrowRecordsFetch;
    _Bool _requiresInitialSync;
    unsigned long long _remotePeeriCKState;
    unsigned long long _circleStatus;
}

@property unsigned long long circleStatus; // @synthesize circleStatus=_circleStatus;
@property unsigned long long remotePeeriCKState; // @synthesize remotePeeriCKState=_remotePeeriCKState;
@property _Bool requiresInitialSync; // @synthesize requiresInitialSync=_requiresInitialSync;
@property _Bool requiresEscrowRecordsFetch; // @synthesize requiresEscrowRecordsFetch=_requiresEscrowRecordsFetch;
@property _Bool hasPeersWithCDPBackupRecords; // @synthesize hasPeersWithCDPBackupRecords=_hasPeersWithCDPBackupRecords;
@property _Bool hasPeersForRemoteApproval; // @synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval;
@property _Bool needsBackupRecovery; // @synthesize needsBackupRecovery=_needsBackupRecovery;
@property _Bool didJoin; // @synthesize didJoin=_didJoin;

@end

