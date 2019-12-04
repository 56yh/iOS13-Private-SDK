//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_payloadHash;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *payloadHash; // @synthesize payloadHash=_payloadHash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToReplayKey:(id)arg1;
- (id)initWithHash:(id)arg1;
- (id)initWithPayload:(id)arg1 legacyIdentity:(id)arg2;

@end

