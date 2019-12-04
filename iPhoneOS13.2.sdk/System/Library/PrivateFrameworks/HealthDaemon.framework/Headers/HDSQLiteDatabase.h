//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteStatementCache, NSMutableArray, NSMutableDictionary, NSNumber, NSURL;
@protocol HDSQLiteDatabaseDelegate;

@interface HDSQLiteDatabase : NSObject
{
    struct sqlite3 *_db;
    _Bool _isInTransaction;
    _Bool _requiresRollback;
    long long _transactionType;
    NSMutableDictionary *_attachedDatabaseURLsByName;
    _Bool _isHandlingTransactionEnd;
    NSMutableArray *_beforeCommitBlocks;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    _Bool _writer;
    _Bool _checkpointRequired;
    _Bool _hasEncounteredCorruptionError;
    int _corruptionResultCode;
    id <HDSQLiteDatabaseDelegate> _delegate;
    NSURL *_fileURL;
    long long _cacheScope;
    HDSQLiteStatementCache *_statementCache;
}

+ (id)virtualFilesystemModule;
+ (id)highFrequencyDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)protectedDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)mainDatabaseURLWithProfileDirectoryPath:(id)arg1;
@property(readonly, nonatomic) int corruptionResultCode; // @synthesize corruptionResultCode=_corruptionResultCode;
@property(readonly, nonatomic) _Bool hasEncounteredCorruptionError; // @synthesize hasEncounteredCorruptionError=_hasEncounteredCorruptionError;
@property(readonly, nonatomic) HDSQLiteStatementCache *statementCache; // @synthesize statementCache=_statementCache;
@property(nonatomic) long long cacheScope; // @synthesize cacheScope=_cacheScope;
@property(nonatomic) _Bool checkpointRequired; // @synthesize checkpointRequired=_checkpointRequired;
@property(nonatomic, getter=isWriter) _Bool writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) __weak id <HDSQLiteDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_statementCache;
- (_Bool)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 error:(id *)arg3;
- (id)dumpSchemaWithError:(id *)arg1;
- (id)_tableNamesForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (id)_schemaForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)isDatabaseWithNameAttached:(id)arg1;
- (_Bool)detachDatabaseWithName:(id)arg1 error:(id *)arg2;
- (_Bool)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id *)arg3;
- (id)queryPlanForSQL:(id)arg1 error:(id *)arg2;
- (_Bool)performIntegrityCheckWithError:(id *)arg1 integrityErrorHandler:(id /* block */)arg2;
- (_Bool)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id *)arg2;
- (_Bool)enableIncrementalAutovacuumForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (_Bool)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (_Bool)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id *)arg5;
- (_Bool)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id *)arg3;
- (long long)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id *)arg3;
- (void)requireRollback;
- (void)beforeCommit:(id /* block */)arg1;
- (void)onCommit:(id /* block */)arg1 orRollback:(id /* block */)arg2;
- (_Bool)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long *)arg3 error:(id *)arg4;
- (_Bool)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id *)arg4;
@property(readonly, copy, nonatomic) NSNumber *lastInsertRowID;
- (long long)userVersionWithDatabaseName:(id)arg1 error:(id *)arg2;
- (_Bool)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id *)arg3;
- (_Bool)_executeSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3 bindingHandler:(id /* block */)arg4 enumerationHandler:(id /* block */)arg5;
- (_Bool)executeSQLStatements:(id)arg1 error:(id *)arg2;
- (_Bool)executeUncachedSQL:(id)arg1 error:(id *)arg2;
- (_Bool)executeUncachedSQL:(id)arg1 error:(id *)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (_Bool)_prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3 usingBlock:(id /* block */)arg4;
- (_Bool)performTransactionWithType:(long long)arg1 error:(id *)arg2 usingBlock:(id /* block */)arg3;
- (int)getChangesCount;
- (id)getLastErrorWithResultCode:(int)arg1;
- (_Bool)_executeUncachedSQL:(id)arg1 error:(id *)arg2 retryIfBusy:(_Bool)arg3;
- (_Bool)_executeUncachedSQL:(id)arg1 error:(id *)arg2;
- (_Bool)_verifyDatabaseOpenAndReturnError:(id *)arg1;
- (void)accessDatabaseUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) long long statementCacheScope;
@property(readonly, nonatomic, getter=isOpen) _Bool open;
- (void)close;
- (int)openWithFileProtectionCompleteUnlessOpenWithError:(id *)arg1;
- (int)openForReadingWithError:(id *)arg1;
- (int)openWithError:(id *)arg1;
- (int)_openForWriting:(_Bool)arg1 additionalFlags:(int)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1 copyingDatabase:(id)arg2 delegate:(id)arg3;
- (id)initMemoryDatabaseFromURL:(id)arg1 delegate:(id)arg2;
- (int)_copyContentsFromDatabase:(struct sqlite3 *)arg1 toDatabase:(struct sqlite3 *)arg2;
- (id)initMemoryDatabaseWithDelegate:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 delegate:(id)arg2;
- (_Bool)accessHFDForWritingWithError:(id *)arg1 block:(id /* block */)arg2;
- (_Bool)accessHFDForReadingWithError:(id *)arg1 block:(id /* block */)arg2;
- (id)highFrequencyDatabaseURL;
- (_Bool)isProtectedDatabaseAttached;
- (_Bool)detachProtectedDatabaseWithError:(id *)arg1;
- (_Bool)attachProtectedDatabaseWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)deleteDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id *)arg3;
- (_Bool)deleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id *)arg3;
- (_Bool)correlationCountForDataEntitySubclassTable:(id)arg1 count:(long long *)arg2 error:(id *)arg3;
- (id)statementsForDeleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id *)arg3;

@end

