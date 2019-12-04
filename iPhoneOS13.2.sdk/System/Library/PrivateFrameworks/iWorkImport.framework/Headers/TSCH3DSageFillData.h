//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DSageFillData-Protocol.h>

@class NSArray, NSDictionary, TSCH3DFillSetIdentifier;
@protocol TSCH3DSageFillImageDataSource;

__attribute__((visibility("hidden")))
@interface TSCH3DSageFillData : NSObject <TSCH3DSageFillData>
{
    NSDictionary *mProperties;
    NSArray *mLayersProperties;
    TSCH3DFillSetIdentifier *mIdentifier;
    NSObject<TSCH3DSageFillImageDataSource> *mImageSource;
    _Bool mIsLowRes;
}

+ (id)dataWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4 isLowRes:(_Bool)arg5;
+ (id)dataWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4;
+ (id)dataWithFillSetIdentifier:(id)arg1;
+ (id)dataWithFillSetIdentifier:(id)arg1 isLowRes:(_Bool)arg2;
+ (id)TSPImageDataFromTexture:(id)arg1;
+ (id)textureWithImageData:(id)arg1;
- (id)fillSetIdentifier;
- (id)textureForIndex:(unsigned long long)arg1;
- (id)layerLightenPercentageForIndex:(unsigned long long)arg1;
- (int)layerTilingModeForIndex:(unsigned long long)arg1;
- (long long)layerBlendModeForIndex:(unsigned long long)arg1;
- (_Bool)layerIsEnvironmentMapForIndex:(unsigned long long)arg1;
- (float)layerRotationForIndex:(unsigned long long)arg1;
- (float)layerScaleForIndex:(unsigned long long)arg1;
- (_Bool)isLayerEnabledForIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (id)objectForKey:(id)arg1 index:(unsigned long long)arg2;
- (struct Color)emissive;
- (struct Color)specular;
- (struct Color)diffuse;
- (struct Color)colorFromRedKey:(id)arg1 greenKey:(id)arg2 blueKey:(id)arg3 defaultGray:(float)arg4;
- (float)shininess;
- (float)opacity;
- (struct Color)makeGray:(float)arg1;
- (struct ColorResult)colorFromRedKey:(id)arg1 greenKey:(id)arg2 blueKey:(id)arg3;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4 isLowRes:(_Bool)arg5;
- (id)initWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4;

@end

