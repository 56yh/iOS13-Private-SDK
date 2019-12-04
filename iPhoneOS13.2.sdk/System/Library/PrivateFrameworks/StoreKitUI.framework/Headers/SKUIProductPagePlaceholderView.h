//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPagePlaceholderView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithPlaceholderString:(id)arg1 isPad:(_Bool)arg2;

@end

