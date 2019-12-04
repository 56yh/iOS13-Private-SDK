//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HDProfile, NSArray, NSError, NSSet, NSString, NSUUID;

@protocol HDSyncStore 
@property(readonly) long long syncStoreType;
@property(readonly) int protocolVersion;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (_Bool)shouldEnforceSequenceOrdering;
- (_Bool)shouldContinueAfterAnchorValidationError:(NSError *)arg1;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (_Bool)enforceSyncEntityOrdering;
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (NSSet *)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (NSArray *)orderedSyncEntities;
- (NSString *)syncStoreDefaultSourceBundleIdentifier;
- (NSUUID *)databaseIdentifier;
- (NSUUID *)syncStoreIdentifier;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (HDProfile *)profile;
@end

