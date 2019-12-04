//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, _UIBackdropView, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    _Bool _separatorOnTop;
    _Bool translucent;
    _Bool barWantsAdaptiveBackdrop;
    long long barStyle;
    UIColor *barTintColor;
    _UINavigationBarAppearanceStorage *appearanceStorage;
    UIView *_shadowView;
}

@property(nonatomic) _Bool barWantsAdaptiveBackdrop; // @synthesize barWantsAdaptiveBackdrop;
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent;
@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor;
@property(nonatomic) long long barStyle; // @synthesize barStyle;
@property(nonatomic) _Bool separatorOnTop; // @synthesize separatorOnTop=_separatorOnTop;
@property(readonly) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(_Bool *)arg1;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
- (void)updateBackgroundImage;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long backdropStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

