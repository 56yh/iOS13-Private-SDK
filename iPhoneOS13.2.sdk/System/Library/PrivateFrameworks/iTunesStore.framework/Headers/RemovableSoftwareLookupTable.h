//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject
{
    NSDictionary *_bundleDictionary;
    NSLock *_lock;
}

+ (id)_urlForBundleIdentifier:(id)arg1;
+ (id)_fallbackItemIdentifier:(id)arg1;
+ (_Bool)isRestrictedAppBundleIdentifier:(id)arg1;
+ (id)urlForBundleIdentifier:(id)arg1;
- (id)_identifierForBundleIdentifier:(id)arg1;
- (void)_populateBundleDictionary;
- (void)_invalidateLookupCache:(id)arg1;
- (id)itemIdentifierForBundleIdentifer:(id)arg1;
@property(readonly, copy) NSDictionary *bundleDictionary;
- (void)dealloc;
- (id)init;

@end

