//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUColorWheelSpace-Protocol.h>

@interface HUTemperatureColorWheelSpace : NSObject <HUColorWheelSpace>
{
    NSUInteger _mirroringBiasAxis;
    CDStruct_ef18196a _supportedRange;
}

+ (CDStruct_c3b9c2ee)largestAllowableTemperatureRange;
+ (CDStruct_c3b9c2ee)defaultTemperatureRange;
@property(readonly, nonatomic) CDStruct_c3b9c2ee supportedRange; // @synthesize supportedRange=_supportedRange;
@property(nonatomic) NSUInteger mirroringBiasAxis; // @synthesize mirroringBiasAxis=_mirroringBiasAxis;
- (CDStruct_c3b9c2ee)coordinateForColor:(CDStruct_d2b197d1)arg1 isValid:(out BOOL )arg2;
- (CDStruct_d2b197d1)colorForCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) NSUInteger type;
- (id)init;
- (id)initWithSupportedRange:(CDStruct_c3b9c2ee)arg1;

@end

