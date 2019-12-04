//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseStoreCoordinator-Protocol.h>

@protocol OS_dispatch_queue, SCKDatabaseStore;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator>
{
    id <SCKDatabaseStore> _store;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SCKDatabaseStore> store; // @synthesize store=_store;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)writeZone:(id)arg1 withAccessor:(id /* block */)arg2;
- (void)readZone:(id)arg1 withAccessor:(id /* block */)arg2;
- (void)reloadWithAccessor:(id /* block */)arg1;
- (void)writeWithAccessor:(id /* block */)arg1;
- (void)readWithAccessor:(id /* block */)arg1;
@property(readonly, nonatomic) id <SCKDatabaseStore> underlyingStore;
- (id)initWithDatabaseStore:(id)arg1;

@end

