//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class HMDHomeKitVersion, NSUUID;

@interface HMDRemoteMessage : HMFMessage
{
    double _remoteTimeout;
    long long _type;
    NSUUID *_transactionIdentifier;
    HMDHomeKitVersion *_sourceVersion;
}

+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4;
+ (id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
@property(retain, nonatomic) HMDHomeKitVersion *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(copy, nonatomic) NSUUID *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long restriction;
- (void)setInternalResponseHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
@property(nonatomic, getter=isSecure) _Bool secure;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_remoteTimeout;
- (_Bool)isRemote;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(_Bool)arg7 restriction:(unsigned long long)arg8;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(_Bool)arg7;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(_Bool)arg6 restriction:(unsigned long long)arg7;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(_Bool)arg6;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;

@end

