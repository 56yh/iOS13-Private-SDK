//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKSolarRichComplicatonCircularPath : NSObject
{
}

+ (id)_cachedSolarPathKeyForDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7;
+ (id)_cachedSolarPathForDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7 cacheMissBlock:(id /* block */)arg8;
+ (id)_solarPathCache;
+ (id)pathWithDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7;

@end

