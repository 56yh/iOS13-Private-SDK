//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXCMMImageView, PXCMMPosterHeaderViewModel, PXCMMPosterHeaderViewSpec, PXGradientView, UIImageView, UILabel;

@interface PXCMMPosterHeaderView : UIView <PXChangeObserver>
{
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    UIImageView *_statusCheckmark;
    PXCMMPosterHeaderViewModel *_viewModel;
    long long _presentationStyle;
}

+ (void)preheatSharedValuesForPresentationStyle:(long long)arg1;
+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
@property(readonly, nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (_Bool)test_showStatusCheckmark;
- (id)test_statusString;
- (id)test_subtitle;
- (id)test_title;
- (void)_updateFonts;
- (void)_updateStatusString;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_performLayoutWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPresentationStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

