//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDictionary, NSString;
@protocol NSFastEnumeration, PLSyncableDetectedFace, PLSyncablePerson;

@protocol PLSyncContext 
@property(copy, nonatomic) NSArray *personUUIDsToDedupe;
@property(readonly, nonatomic) _Bool serverSupportsSuggestion;
@property(readonly, nonatomic) _Bool serverSupportsGraphHome;
@property(readonly, nonatomic) _Bool serverSupportsVision;
- (NSDictionary *)assetAdjustmentStateForCloudIdentifier:(NSString *)arg1;
- (_Bool)personUUIDIsDeleted:(NSString *)arg1;
- (id <PLSyncablePerson>)personForUUID:(NSString *)arg1;
- (void)deleteFaces:(id <NSFastEnumeration>)arg1;
- (id <PLSyncableDetectedFace>)makeFace;
@end

