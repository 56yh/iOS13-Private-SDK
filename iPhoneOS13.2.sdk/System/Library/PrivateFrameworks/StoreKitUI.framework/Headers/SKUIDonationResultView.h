//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultView : UIView
{
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) UIImage *image;

@end

