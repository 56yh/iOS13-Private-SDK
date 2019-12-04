//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>


@class HMDNetworkRouterLANFirewall, HMDNetworkRouterLANFirewallRuleList, NSString;

@interface HMDNetworkRouterLANFirewallConfiguration : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterLANFirewall *_type;
    HMDNetworkRouterLANFirewallRuleList *_ruleList;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;
@property(retain, nonatomic) HMDNetworkRouterLANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterLANFirewall *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 ruleList:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

