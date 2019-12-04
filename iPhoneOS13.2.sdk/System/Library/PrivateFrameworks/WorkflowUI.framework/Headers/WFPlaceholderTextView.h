//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSAttributedString, NSString, UILabel;

@interface WFPlaceholderTextView : UITextView
{
    UILabel *_placeholderLabel;
}

@property(nonatomic) __weak UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void)textDidChange;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)invalidatePlaceholderFont;
- (void)setTypingAttributes:(id)arg1;
- (void)setFont:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property(copy, nonatomic) NSString *placeholder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

