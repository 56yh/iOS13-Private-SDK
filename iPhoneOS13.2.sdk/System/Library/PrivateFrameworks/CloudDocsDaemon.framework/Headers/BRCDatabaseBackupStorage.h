//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupStorage : NSObject
{
    PQLConnection *_database;
    NSURL *_databaseURL;
    NSArray *_urlPropertiesToFetch;
    NSURL *_attachedDatabaseURL;
}

@property(retain, nonatomic) NSURL *attachedDatabaseURL; // @synthesize attachedDatabaseURL=_attachedDatabaseURL;
@property(retain, nonatomic) NSArray *urlPropertiesToFetch; // @synthesize urlPropertiesToFetch=_urlPropertiesToFetch;
@property(retain, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(retain, nonatomic) PQLConnection *database; // @synthesize database=_database;
- (_Bool)fixUpClientState:(id)arg1;
- (_Bool)fixUpBackupDetector:(id)arg1;
- (_Bool)clearStagedIDs:(id)arg1;
- (_Bool)updateIDs:(id)arg1;
- (_Bool)negateIDs:(id)arg1;
- (_Bool)setForeignKeys:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)updateAttachedDatabase;
- (id)docIDForURL:(id)arg1;
- (_Bool)attachDatabase:(id)arg1 error:(id *)arg2;
- (void)populateNewColumnsInDatabase:(id)arg1 forRecord:(id)arg2 basePath:(id)arg3;
- (void)populateNewColumnsWithBasePath:(id)arg1;
- (struct PQLResultSet *)backupManifestEnumerator:(id)arg1;
- (void)flushAndClose;
- (_Bool)addRecord:(id)arg1;
- (_Bool)setUpDatabaseWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;

@end

