//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFColorProfile-Protocol.h>

@class NSString;

@interface HFTemperatureColorProfile : NSObject <HFColorProfile>
{
    float _minimumTemperature;
    float _maximumTemperature;
}

@property(readonly, nonatomic) float maximumTemperature; // @synthesize maximumTemperature=_maximumTemperature;
@property(readonly, nonatomic) float minimumTemperature; // @synthesize minimumTemperature=_minimumTemperature;
- (float)adjustedTemperatureForTemperature:(float)arg1;
- (id)adjustedColorPrimitiveForPrimitive:(id)arg1;
- (id)initWithMinimumTemperature:(float)arg1 maximumTemperature:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

