//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNotificationCenter;

@interface CAMPriorityNotificationCenter : NSObject
{
    NSNotificationCenter *__notificationCenter;
    NSMutableDictionary *__observersByNameHighPriority;
    NSMutableDictionary *__observersByNameNormalPriority;
}

+ (id)defaultCenter;
@property(readonly, retain, nonatomic) NSMutableDictionary *_observersByNameNormalPriority; // @synthesize _observersByNameNormalPriority=__observersByNameNormalPriority;
@property(readonly, retain, nonatomic) NSMutableDictionary *_observersByNameHighPriority; // @synthesize _observersByNameHighPriority=__observersByNameHighPriority;
@property(readonly, retain, nonatomic) NSNotificationCenter *_notificationCenter; // @synthesize _notificationCenter=__notificationCenter;
- (void)removeObserver:(id)arg1;
- (id)_allSubscriptions;
- (void)_removeObserver:(id)arg1 fromObserversByName:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)addObserver:(id)arg1 priority:(unsigned long long)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5;
- (id)_entriesByName:(id)arg1 forPriority:(unsigned long long)arg2 creatingEmptyIfNeeded:(_Bool)arg3;
- (id)_observersForPriority:(unsigned long long)arg1;
- (void)_notificationReceiver:(id)arg1;
- (void)_postNotification:(id)arg1 forEntries:(id)arg2;
- (void)dealloc;
- (id)init;

@end

