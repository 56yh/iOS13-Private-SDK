//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class NSArray, UISegmentedControl;
@protocol TUICandidateViewStyle;

@interface TUICandidateSortControl : UIControl
{
    NSArray *_titles;
    id <TUICandidateViewStyle> _style;
    UISegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void)handleValueChanged;
@property(nonatomic) long long selectedIndex;
- (double)segmentedControlWidth;
- (struct CGRect)segmentedControlFrame;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

