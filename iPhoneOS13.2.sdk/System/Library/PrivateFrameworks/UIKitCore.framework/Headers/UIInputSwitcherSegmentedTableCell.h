//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInputSwitcherTableCell.h>

@class UIInputSwitcherSegmentControl;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell
{
    UIInputSwitcherSegmentControl *_segmentControl;
}

+ (struct CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1;
@property(readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void)setUsesDarkTheme:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

