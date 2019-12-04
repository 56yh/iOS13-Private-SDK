//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface SUScriptNotificationObserver : NSObject
{
    NSLock *_lock;
    struct __CFSet *_receivers;
}

- (void)_enumerateReceiversUsingBlock:(id /* block */)arg1;
- (void)_endObservingNotifications;
- (void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_beginObservingNotifications;
- (void)_accessibilityPerformEscape;
- (void)_accessibilityPerformScrollRight;
- (void)_accessibilityPerformScrollLeft;
- (void)_accessibilityPerformScrollDown;
- (void)_accessibilityPerformScrollUp;
- (void)_dispatchSafariEventWithDictionary:(id)arg1 andIdentifier:(id)arg2;
- (id)_safariQueryDictionaryFromURL:(id)arg1;
- (void)_safariViewControllerDataUpdate:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_storeBagDidChangeNotification:(id)arg1;
- (void)_softwareMapChangedNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_audioSessionsChangedNotification:(id)arg1;
- (void)removeEventReceiver:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

