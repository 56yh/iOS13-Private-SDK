//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>




@class HMFPairingKey, NSString;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    HMFPairingKey *_publicKey;
    HMFPairingKey *_privateKey;
}

+ (_Bool)supportsSecureCoding;
+ (id)pairingIdentity;
@property(readonly, copy, nonatomic) HMFPairingKey *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy, nonatomic) HMFPairingKey *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) HMFPairingIdentity *publicPairingIdentity;
- (id)attributeDescriptions;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (id)init;

@end

