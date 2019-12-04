//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSPredicate, WFDatabase;
@protocol OS_dispatch_queue, WFDatabaseBackingStore;

@interface WFDatabaseResult : NSObject
{
    id <WFDatabaseBackingStore> _backingStore;
    NSArray *_descriptors;
    NSPredicate *_searchPredicate;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observersTable;
}

@property(readonly, nonatomic) NSHashTable *observersTable; // @synthesize observersTable=_observersTable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSPredicate *searchPredicate; // @synthesize searchPredicate=_searchPredicate;
@property(readonly, nonatomic) id <WFDatabaseBackingStore> backingStore; // @synthesize backingStore=_backingStore;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *observers;
- (id)_performFetch:(id *)arg1;
- (_Bool)performFetch:(id *)arg1;
- (void)invalidateCache;
@property(readonly, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) WFDatabase *database;
- (id)_initWithBackingStore:(id)arg1;

@end

