//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIPencilPreferences : NSObject
{
    long long _cachedPreferredTapAction;
}

+ (id)sharedPreferences;
+ (long long)preferredTapAction;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_preferredTapActionDidChange;
- (long long)_preferredTapAction;
- (void)dealloc;
- (id)init;

@end

