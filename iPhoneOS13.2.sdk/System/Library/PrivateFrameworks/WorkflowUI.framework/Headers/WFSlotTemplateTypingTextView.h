//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <WorkflowUI/WFSlotTemplateTextEntry-Protocol.h>

@class NSDictionary, NSString, UIFont, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol UITextInputDelegate, UITextInputTokenizer, WFSlotTemplateTypingTextViewDelegate;

@interface WFSlotTemplateTypingTextView : UITextView <WFSlotTemplateTextEntry>
{
    _Bool _clearsZeroWhenTyping;
    UIView *_inputHintView;
    UIFont *_emojiOverrideFont;
}

@property(retain, nonatomic) UIFont *emojiOverrideFont; // @synthesize emojiOverrideFont=_emojiOverrideFont;
@property(retain, nonatomic) UIView *inputHintView; // @synthesize inputHintView=_inputHintView;
@property(nonatomic) _Bool clearsZeroWhenTyping; // @synthesize clearsZeroWhenTyping=_clearsZeroWhenTyping;
- (struct CGRect)accessibilityFrame;
- (void)wf_applyEmojiOverrideFont;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)insertText:(id)arg1;
- (void)deleteBackward;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WFSlotTemplateTypingTextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UIFont *font;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly) NSUInteger hash;
@property(retain, nonatomic) UIView *inputAccessoryView;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(retain, nonatomic) UIView *inputView;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

@end

