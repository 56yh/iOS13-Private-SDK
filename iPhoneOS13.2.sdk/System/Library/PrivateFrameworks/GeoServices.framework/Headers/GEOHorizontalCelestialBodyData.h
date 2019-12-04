//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOHorizontalCelestialBodyData : NSObject
{
    double _altitude;
    double _azimuth;
}

@property(readonly, nonatomic) double azimuth; // @synthesize azimuth=_azimuth;
@property(readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;

@end

