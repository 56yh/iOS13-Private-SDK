//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject
{
    HMFNetAddress *_addressStart;
    HMFNetAddress *_addressEnd;
}

@property(readonly, nonatomic) HMFNetAddress *addressEnd; // @synthesize addressEnd=_addressEnd;
@property(readonly, nonatomic) HMFNetAddress *addressStart; // @synthesize addressStart=_addressStart;
- (struct NSDictionary *)prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAddressStart:(id)arg1 addressEnd:(id)arg2;

@end

