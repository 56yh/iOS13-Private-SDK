//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKStackedTextItemGroup, PKStackedTextItemGroupView;

@interface PKStackedTextItemGroupCell : PKTableViewCell
{
    PKStackedTextItemGroupView *_groupView;
    long long _style;
    _Bool _animated;
}

- (void)setContent:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) PKStackedTextItemGroup *content;
- (struct CGRect)_separatorFrame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutIfNeededAnimated:(_Bool)arg1;
- (id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

