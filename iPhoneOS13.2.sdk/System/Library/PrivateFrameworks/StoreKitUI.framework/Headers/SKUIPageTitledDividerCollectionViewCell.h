//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSNumber, NSString, SKUIButtonViewElement, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView>
{
    double _buttonContentHorizontalPadding;
    SKUIButtonViewElement *_buttonViewElement;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _contentInset;
    UIButton *_dividerButton;
    NSNumber *_dividerButtonImageRequestIdentifier;
    UILabel *_dividerLabel;
    struct UIEdgeInsets _imageVerticalPadding;
    struct UIEdgeInsets _internalHorizontalMargins;
    UIView *_leftLine;
    UIView *_rightLine;
    struct UIEdgeInsets _titleVerticalPadding;
    double _topEdgeInset;
}

+ (struct UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1;
+ (struct UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1;
+ (struct UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1;
+ (id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2;
+ (double)viewElementInsetDividerHeight:(id)arg1;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) double topEdgeInset; // @synthesize topEdgeInset=_topEdgeInset;
- (id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id *)arg2 context:(id)arg3;
- (void)_buttonAction:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
@property(copy, nonatomic) NSString *dividerTitle;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

