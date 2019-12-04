//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVTUIAnimatingImageView, UIImage;

@interface AVTImageTransitioningContainerView : UIView
{
    UIView *_liveView;
    UIImage *_staticImage;
    long long _layoutMode;
    AVTUIAnimatingImageView *_imageViewsContainer;
    UIView *_borderMaskView;
    struct CGSize _aspectRatio;
}

+ (struct CGRect)borderMaskRectForContentRect:(struct CGRect)arg1;
+ (struct CGRect)imageViewRectForContentRect:(struct CGRect)arg1 liveViewRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 scale:(double)arg4;
+ (struct CGRect)liveViewRectForContentRect:(struct CGRect)arg1 aspectRatio:(struct CGSize)arg2 layoutMode:(long long)arg3 scale:(double)arg4;
@property(readonly, nonatomic) UIView *borderMaskView; // @synthesize borderMaskView=_borderMaskView;
@property(readonly, nonatomic) AVTUIAnimatingImageView *imageViewsContainer; // @synthesize imageViewsContainer=_imageViewsContainer;
@property(readonly, nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) UIImage *staticImage; // @synthesize staticImage=_staticImage;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView=_liveView;
- (void)setStaticViewVisible:(_Bool)arg1;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)layoutSubviews;
- (void)setStaticImage:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *staticView;
- (id)initWithFrame:(struct CGRect)arg1 layoutMode:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

