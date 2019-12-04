//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

@class VUIImageView, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell
{
    VUIImageView *_imageView;
    _Bool _hideChevron;
    VUILabel *_titleLabel;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
}

@property(nonatomic) _Bool hideChevron; // @synthesize hideChevron=_hideChevron;
@property(readonly, nonatomic) VUISeparatorView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(readonly, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

