//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarPlaySupport/CPSInheritedBackgroundColorView.h>

@class UIActivityIndicatorView, UILabel;

@interface CPSPausedCardView : CPSInheritedBackgroundColorView
{
    UILabel *_title;
    UIActivityIndicatorView *_spinner;
}

@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UILabel *title; // @synthesize title=_title;
- (struct CGSize)intrinsicContentSize;
- (id)initWithTitle:(id)arg1 showsSpinner:(_Bool)arg2 backgroundColor:(id)arg3;
- (void)backgroundColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)backgroundColor;

@end

