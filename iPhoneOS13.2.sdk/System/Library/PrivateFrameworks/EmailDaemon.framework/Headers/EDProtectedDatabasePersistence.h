//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EFSignpostable-Protocol.h>

@class EDPersistenceDatabase, EDPersistenceDatabaseJournalManager, EDPersistenceHookRegistry, NSString;
@protocol OS_dispatch_queue;

@interface EDProtectedDatabasePersistence : NSObject <EFLoggable, EFSignpostable>
{
    struct os_unfair_lock_s _initializationLock;
    struct os_unfair_lock_s _reconciliationLock;
    EDPersistenceDatabase *_database;
    _Bool _isInitialized;
    _Bool _isReconciling;
    EDPersistenceDatabaseJournalManager *_journalManager;
    EDPersistenceHookRegistry *_hookRegistry;
    NSObject<OS_dispatch_queue> *_reconciliationQueue;
}

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;
+ (id)signpostLog;
+ (id)log;
@property(nonatomic) _Bool isReconciling; // @synthesize isReconciling=_isReconciling;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *reconciliationQueue; // @synthesize reconciliationQueue=_reconciliationQueue;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager; // @synthesize journalManager=_journalManager;
- (void)addAdditionalCriteriaToCleanupActivity:(id)arg1;
- (void)finishJournalReconciliation:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool protectedDataAvailable;
@property(readonly, nonatomic) _Bool supportsJournaling;
- (id)_allReferencingColumnsForTable:(id)arg1;
- (unsigned long long)_resultForConnection:(id)arg1 success:(_Bool)arg2 error:(id)arg3 errorMessage:(id)arg4;
- (unsigned long long)_executeStatementString:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;
- (unsigned long long)_executeUpdateStatement:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;
- (_Bool)_isJournalMalformedForSchema:(id)arg1 connection:(id)arg2;
- (_Bool)_isRecoverableError:(id)arg1;
- (_Bool)_removeExistingDatabaseIDs:(id)arg1 withColumn:(id)arg2 connection:(id)arg3;
- (void)_deleteDatabaseIDs:(id)arg1 fromTable:(id)arg2;
- (id)_databaseIDsToDeleteForTable:(id)arg1;
- (void)scheduleRecurringActivity;
- (unsigned long long)_deleteRowIDs:(id)arg1 fromJournal:(id)arg2 withConnection:(id)arg3;
- (unsigned long long)_mergeTable:(id)arg1 connection:(id)arg2;
- (unsigned long long)_mergeSchema:(id)arg1 connection:(id)arg2;
- (unsigned long long)_runReconciliationWithSchema:(id)arg1 connection:(id)arg2;
- (unsigned long long)_reconcileJournalsWithSchema:(id)arg1 connection:(id)arg2;
- (void)reconcileJournalsWithSchema:(id)arg1 completionBlock:(id /* block */)arg2;
- (_Bool)_performOnDemandReconciliationForConnection:(id)arg1 withSchema:(id)arg2;
- (long long)_maxRowIDForColumn:(id)arg1 withConnection:(id)arg2;
- (_Bool)_updateSqliteSequenceForDatabase:(id)arg1 schema:(id)arg2 withConnection:(id)arg3 error:(id *)arg4;
- (_Bool)_initializeDatabase:(id)arg1 withConnection:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (void)_detachJournalDatabaseFromConnection:(id)arg1;
- (void)_attachJournalDatabaseToConnection:(id)arg1 withSchema:(id)arg2;
- (void)_detachProtectedDatabaseFromConnection:(id)arg1;
- (_Bool)_attachProtectedDatabaseToConnection:(id)arg1 withSchema:(id)arg2 error:(id *)arg3;
- (void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (void)_ensureJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)arg1;
- (void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)arg1 withSchema:(id)arg2;
- (void)setDatabase:(id)arg1;
- (id)database;
- (id)initWithJournalManager:(id)arg1 hookRegistry:(id)arg2;
- (id)initWithBasePath:(id)arg1 hookRegistry:(id)arg2;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

