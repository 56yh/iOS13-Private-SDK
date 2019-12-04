//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface SKUILinkButton : UIButton
{
    long long _arrowStyle;
}

+ (id)buttonWithArrowStyle:(long long)arg1;
@property(readonly, nonatomic) long long arrowStyle; // @synthesize arrowStyle=_arrowStyle;
- (void)_reloadIcons;
- (double)_linkImagePaddingLeft;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithArrowStyle:(long long)arg1;

@end

