//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSEphemeralDefaults : NSObject
{
}

+ (void)_accessDataStoreUsingBlock:(id /* block */)arg1;
+ (id)_propertyForKey:(id)arg1 defaultValue:(id)arg2 expectedType:(Class)arg3;
+ (void)_setProperty:(id)arg1 forKey:(id)arg2;
+ (void)setHARLoggingItemLimit:(long long)arg1;
+ (void)setHARLoggingEnabled:(_Bool)arg1;
+ (long long)HARLoggingItemLimit;
+ (_Bool)HARLoggingEnabled;

@end

