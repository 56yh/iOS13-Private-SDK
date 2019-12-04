//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIFeedbackPreferences : NSObject
{
    NSMutableDictionary *_enabledFeedbackTypes;
    NSDictionary *_defaultFeedbackTypes;
    NSUserDefaults *_userDefaults;
}

+ (id)sharedPreferences;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSDictionary *defaultFeedbackTypes; // @synthesize defaultFeedbackTypes=_defaultFeedbackTypes;
- (void)_accessibilityForceTouchChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_invalidate;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 postNotification:(_Bool)arg3;
- (void)_updateEnabledFeedbackTypes:(unsigned long long *)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;
- (unsigned long long)_enabledFeedbackTypesForCategory:(id)arg1;
- (unsigned long long)enabledFeedbackTypesForCategory:(id)arg1;
- (id)_defaultKeyForCategoryKey:(id)arg1 type:(unsigned long long)arg2;
- (id)_categoryKeyForCategory:(id)arg1 type:(unsigned long long)arg2;
- (id)_categoryForNullableCategory:(id)arg1;
- (void)_startObservingDefaults;
- (unsigned long long)_defaultFeedbackTypesForCategory:(id)arg1;
- (id)init;

@end

