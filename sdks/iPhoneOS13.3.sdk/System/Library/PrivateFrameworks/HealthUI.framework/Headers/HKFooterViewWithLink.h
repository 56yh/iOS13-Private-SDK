//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>


@class UITextView;

@interface HKFooterViewWithLink : UITableViewHeaderFooterView <UITextViewDelegate>
{
    UITextView *_footerTextView;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
// - (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
- (void)_setupConstraints;
- (void)_setUpFooterTextViewWithBodyText:(id)arg1 linkText:(id)arg2 link:(id)arg3;
- (id)initWithReuseIdentifier:(id)arg1 bodyText:(id)arg2 linkText:(id)arg3 link:(id)arg4;

@end

