//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration>
{
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned long long _dequeued;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dequeue:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)_filterIndex:(id)arg1;
- (void)addDequeueCallback:(id /* block */)arg1;
- (void)processDequeueCallbacks;
- (void)addNotification:(id)arg1 asDead:(_Bool)arg2;
- (void)removeAllObjects;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (id)init;

@end

