//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXImageRequester, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequesterHelper : PXObservable <PXChangeObserver>
{
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
    double _scale;
    UIImage *_image;
    PXImageRequester *_imageRequester;
    struct CGSize _contentSize;
    struct CGRect _contentsRect;
}

@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) id <PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateContentsRect;
- (void)_updateImage;
- (void)_updateAssetOrMediaProvider;
- (void)_updateImageRequester;
- (void)setContentsRect:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)didPublishChanges;
- (void)performChanges:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

