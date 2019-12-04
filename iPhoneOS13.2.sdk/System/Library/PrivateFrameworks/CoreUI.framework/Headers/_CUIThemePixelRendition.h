//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, NSMutableArray, _CSIRenditionBlockData;

__attribute__((visibility("hidden")))
@interface _CUIThemePixelRendition : CUIThemeRendition
{
    unsigned int _nimages;
    struct CGImage *_image[16];
    struct CGImage *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
    _CSIRenditionBlockData *_cachedBlockDataGray;
    unsigned long long _sourceRowbytes;
    NSMutableArray *_layers;
    struct CGSize _unslicedSize;
}

- (_Bool)edgesOnly;
- (_Bool)isScaled;
- (_Bool)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (id)layerReferences;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (struct CGImage *)unslicedImage;
- (void)dealloc;
- (unsigned long long)sourceRowbytes;
- (void)setSharedBlockData:(id)arg1;
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;
- (struct CGSize)unslicedSize;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (struct CGImage *)newImageFromCSIDataSlice:(struct _slice)arg1 ofBitmap:(struct _csibitmap *)arg2 usingColorspace:(struct CGColorSpace *)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end

