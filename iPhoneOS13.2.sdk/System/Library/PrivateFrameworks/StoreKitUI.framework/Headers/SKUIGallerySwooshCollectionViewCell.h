//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell
{
    UIView *_contentChildView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UIView *contentChildView; // @synthesize contentChildView=_contentChildView;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setColoringWithColorScheme:(id)arg1;

@end

