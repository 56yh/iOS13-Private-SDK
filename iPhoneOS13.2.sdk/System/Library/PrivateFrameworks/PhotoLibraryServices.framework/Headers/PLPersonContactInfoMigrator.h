//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray;

@interface PLPersonContactInfoMigrator : NSObject
{
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
    int _updateNameCount;
    int _populateMatchingDictionaryCount;
}

+ (void)migratePersonContactInfoInPhotoLibrary:(id)arg1;
+ (id)migrationQueue;
- (void)populateMatchingDictionaryOfPerson:(id)arg1 withContact:(id)arg2;
- (void)updateNameOfPerson:(id)arg1 withContact:(id)arg2;
- (void)migratePerson:(id)arg1;
- (id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)arg1 inContext:(id)arg2 withBlock:(id /* block */)arg3;
- (void)migratePersonContactInfoInContext:(id)arg1;
- (void)migratePersonContactInfoInPhotoLibrary:(id)arg1;
- (id)init;

@end

