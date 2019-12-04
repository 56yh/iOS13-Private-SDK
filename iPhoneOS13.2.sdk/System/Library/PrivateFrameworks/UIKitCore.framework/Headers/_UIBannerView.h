//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CALayer, UIImageView, UILabel, _UIBannerContent;

__attribute__((visibility("hidden")))
@interface _UIBannerView : UIView
{
    _Bool _highlighted;
    _UIBannerContent *_content;
    CALayer *_backgroundLayer;
    UIView *_highlightView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_imageView;
}

@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) _UIBannerContent *content; // @synthesize content=_content;
- (void)setHighlighted:(_Bool)arg1 initialPress:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

