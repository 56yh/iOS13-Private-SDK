//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AVTUIAnimatingImageView, CAShapeLayer, NSUUID, UIButton;

@interface AVTFunCamAvatarPickerCollectionViewCell : UICollectionViewCell
{
    _Bool _selectionVisible;
    _Bool _roundImageCorners;
    _Bool _showsTitle;
    NSUUID *_displaySessionUUID;
    id /* block */ _imageInsetProvider;
    long long _imageContentMode;
    AVTUIAnimatingImageView *_imageView;
    UIButton *_accessoryButton;
    CAShapeLayer *_selectionLayer;
    struct CGSize _engagedSize;
}

+ (struct CGPath *)selectionPathInBounds:(struct CGRect)arg1;
+ (id)cellIdentifier;
@property(readonly, nonatomic) CAShapeLayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(readonly, nonatomic) AVTUIAnimatingImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize engagedSize; // @synthesize engagedSize=_engagedSize;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) _Bool roundImageCorners; // @synthesize roundImageCorners=_roundImageCorners;
@property(nonatomic) _Bool selectionVisible; // @synthesize selectionVisible=_selectionVisible;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(copy, nonatomic) id /* block */ imageInsetProvider; // @synthesize imageInsetProvider=_imageInsetProvider;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
- (void)prepareForReuse;
- (void)updateSelectionLayer;
- (void)setSelected:(_Bool)arg1;
- (void)setImageZoomFactor:(double)arg1;
- (void)updateWithTintColor:(id)arg1;
- (void)updateWithImage:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

