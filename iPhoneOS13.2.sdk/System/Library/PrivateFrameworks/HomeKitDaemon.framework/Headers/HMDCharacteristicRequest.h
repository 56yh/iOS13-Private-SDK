//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristic;

@interface HMDCharacteristicRequest : HMFObject
{
    HMDCharacteristic *_characteristic;
    id _previousValue;
}

+ (id)requestWithCharacteristic:(id)arg1;
@property(readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCharacteristic:(id)arg1;

@end

