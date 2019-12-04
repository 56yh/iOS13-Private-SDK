//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>



@class HAPCharacteristicMetadata, NSNumber, NSUUID;

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding>
{
    NSUUID *_characteristicUUID;
    NSNumber *_characteristicInstanceId;
    unsigned long long _characteristicProperties;
    HAPCharacteristicMetadata *_characteristicMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HAPCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
@property(nonatomic) unsigned long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(readonly, nonatomic) NSNumber *characteristicInstanceId; // @synthesize characteristicInstanceId=_characteristicInstanceId;
@property(readonly, nonatomic) NSUUID *characteristicUUID; // @synthesize characteristicUUID=_characteristicUUID;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateWithCharacteristic:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCharacteristicUUID:(id)arg1 instanceId:(id)arg2 characteristicProperties:(unsigned long long)arg3 characteristicMetadata:(id)arg4;

@end
