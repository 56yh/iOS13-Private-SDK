//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>


@class HMDNetworkRouterIPAddress, HMDTLVUnsignedNumberValue, NSData, NSString;

@interface HMDNetworkRouterClientStatusIdentifier : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDTLVUnsignedNumberValue *_clientIdentifier;
    NSData *_macAddress;
    HMDNetworkRouterIPAddress *_ipAddress;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

