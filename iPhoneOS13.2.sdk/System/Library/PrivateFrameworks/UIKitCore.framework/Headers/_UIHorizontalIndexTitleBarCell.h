//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIView, _UIFocusFastScrollingIndexBarEntry;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell
{
    _UIFocusFastScrollingIndexBarEntry *_entry;
    UILabel *_titleLabel;
    UIView *_roundedCornersBackground;
}

+ (id)cellFont;
@property(retain, nonatomic) UIView *roundedCornersBackground; // @synthesize roundedCornersBackground=_roundedCornersBackground;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry; // @synthesize entry=_entry;
- (void)_updateColors;
- (_Bool)_isAnotherIndexTitleCellFocused;
- (void)updateForEntry:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

