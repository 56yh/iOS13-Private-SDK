//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, SBCPlaybackPositionEntity;

@protocol SBCDomainSyncServiceProtocol 
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(NSArray *)arg1 completionBlock:(void (^)(_Bool, NSError *, NSArray *))arg2;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;
- (oneway void)persistPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 isCheckpoint:(_Bool)arg2 completionBlock:(void (^)(_Bool))arg3;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)beginAccessingPlaybackPositionEntities;
@end

