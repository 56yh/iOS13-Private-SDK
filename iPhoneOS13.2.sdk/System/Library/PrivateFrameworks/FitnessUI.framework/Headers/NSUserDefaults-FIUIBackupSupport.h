//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (FIUIBackupSupport)
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1 useContainer:(_Bool)arg2;
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1;
+ (void)fu_backupStandardUserDefaultsKey:(id)arg1 useContainer:(_Bool)arg2;
+ (void)fu_backupStandardUserDefaultsKey:(id)arg1;
+ (void)fu_backupAndSetURL:(id)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetBool:(_Bool)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetDouble:(double)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetFloat:(float)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetInteger:(long long)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetObject:(id)arg1 forKey:(id)arg2;
+ (id)fu_npsManager;
@end

