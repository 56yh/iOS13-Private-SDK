//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface HUWallpaperPhotoCollectionCell : UITableViewCell
{
    UIImageView *_imageThumbnailView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_imageSizeConstraints;
    NSArray *_horizontalConstraints;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    CGSize _imageSize;
}

@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(retain, nonatomic) NSArray *imageSizeConstraints; // @synthesize imageSizeConstraints=_imageSizeConstraints;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageThumbnailView; // @synthesize imageThumbnailView=_imageThumbnailView;
@property(nonatomic) CGSize imageSize; // @synthesize imageSize=_imageSize;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSString *descriptionText;
@property(retain, nonatomic) NSString *titleText;
@property(retain, nonatomic) UIImage *image;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

