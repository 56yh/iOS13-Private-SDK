//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIStackView;

@interface HUActivityLoadingView : UIView
{
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIStackView *_titleSpinnerStackView;
    UIStackView *_mainStackView;
}

+ (id)watchedKeyPaths;
@property(readonly, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(readonly, nonatomic) UIStackView *titleSpinnerStackView; // @synthesize titleSpinnerStackView=_titleSpinnerStackView;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_watchLabelsForContentAndResizeIfNecessary;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 activityIndicatorStyle:(long long)arg2;

@end

