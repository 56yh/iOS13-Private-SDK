//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFProcessedWallpaperSource-Protocol.h>

@class NSArray;

@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>
{
}

+ (id)_defaultBackdropSettings;
- (id)_imageByApplyingLayerEffects:(id)arg1 toImage:(id)arg2;
- (id)_layerWithCompositingFilterType:(id)arg1 color:(id)arg2;
- (id)_lightContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentDarkModeBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_processedImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_croppedImageFromWallpaper:(id)arg1 image:(id)arg2;
- (CGRect)_scaledCropRectForBounds:(CGRect)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
@property(readonly, nonatomic) NSUInteger processVersionNumber;
@property(readonly, copy, nonatomic) NSArray *supportedVariants;

@end

