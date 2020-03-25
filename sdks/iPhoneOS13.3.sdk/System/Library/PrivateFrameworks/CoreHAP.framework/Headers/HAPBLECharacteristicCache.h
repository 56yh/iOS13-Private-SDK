//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HAPCharacteristicMetadata, NSNumber, NSUUID;

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding>
{
    NSUUID *_characteristicUUID;
    NSNumber *_characteristicInstanceId;
    NSUInteger _characteristicProperties;
    HAPCharacteristicMetadata *_characteristicMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) HAPCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
@property(nonatomic) NSUInteger characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(readonly, nonatomic) NSNumber *characteristicInstanceId; // @synthesize characteristicInstanceId=_characteristicInstanceId;
@property(readonly, nonatomic) NSUUID *characteristicUUID; // @synthesize characteristicUUID=_characteristicUUID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateWithCharacteristic:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCharacteristicUUID:(id)arg1 instanceId:(id)arg2 characteristicProperties:(NSUInteger)arg3 characteristicMetadata:(id)arg4;

@end
