//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PXImageRequester, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@protocol PXMutableImageRequester 
@property(nonatomic) struct CGSize viewportSize;
@property(nonatomic) struct CGRect desiredContentsRect;
@property(nonatomic) struct CGSize maximumRequestSize;
@property(nonatomic) double scale;
@property(nonatomic) struct CGRect cropRect;
@property(nonatomic) struct CGSize contentSize;
@property(retain, nonatomic) id <PXDisplayAsset> asset;
@property(retain, nonatomic) id <PXUIImageProvider> mediaProvider;
- (void)handlePreloadedImageRequester:(PXImageRequester *)arg1;
- (void)handlePreloadedImage:(UIImage *)arg1;
@end

