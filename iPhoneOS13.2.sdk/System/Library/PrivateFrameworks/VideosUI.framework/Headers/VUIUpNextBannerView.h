//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/TVRowHosting-Protocol.h>

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIUpNextBannerView : UIView <TVRowHosting>
{
    struct {
        _Bool respondsToRowMetricsForExpectedWidth;
        _Bool respondsToShouldBindRowsTogether;
        _Bool respondsToShowcaseRowMetricsForExpectedWidth;
    } _shelfViewFlags;
    UIView *_shelfView;
    UIVisualEffectView *_backgroundVisualEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // @synthesize backgroundVisualEffectView=_backgroundVisualEffectView;
@property(retain, nonatomic) UIView *shelfView; // @synthesize shelfView=_shelfView;
@property(readonly, nonatomic) _Bool shouldBindRowsTogether;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 addBlurBackground:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

