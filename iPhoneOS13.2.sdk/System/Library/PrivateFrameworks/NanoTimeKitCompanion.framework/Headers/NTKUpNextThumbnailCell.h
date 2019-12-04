//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>

@class CLKFont, NSArray, NSLayoutConstraint, NSString, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider>
{
    UILayoutGuide *_labelLayoutGuide;
    UILayoutGuide *_imageLayoutGuide;
    NTKUpNextImageView *_imageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescription3Constraints;
    NSArray *_withoutDescription3Constraints;
    NSLayoutConstraint *_imageLayoutGuideWidthConstraint;
    NSLayoutConstraint *_imageLayoutGuideHeightConstraint;
    _Bool _showingHeader;
    _Bool _showingThirdLine;
    _Bool _showingSmallThumbnail;
}

+ (struct CGSize)suggestedBodyImageSizeForDevice:(id)arg1;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)prepareForReuse;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (void)setPaused:(_Bool)arg1;
- (void)configureWithContent:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

