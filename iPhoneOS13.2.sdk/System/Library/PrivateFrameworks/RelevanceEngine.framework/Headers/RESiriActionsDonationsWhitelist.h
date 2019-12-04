//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface RESiriActionsDonationsWhitelist : NSObject
{
    struct NSDictionary *_whitelist;
    struct os_unfair_lock_s _lock;
    NSSet *_intentWhitelistBundleIDs;
    NSSet *_userActivityWhitelistBundleIDs;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSSet *userActivityWhitelistBundleIDs; // @synthesize userActivityWhitelistBundleIDs=_userActivityWhitelistBundleIDs;
@property(readonly, nonatomic) NSSet *intentWhitelistBundleIDs; // @synthesize intentWhitelistBundleIDs=_intentWhitelistBundleIDs;
- (_Bool)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2;
- (id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2;
- (_Bool)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)init;

@end
