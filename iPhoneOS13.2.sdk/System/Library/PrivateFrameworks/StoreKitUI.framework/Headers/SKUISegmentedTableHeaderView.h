//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;

@interface SKUISegmentedTableHeaderView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    UIView *_segmentedControl;
}

@property(readonly, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (id)_borderView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool hidesBorderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

