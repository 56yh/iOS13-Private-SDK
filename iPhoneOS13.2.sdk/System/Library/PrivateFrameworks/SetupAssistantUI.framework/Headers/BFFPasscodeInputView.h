//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol BFFPasscodeInputViewDelegate;

@interface BFFPasscodeInputView : UIView
{
    id <BFFPasscodeInputViewDelegate> _delegate;
    UILabel *_instructions;
    UIView *_footerView;
    UIButton *_footerButton;
    UIButton *_instructionsLinkButton;
}

@property(retain, nonatomic) UIButton *instructionsLinkButton; // @synthesize instructionsLinkButton=_instructionsLinkButton;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *instructions; // @synthesize instructions=_instructions;
@property(nonatomic) __weak id <BFFPasscodeInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)intrinsicContentSize;
- (void)shakePasscode;
- (void)disable;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutForBounds:(struct CGRect)arg1;
- (id)passcodeField;
- (void)_instructionsLinkButtonPressed;
- (void)setInstructionsLinkText:(id)arg1;
- (void)footerButtonPressed;
- (void)setFooterButtonText:(id)arg1;
- (id)passcodeDisplayView;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

