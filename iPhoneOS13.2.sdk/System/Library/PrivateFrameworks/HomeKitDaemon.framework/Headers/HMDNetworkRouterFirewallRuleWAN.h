//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRule.h>

@class HMDNetworkRouterFirewallRuleWANSubject, NSArray;

@interface HMDNetworkRouterFirewallRuleWAN : HMDNetworkRouterFirewallRule
{
    unsigned char _transportProtocol;
    unsigned short _portStart;
    unsigned short _portEnd;
    unsigned long long _purpose;
    HMDNetworkRouterFirewallRuleWANSubject *_subject;
    NSArray *_icmpTypes;
}

+ (id)createWithJSONDictionary:(struct NSDictionary *)arg1 error:(id *)arg2;
+ (_Bool)__decodePorts:(struct NSDictionary *)arg1 portStart:(unsigned short *)arg2 portEnd:(unsigned short *)arg3;
+ (_Bool)__decodeSubject:(struct NSDictionary *)arg1 subject:(id *)arg2;
+ (_Bool)__decodeAddressRange:(id)arg1 endValue:(id)arg2 subject:(id *)arg3;
+ (id)__nonWildcardAddressFrom:(id)arg1 key:(id)arg2;
+ (_Bool)__decodeAddresses:(id)arg1 subject:(id *)arg2;
+ (_Bool)__decodeAddress:(id)arg1 subject:(id *)arg2;
+ (_Bool)__decodeHostnames:(id)arg1 subject:(id *)arg2;
+ (_Bool)__decodeType:(struct NSDictionary *)arg1 transportProtocol:(unsigned char *)arg2 error:(id *)arg3;
+ (_Bool)__decodeFlags:(struct NSDictionary *)arg1 critical:(_Bool *)arg2;
+ (_Bool)__decodePurpose:(struct NSDictionary *)arg1 purpose:(unsigned long long *)arg2;
+ (id)ipAddressAny;
+ (id)ipAddressAnyIPv6;
+ (id)ipAddressAnyIPv4;
@property(readonly, nonatomic) NSArray *icmpTypes; // @synthesize icmpTypes=_icmpTypes;
@property(readonly, nonatomic) unsigned short portEnd; // @synthesize portEnd=_portEnd;
@property(readonly, nonatomic) unsigned short portStart; // @synthesize portStart=_portStart;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWANSubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) unsigned char transportProtocol; // @synthesize transportProtocol=_transportProtocol;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
- (struct NSDictionary *)prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 transportProtocol:(unsigned char)arg5 subject:(id)arg6 portStart:(unsigned short)arg7 portEnd:(unsigned short)arg8 icmpTypes:(id)arg9;

@end

