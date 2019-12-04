//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDActivityHookResponder-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMActivityRegistryInterface-Protocol.h>

@class EDActivityPersistence, EDPersistenceHookRegistry, NSMutableSet, NSString;

@interface EDActivityRegistry : NSObject <EFLoggable, EDActivityHookResponder, EMActivityRegistryInterface>
{
    NSMutableSet *_observers;
    struct os_unfair_lock_s _lock;
    EDActivityPersistence *_activityPersistence;
    EDPersistenceHookRegistry *_hookRegistry;
}

+ (id)log;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDActivityPersistence *activityPersistence; // @synthesize activityPersistence=_activityPersistence;
- (void)removedActivityWithID:(id)arg1;
- (void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)startedActivity:(id)arg1;
- (void)registerActivityObserver:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHookRegistry:(id)arg1 activityPersistence:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

