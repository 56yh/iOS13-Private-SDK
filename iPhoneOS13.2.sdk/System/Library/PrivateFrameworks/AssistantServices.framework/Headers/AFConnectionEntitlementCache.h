//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_bundleIDToPIDMap;
}

+ (id)sharedCache;
- (void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3;
- (_Bool)hasEntitlement:(id)arg1 forPID:(int)arg2;
- (id)init;

@end

