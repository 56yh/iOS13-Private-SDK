//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristicMetadata, NSNumber, NSUUID;

@interface HAPBTLECharacteristicSignature : HMFObject
{
    BOOL _authenticated;
    NSUUID *_characteristicType;
    NSNumber *_serviceInstanceID;
    NSUUID *_serviceType;
    NSUInteger _characteristicProperties;
    HAPCharacteristicMetadata *_characteristicMetadata;
}

@property(readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) HAPCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
@property(readonly, nonatomic) NSUInteger characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(readonly, copy, nonatomic) NSUUID *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSNumber *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, copy, nonatomic) NSUUID *characteristicType; // @synthesize characteristicType=_characteristicType;
// - (void).cxx_destruct;
- (id)initWithCharacteristicType:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 characteristicProperties:(NSUInteger)arg4 characteristicMetadata:(id)arg5 authenticated:(BOOL)arg6;

@end
