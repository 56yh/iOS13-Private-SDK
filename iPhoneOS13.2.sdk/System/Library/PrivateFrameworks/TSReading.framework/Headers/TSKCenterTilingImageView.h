//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface TSKCenterTilingImageView : UIView
{
    UIImage *mLeftCapImage;
    UIImage *mCenterTileImage;
    UIImage *mRightCapImage;
}

@property(retain, nonatomic) UIImage *rightCapImage; // @synthesize rightCapImage=mRightCapImage;
@property(retain, nonatomic) UIImage *centerTileImage; // @synthesize centerTileImage=mCenterTileImage;
@property(retain, nonatomic) UIImage *leftCapImage; // @synthesize leftCapImage=mLeftCapImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

