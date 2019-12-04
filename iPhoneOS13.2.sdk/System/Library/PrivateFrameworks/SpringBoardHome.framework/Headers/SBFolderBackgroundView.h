//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView;
@protocol SBFolderBackgroundViewDelegate;

@interface SBFolderBackgroundView : UIView
{
    UIView *_tintView;
    MTMaterialView *_blurView;
    double _continuousCornerRadius;
    id <SBFolderBackgroundViewDelegate> _delegate;
    unsigned long long _effect;
    unsigned long long _currentEffect;
}

+ (double)cornerRadiusToInsetContent;
+ (struct CGSize)folderBackgroundSize;
+ (void)warmupIfNecessary;
@property(nonatomic) unsigned long long currentEffect; // @synthesize currentEffect=_currentEffect;
@property(nonatomic) unsigned long long effect; // @synthesize effect=_effect;
@property(nonatomic) __weak id <SBFolderBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_tintViewBackgroundColorAtFullAlpha;
- (_Bool)_hasLowQualityBackground;
- (void)updateTintEffectColor;
- (void)_updateCurrentEffect;
@property(readonly, nonatomic) unsigned long long concreteEffect;
- (void)_reduceTransparencyChanged;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
