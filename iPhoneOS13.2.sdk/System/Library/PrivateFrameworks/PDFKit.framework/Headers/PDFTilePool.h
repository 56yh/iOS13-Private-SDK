//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFTilePoolPrivate;

__attribute__((visibility("hidden")))
@interface PDFTilePool : NSObject
{
    PDFTilePoolPrivate *_private;
}

+ (id)sharedPool;
- (int)activeTileCount;
- (void)releasePDFTileSurface:(id)arg1;
- (void)_renderTileForRequest:(id)arg1;
- (struct CGContext *)_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2;
- (id)_createTileSurfaceForRequest:(id)arg1;
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect)arg5 transform:(struct CGAffineTransform)arg6;
- (void)saveBitmapFiles;
- (int)tileSurfaceType;
- (void)setTileSurfaceType:(int)arg1;
- (int)tileSurfaceSize;
- (void)dealloc;
- (id)init;

@end

