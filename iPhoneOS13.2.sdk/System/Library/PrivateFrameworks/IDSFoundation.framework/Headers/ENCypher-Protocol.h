//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//




@class ENAccountIdentity, NSData, NSString;
@protocol ENDevicePublicKey;

@protocol ENCypher <NSSecureCoding, NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (NSData *)decypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 signingDevicePublicKey:(id <ENDevicePublicKey>)arg3 identifier:(NSString *)arg4 error:(id *)arg5;
- (NSData *)cypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 identifier:(id *)arg3 error:(id *)arg4;
@end

