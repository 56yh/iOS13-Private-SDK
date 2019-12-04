//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, SKUIComposeTextFieldConfiguration, UILabel, UITextField;

__attribute__((visibility("hidden")))
@interface SKUIComposeTextField : UIView <UITextFieldDelegate>
{
    SKUIComposeTextFieldConfiguration *_configuration;
    long long _currentTextLength;
    id _delegate;
    UILabel *_label;
    long long _style;
    UITextField *_textField;
}

+ (id)labelColorForStyle:(long long)arg1;
+ (id)labelFontForStyle:(long long)arg1;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void)_textChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) SKUIComposeTextFieldConfiguration *configuration;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

