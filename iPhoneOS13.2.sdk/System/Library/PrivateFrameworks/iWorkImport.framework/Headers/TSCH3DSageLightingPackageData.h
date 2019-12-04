//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DSageLightingPackageData-Protocol.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData>
{
    NSDictionary *mPackage;
    NSArray *mLights;
}

+ (id)dataWithDictionary:(id)arg1;
- (float)dropOffRateAtIndex:(unsigned long long)arg1;
- (float)cutOffAngleAtIndex:(unsigned long long)arg1;
- (struct Vector3)directionAtIndex:(unsigned long long)arg1;
- (struct Vector3)positionAtIndex:(unsigned long long)arg1;
- (_Bool)enabledAtIndex:(unsigned long long)arg1;
- (long long)coordinateSpaceAtIndex:(unsigned long long)arg1;
- (struct Vector3)attenuationAtIndex:(unsigned long long)arg1;
- (float)intensityAtIndex:(unsigned long long)arg1;
- (struct Color)specularColorAtIndex:(unsigned long long)arg1;
- (struct Color)diffuseColorAtIndex:(unsigned long long)arg1;
- (struct Color)ambientColorAtIndex:(unsigned long long)arg1;
- (struct Color)colorAtIndex:(unsigned long long)arg1 redKey:(id)arg2 greenKey:(id)arg3 blueKey:(id)arg4;
- (long long)typeAtIndex:(unsigned long long)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)packageName;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

