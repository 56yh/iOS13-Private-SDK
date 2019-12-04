//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVSystemDialogManager : NSObject
{
    struct __CFDictionary *_registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg1;
- (id)systemDialogForUserNotification:(struct __CFUserNotification *)arg1;
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification *)arg2;
- (void)dealloc;
- (id)init;

@end

