//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, UIImageView;

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver>
{
    UIImageView *_imageView;
}

- (void)_updateImageViewFilters;
- (void)isDisplayingFullQualityContentDidChange;
- (_Bool)isDisplayingFullQualityContent;
- (void)contentsRectDidChange;
- (void)placeholderImageFiltersDidChange;
- (double)loadingProgress;
- (void)imageProgressDidChange;
- (void)imageDidChange;
- (id)contentView;
- (long long)playbackStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

