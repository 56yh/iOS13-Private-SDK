//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy
{
    _Bool _requiresEntitlement;
}

+ (id)policyWithEntitlementRequirement:(_Bool)arg1;
@property(readonly) _Bool requiresEntitlement; // @synthesize requiresEntitlement=_requiresEntitlement;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEntitlementRequirement:(_Bool)arg1;
- (id)init;

@end

