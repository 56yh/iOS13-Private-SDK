//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface SFSuggestedUserProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedEmails;
    NSArray *_suggestedNonEmails;
}

+ (id)sharedProvider;
- (void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id *)arg2 suggestedNonEmails:(id *)arg3;
- (void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)suggestedUsersOfType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2;
- (id)_allCachedSuggestedUsersWithType:(long long)arg1;
- (void)_passwordStoreChangedNotification:(id)arg1;
- (id)init;

@end

