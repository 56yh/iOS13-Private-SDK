//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData, NSUUID;

@interface CRKIdentityMarkedPrivateKey : NSObject <NSSecureCoding>
{
    NSUUID *_keyPairMarker;
    NSData *_privateKeyData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(readonly, nonatomic) NSUUID *keyPairMarker; // @synthesize keyPairMarker=_keyPairMarker;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPairMarker:(id)arg1 privateKeyData:(id)arg2;

@end

