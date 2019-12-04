//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface WFTemperature : NSObject <NSCopying, NSSecureCoding>
{
    struct {
        double celsiusVal;
        double kelvinVal;
        double fahrenheitVal;
    } _temperatureValues;
}

+ (_Bool)supportsSecureCoding;
- (void)_resetTemperatureValues;
- (_Bool)_unitIsHydrated:(int)arg1 outputValue:(out double *)arg2;
- (void)_setValue:(double)arg1 forUnit:(int)arg2;
- (id)description;
- (double)temperatureForUnit:(int)arg1;
@property(nonatomic) double fahrenheit;
@property(nonatomic) double celsius;
@property(nonatomic) double kelvin;
- (_Bool)isEqualToTemperature:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTemperatureUnit:(int)arg1 value:(double)arg2;

@end

