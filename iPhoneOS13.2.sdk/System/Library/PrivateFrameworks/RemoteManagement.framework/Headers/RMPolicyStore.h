//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface RMPolicyStore : NSObject
{
    NSLock *_policyChangeLock;
}

- (void)_setCurrentPolicyByKey:(struct NSDictionary *)arg1;
- (struct NSDictionary *)currentPolicyByKey;
- (id)policyWithKey:(id)arg1;
- (void)removePolicyWithKey:(id)arg1;
- (void)addOrUpdatePolicy:(id)arg1;
- (id)init;

@end

