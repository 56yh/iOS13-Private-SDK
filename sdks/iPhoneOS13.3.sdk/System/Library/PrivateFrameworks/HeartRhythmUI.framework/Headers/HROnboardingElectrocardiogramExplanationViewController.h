//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRStackedButtonView, HRVideoPlayerView, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    UILabel *_titleLabel;
    HRVideoPlayerView *_animatedWatchRhythmVideoView;
    UILabel *_bodyLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView; // @synthesize animatedWatchRhythmVideoView=_animatedWatchRhythmVideoView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (double)_videoViewBottomToBodyFirstBaseline;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (double)_titleBottomToVideoViewTop;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (void)_setUpButtonFooterView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initForOnboarding:(BOOL)arg1;

@end
