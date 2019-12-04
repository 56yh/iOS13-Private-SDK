//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class NSString;

@interface EMFeaturePreferences : NSObject <EFLoggable>
{
}

+ (_Bool)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2;
+ (void)_setUserDefaultEnabled:(_Bool)arg1 forKey:(id)arg2;
+ (_Bool)_userDefaultEnabledForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (id)defaultForFeature:(unsigned long long)arg1;
+ (void)setFeature:(unsigned long long)arg1 enabled:(_Bool)arg2;
+ (_Bool)_featureEnabled:(unsigned long long)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)_registerForDefaultChanges;
+ (_Bool)featureEnabled:(unsigned long long)arg1;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

