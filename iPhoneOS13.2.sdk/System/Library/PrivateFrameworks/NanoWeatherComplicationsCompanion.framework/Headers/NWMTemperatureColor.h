//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWMColorPalette-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWMTemperatureColor : NSObject <NWMColorPalette>
{
}

+ (id)colorSpectrum;
+ (void)colorSpectrumBetweenLow:(id)arg1 high:(id)arg2 handler:(id /* block */)arg3;
+ (id)colorForTemperature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

