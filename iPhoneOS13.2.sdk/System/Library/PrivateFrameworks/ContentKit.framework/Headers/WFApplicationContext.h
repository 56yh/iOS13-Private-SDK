//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSLock, NSMutableDictionary, NSString;
@protocol WFApplicationContextProvider;

@interface WFApplicationContext : NSObject
{
    _Bool _canLoadShortcutsDatabase;
    _Bool _inactive;
    _Bool _inBackground;
    _Bool _canLoadShortcutsDatabaseEntitlementChecked;
    id <WFApplicationContextProvider> _provider;
    NSBundle *_applicationBundle;
    NSMutableDictionary *_applicationStateObserversByEvent;
    NSLock *_observersLock;
}

+ (id)sharedContext;
+ (id)imageNamed:(id)arg1;
@property(nonatomic) _Bool canLoadShortcutsDatabaseEntitlementChecked; // @synthesize canLoadShortcutsDatabaseEntitlementChecked=_canLoadShortcutsDatabaseEntitlementChecked;
@property(nonatomic) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool inactive; // @synthesize inactive=_inactive;
@property(readonly, nonatomic) NSLock *observersLock; // @synthesize observersLock=_observersLock;
@property(retain, nonatomic) NSMutableDictionary *applicationStateObserversByEvent; // @synthesize applicationStateObserversByEvent=_applicationStateObserversByEvent;
@property(readonly, nonatomic) _Bool canLoadShortcutsDatabase; // @synthesize canLoadShortcutsDatabase=_canLoadShortcutsDatabase;
@property(nonatomic, getter=isIdleTimerDisabled) _Bool idleTimerDisabled;
- (id)applicationOrNil;
- (id)keyWindow;
@property(readonly, nonatomic) _Bool shouldReverseLayoutDirection;
@property(readonly, nonatomic) NSBundle *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property(readonly, nonatomic) NSString *currentUserInterfaceType;
@property(readonly, nonatomic) NSBundle *bundle;
@property(readonly, nonatomic) NSArray *applicationBundleURLSchemes;
- (void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
@property(readonly, nonatomic) long long applicationState;
- (void)removeApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (void)addApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (void)handleApplicationStateEvent:(long long)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)dealloc;
@property(retain, nonatomic) id <WFApplicationContextProvider> provider; // @synthesize provider=_provider;
- (id)init;

@end

