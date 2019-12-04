//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIUserModelDataStoring-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring>
{
    struct sqlite3 *_user_model_db;
    NSObject<OS_dispatch_queue> *_database_queue;
}

+ (id)initializeDataStoreAtPath:(id)arg1;
+ (id)singletonInstance;
+ (id)sharedUserModelDataStore;
+ (void)setSharedTIUserModelDataStore:(id)arg1;
- (_Bool)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (_Bool)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (id)getAllKnownInputModes;
- (id)getInputModesForKey:(id)arg1;
- (id)getDurableValueForKey:(id)arg1;
- (id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (_Bool)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
- (_Bool)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
- (_Bool)attemptSchemaMigration;
- (int)getDatabaseVersion;
- (_Bool)setDatabaseVersion:(int)arg1;
- (_Bool)applySchema:(id)arg1;
- (id)getCreationSchema;
- (id)getV1MigrationSchema;
- (_Bool)closeDatabase;
- (_Bool)createOrOpenDatabaseAtPath:(id)arg1;
- (void)dealloc;
- (_Bool)purgeDurableDataForKeyPrefix:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

