//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class EDPersistenceDatabaseGenerationWindow, EMMailboxObjectID;

@protocol EDMailboxChangeHookResponder 

@optional
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
@end

