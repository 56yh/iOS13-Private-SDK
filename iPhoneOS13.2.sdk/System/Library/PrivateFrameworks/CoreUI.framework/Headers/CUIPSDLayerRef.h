//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
{
}

- (id)colorFill;
- (id)layerEffects;
- (id)gradient;
- (id)fillSample;
- (id)maskFromSlice:(unsigned int)arg1;
- (id)patternFromSlice:(unsigned int)arg1 isZeroSizeImage:(_Bool *)arg2;
- (id)patternFromSlice:(unsigned int)arg1;
- (id)imageFromSlice:(unsigned int)arg1 isEmptyImage:(_Bool *)arg2;
- (id)imageFromSlice:(unsigned int)arg1;
- (id)imageIsZeroSizeImage:(_Bool *)arg1;
- (id)image;
- (struct CGImage *)createCGImage;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;

@end

