//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <ManagedConfigurationUI/MCUIScrollAnimationResponder-Protocol.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageSubtitleCell : UITableViewCell <MCUIScrollAnimationResponder>
{
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(BOOL)arg3;
- (void)_updateConstraintsWithLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

