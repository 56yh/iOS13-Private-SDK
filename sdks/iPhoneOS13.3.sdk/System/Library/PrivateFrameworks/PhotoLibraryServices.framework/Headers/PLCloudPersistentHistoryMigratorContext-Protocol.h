//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol PLCloudPersistentHistoryMigratorContext
- (void)updateTransferCountsWithInsertedPhotoCount:(NSUInteger)arg1 insertedVideoCount:(NSUInteger)arg2;
- (void)saveTokenObject:(id)arg1;
- (void)resetSyncDueToMigrationMarker;
- (NSString *)readLocalVersion;
- (void)setLocalVersion:(NSString *)arg1;
- (void)setMigratedLocalVersion:(NSString *)arg1;
- (void)setMigrationMarker:(id)arg1;
- (id)readMigrationMarker;
@end

