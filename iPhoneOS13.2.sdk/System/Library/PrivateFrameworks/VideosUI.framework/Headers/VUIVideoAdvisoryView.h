//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, VUIVideoAdvisoryViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryView : UIView
{
    VUIVideoAdvisoryViewLayout *_layout;
    _TVImageView *_logoImageView;
    UIView *_dividerView;
    NSArray *_legendViews;
}

@property(copy, nonatomic) NSArray *legendViews; // @synthesize legendViews=_legendViews;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) _TVImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // @synthesize layout=_layout;
- (void)_configureSubviewsWithDictionary:(id)arg1;
- (struct UIEdgeInsets)_dividerMargin;
- (struct UIEdgeInsets)_legendsMargin;
- (struct UIEdgeInsets)_logoMargin;
- (struct CGSize)_dividerSize;
- (struct CGSize)_legendSize;
- (struct CGSize)_logoSize;
- (struct UIEdgeInsets)_margin;
- (_Bool)_isPortrait;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRatingInfoDictionary:(id)arg1;
- (void)_hideWithAnimationWithCompletion:(id /* block */)arg1;
- (void)_hideAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_showWithAnimationWithCompletion:(id /* block */)arg1;
- (void)_showAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)show:(_Bool)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;

@end

