//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PXFeedSectionInfo, UIImage, UIImageView, UILabel;

@interface PXSharedAlbumHeaderView : UIView
{
    _Bool _useInPopover;
    _Bool _isNew;
    _Bool _isObservingLastExitedForYou;
    unsigned long long _textColorStyle;
    unsigned long long _tappableArea;
    unsigned long long _layoutStyle;
    PXFeedSectionInfo *_sectionInfo;
    UIImage *_headerImage;
    unsigned long long _headerImageTag;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_chevronView;
}

+ (void)preloadResources;
@property(nonatomic) _Bool isObservingLastExitedForYou; // @synthesize isObservingLastExitedForYou=_isObservingLastExitedForYou;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) unsigned long long headerImageTag; // @synthesize headerImageTag=_headerImageTag;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) PXFeedSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) unsigned long long tappableArea; // @synthesize tappableArea=_tappableArea;
@property(nonatomic) unsigned long long textColorStyle; // @synthesize textColorStyle=_textColorStyle;
@property(nonatomic) _Bool useInPopover; // @synthesize useInPopover=_useInPopover;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateUI;
- (_Bool)_showChevron;
- (_Bool)_showSubtitle;
- (void)_updateIsNew;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_updateAvatar:(unsigned long long)arg1;
- (void)_updateHeaderImage;
- (void)_updateBackgroundColor;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

