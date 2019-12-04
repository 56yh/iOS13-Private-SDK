//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PLUpdatedOrderKeys : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}

- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;
- (id)getAndClearUpdatedOrderKeys;
- (id)_persistentStoresForContext:(id)arg1;
- (_Bool)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (_Bool)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
@property(readonly) _Bool isObservingOrderKeys;
- (id)init;

@end
