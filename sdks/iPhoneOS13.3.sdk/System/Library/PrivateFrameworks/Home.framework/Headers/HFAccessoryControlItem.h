//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HMAccessory;

@interface HFAccessoryControlItem : HFControlItem
{
    HMAccessory *_accessory;
}

+ (Class)valueClass;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
// - (void).cxx_destruct;
- (BOOL)supportsItemRepresentingServices:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 parentAccessory:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;

@end

