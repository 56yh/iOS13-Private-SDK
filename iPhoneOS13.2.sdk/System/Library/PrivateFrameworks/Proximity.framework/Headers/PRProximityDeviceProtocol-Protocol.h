//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSUUID;

@protocol PRProximityDeviceProtocol
@property(readonly) NSUUID *peer;
- (long long)deviceProximity;
- (_Bool)proxReady;
- (void)addSample:(struct BtProxData)arg1;
- (id)initWithPeer:(NSUUID *)arg1 andPeerModel:(NSString *)arg2 withError:(id *)arg3;
- (id)init;
@end

