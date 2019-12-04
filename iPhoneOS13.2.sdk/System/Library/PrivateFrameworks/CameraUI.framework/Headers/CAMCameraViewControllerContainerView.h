//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CAMCameraViewControllerContainerView : UIView
{
    UIView *_viewfinderView;
    UIView *_customOverlayView;
    UIView *_additionalContentView;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIView *additionalContentView; // @synthesize additionalContentView=_additionalContentView;
@property(retain, nonatomic) UIView *customOverlayView; // @synthesize customOverlayView=_customOverlayView;
@property(retain, nonatomic) UIView *viewfinderView; // @synthesize viewfinderView=_viewfinderView;
- (void)verifyViewOrdering;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMCameraViewControllerContainerViewInitialization;

@end

