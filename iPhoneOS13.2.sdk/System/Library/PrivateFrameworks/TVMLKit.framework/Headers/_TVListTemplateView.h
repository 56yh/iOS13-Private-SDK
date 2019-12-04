//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIFocusContainerGuide, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _TVListTemplateView : UIView
{
    UIVisualEffectView *_backdropView;
    UIVisualEffectView *_bgVisualEffectView;
    double _bgVisualEffectOffset;
    UIFocusContainerGuide *_previewFocusGuide;
    _Bool _backdropEnabled;
    _Bool _floatingBanner;
    _Bool _shouldAdjustListForTabBar;
    _Bool _shouldAdjustPreviewForTabBar;
    UIView *_bgImageView;
    UIView *_bannerView;
    UIView *_listView;
    UIView *_previewView;
}

@property(nonatomic) _Bool shouldAdjustPreviewForTabBar; // @synthesize shouldAdjustPreviewForTabBar=_shouldAdjustPreviewForTabBar;
@property(nonatomic) _Bool shouldAdjustListForTabBar; // @synthesize shouldAdjustListForTabBar=_shouldAdjustListForTabBar;
@property(nonatomic) _Bool floatingBanner; // @synthesize floatingBanner=_floatingBanner;
@property(nonatomic, getter=isBackdropEnabled) _Bool backdropEnabled; // @synthesize backdropEnabled=_backdropEnabled;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void)layoutSubviews;
@property(readonly, nonatomic) long long listAlignment;
- (void)adjustScrollForListView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)setOverlayBlurOffset:(double)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

