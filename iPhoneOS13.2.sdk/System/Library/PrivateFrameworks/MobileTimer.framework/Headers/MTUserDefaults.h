//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;
@protocol NAScheduler;

@interface MTUserDefaults : NSObject
{
    id <NAScheduler> _serializer;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_observers;
}

+ (id)_localNotificationForDistributedNotification:(id)arg1;
+ (id)_distributedNotificationForLocalNotification:(id)arg1;
+ (id)sharedUserDefaults;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
- (void)_cleanupObserversForNotification:(id)arg1;
- (void)unregisterNotification:(id)arg1 observer:(id)arg2;
- (void)distributedNotificationPosted:(id)arg1;
- (void)registerNotification:(id)arg1 observer:(id)arg2;
- (void)_postNotification:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)objectForKey:(id)arg1;
- (double)timeIntervalForKey:(id)arg1 isValid:(id /* block */)arg2 defaultValue:(double)arg3;
- (double)timeIntervalForKey:(id)arg1 defaultValue:(double)arg2;
- (double)timeIntervalForKey:(id)arg1 exists:(_Bool *)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1 isValid:(id /* block */)arg2 defaultValue:(long long)arg3;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)integerForKey:(id)arg1 exists:(_Bool *)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1 exists:(_Bool *)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1 exists:(_Bool *)arg2;
- (float)floatForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (id)initWithUserDefaults:(id)arg1;

@end

