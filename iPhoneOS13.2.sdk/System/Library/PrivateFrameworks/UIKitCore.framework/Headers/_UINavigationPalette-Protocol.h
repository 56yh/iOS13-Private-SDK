//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UINavigationController, UIView;

@protocol _UINavigationPalette 
@property(nonatomic) struct UIEdgeInsets preferredContentInsets;
@property(nonatomic, getter=isVisibleWhenPinningBarIsHidden) _Bool visibleWhenPinningBarIsHidden;
@property(nonatomic) _Bool paletteShadowIsHidden;
@property(nonatomic) _Bool pinningBarShadowIsHidden;
@property(nonatomic) _Bool pinningBarShadowWasHidden;
@property(nonatomic, getter=isPinned) _Bool pinned;
@property(readonly, nonatomic) unsigned long long boundaryEdge;
@property(readonly, nonatomic) UINavigationController *navController;
@property(nonatomic, setter=_setPaletteOverridesPinningBar:) _Bool _paletteOverridesPinningBar;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (_Bool)paletteIsHidden;
- (_Bool)isAttached;
- (void)setFrame:(struct CGRect)arg1 isAnimating:(_Bool)arg2;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)_setTopConstraintConstant:(double)arg1;
@end
