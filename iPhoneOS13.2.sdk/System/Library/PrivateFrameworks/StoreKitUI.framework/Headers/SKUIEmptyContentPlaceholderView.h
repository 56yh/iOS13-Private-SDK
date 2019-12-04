//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface SKUIEmptyContentPlaceholderView : UIView
{
    struct UIEdgeInsets _imageInsets;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}

@property(nonatomic) struct UIEdgeInsets placeholderImageInsets; // @synthesize placeholderImageInsets=_imageInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool showsSignInButton;
@property(readonly, nonatomic) UIButton *signInButton;
@property(copy, nonatomic) NSString *placeholderMessage;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) UILabel *placeholderMessageLabel;
- (void)maskPlaceholdersInBackdropView:(id)arg1;

@end

