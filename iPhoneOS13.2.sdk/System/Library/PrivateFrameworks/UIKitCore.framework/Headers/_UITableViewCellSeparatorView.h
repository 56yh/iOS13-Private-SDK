//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UITableViewCellSeparatorView : UIView
{
    UIView *_backgroundView;
    UIView *_overlayView;
    UIVisualEffect *_separatorEffect;
    UIVisualEffectView *_effectView;
    _Bool _drawsWithVibrantLightMode;
}

@property(retain, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property(nonatomic) _Bool drawsWithVibrantLightMode; // @synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode;
- (void)layoutSubviews;

@end

