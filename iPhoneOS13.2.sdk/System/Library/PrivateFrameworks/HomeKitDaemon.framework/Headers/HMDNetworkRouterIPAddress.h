//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>


@class NSData, NSString;

@interface HMDNetworkRouterIPAddress : NSObject <NSCopying, HMDTLVProtocol>
{
    NSData *_v4;
    NSData *_v6;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)ipAddressFromRuleAddress:(id)arg1 allowWildcard:(_Bool)arg2;
+ (id)ipAddressFromNetAddress:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSData *v6; // @synthesize v6=_v6;
@property(retain, nonatomic) NSData *v4; // @synthesize v4=_v4;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithV4:(id)arg1 v6:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

