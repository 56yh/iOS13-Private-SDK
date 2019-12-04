//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, AMSSQLiteQueryDescriptor;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQuery : NSObject
{
    AMSSQLiteConnection *_connection;
    AMSSQLiteQueryDescriptor *_descriptor;
}

- (id)_newSelectSQLWithProperties:(id)arg1;
@property(readonly) AMSSQLiteQueryDescriptor *queryDescriptor;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateMemoryEntitiesUsingBlock:(id /* block */)arg1;
- (_Bool)deleteAllEntities;
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;
@property(readonly) long long countOfEntities;
- (id)copySelectSQLWithProperties:(id)arg1;
- (id)copyEntityIdentifiers;
@property(readonly) AMSSQLiteConnection *connection;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)initOnConnection:(id)arg1 descriptor:(id)arg2;

@end

