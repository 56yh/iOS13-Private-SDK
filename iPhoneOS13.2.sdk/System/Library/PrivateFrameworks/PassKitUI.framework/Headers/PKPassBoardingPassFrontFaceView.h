//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPassFrontFaceView.h>

@class UIImageView;

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView
{
    UIImageView *_transitImageView;
    UIImageView *_footerImageView;
}

- (id)_transitGlyphForTransitType:(long long)arg1;
- (void)layoutSubviews;
- (void)setShowsBarcodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createBodyContentViews;
- (id)templateForLayoutMode:(long long)arg1;

@end

