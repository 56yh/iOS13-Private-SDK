//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SBSwitcherSnapshotImageView : UIView
{
    UIImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    unsigned long long _maskedCorners;
    _Bool _usesNonuniformScaling;
    _Bool _hasOpaqueContents;
    long long _orientationForClassicLayout;
}

@property(nonatomic) long long orientationForClassicLayout; // @synthesize orientationForClassicLayout=_orientationForClassicLayout;
@property(nonatomic) _Bool hasOpaqueContents; // @synthesize hasOpaqueContents=_hasOpaqueContents;
@property(nonatomic) _Bool usesNonuniformScaling; // @synthesize usesNonuniformScaling=_usesNonuniformScaling;
- (void)_updateCornerRadius;
- (_Bool)_isUsingExternalClassicLayout;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (double)_transformHorizontalScale;
- (struct CGAffineTransform)scalingTransform;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long maskedCorners;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIImage *image;
- (id)initWithImage:(id)arg1;

@end

