//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface UNSAuthorizationAlertController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_bundleIdentifersForActiveAlerts;
    NSMutableDictionary *_bundleIdentifiersToResultBlocks;
}

- (void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_addResultBlock:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_addAlertActiveForBundleIdentifier:(id)arg1;
- (_Bool)_queue_isAlertActiveForBundleIdentifier:(id)arg1;
- (void)presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(id /* block */)arg3;
- (void)_presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(id /* block */)arg3;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;

@end

