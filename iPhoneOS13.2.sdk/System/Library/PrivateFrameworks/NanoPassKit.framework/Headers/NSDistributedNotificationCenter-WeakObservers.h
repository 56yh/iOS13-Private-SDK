//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDistributedNotificationCenter (WeakObservers)
- (void)_handleNotification:(id)arg1;
- (id)_internalNameForNotificationName:(id)arg1;
- (void)weak_removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)weak_removeObserver:(id)arg1;
- (void)weak_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
@end

