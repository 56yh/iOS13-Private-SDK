//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchBarPromptContainerView : UIView
{
    long long _barMetrics;
    UILabel *_promptLabel;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)useMini;
- (_Bool)_isKnownUISearchBarComponentContainer;

@end

