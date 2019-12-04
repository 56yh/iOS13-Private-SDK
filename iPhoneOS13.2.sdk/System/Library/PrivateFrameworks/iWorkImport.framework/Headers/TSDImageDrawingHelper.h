//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDRep, TSPData;
@protocol TSDImageDrawingDataSource;

__attribute__((visibility("hidden")))
@interface TSDImageDrawingHelper : NSObject
{
    TSDRep<TSDImageDrawingDataSource> *_rep;
}

@property(readonly, nonatomic) __weak TSDRep<TSDImageDrawingDataSource> *rep; // @synthesize rep=_rep;
- (struct CGSize)p_desiredSizedImageSize;
- (id)p_validatedThumbnailImageProvider;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)p_imageProvider;
- (struct CGSize)p_imagePixelSize;
@property(readonly, nonatomic) _Bool shouldShowCheckerboard;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
@property(readonly, nonatomic) _Bool drawsBitmap;
@property(readonly, nonatomic) _Bool drawsError;
@property(readonly, nonatomic) TSPData *imageDataForDrawing;
- (_Bool)p_canDrawThumbnailAsSizedImage;
- (struct CGRect)p_antialiasingDefeatedRectForRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1 forLayer:(_Bool)arg2 forShadowOrHitTest:(_Bool)arg3;
- (struct CGRect)imageRectInContext:(struct CGContext *)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end

