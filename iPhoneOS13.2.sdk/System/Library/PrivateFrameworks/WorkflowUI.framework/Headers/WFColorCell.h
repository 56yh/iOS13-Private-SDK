//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIView, WFFloatingView, WFGradient;

@interface WFColorCell : UICollectionViewCell
{
    NSString *_colorName;
    WFFloatingView *_floatingView;
    UIView *_selectedRingView;
}

@property(nonatomic) __weak UIView *selectedRingView; // @synthesize selectedRingView=_selectedRingView;
@property(readonly, nonatomic) WFFloatingView *floatingView; // @synthesize floatingView=_floatingView;
@property(copy, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(retain, nonatomic) WFGradient *gradient;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

