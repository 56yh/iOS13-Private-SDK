//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell
{
    UIButton *_button;
    double _rightMargin;
    _Bool _rightMarginAdjusted;
    id _tapTarget;
    SEL _tapAction;
}

@property(readonly) UIButton *button; // @synthesize button=_button;
@property(readonly) UILabel *label;
@property(nonatomic) double rightMargin;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

