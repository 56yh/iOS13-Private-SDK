//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/UITextFieldDelegate-Protocol.h>
#import <WorkflowUI/UITextViewDelegate-Protocol.h>
#import <WorkflowUI/WFVariableInsertionFieldDelegate-Protocol.h>

@class NSSet, NSString, UIColor, UIFont, WFTextScrollView, WFTextTokenTextField, WFVariableString;
@protocol WFTextField, WFTextTokenEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFTextTokenEditorView : UIView <UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate>
{
    _Bool _switching;
    _Bool _secureTextEntry;
    _Bool _editable;
    _Bool _variablesDisabled;
    id <WFTextTokenEditorViewDelegate> _delegate;
    UIFont *_font;
    NSString *_placeholder;
    long long _keyboardType;
    long long _textAlignment;
    NSString *_textContentType;
    long long _autocorrectionType;
    long long _autocapitalizationType;
    long long _smartQuotesType;
    long long _smartDashesType;
    UIColor *_textColor;
    unsigned long long _syntaxHighlightingType;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    unsigned long long _variableResultType;
    id /* block */ _updateBlock;
    id /* block */ _revealBlock;
    WFTextTokenTextField *_textField;
    WFTextScrollView *_scrollView;
}

@property(retain, nonatomic) WFTextScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WFTextTokenTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) id /* block */ revealBlock; // @synthesize revealBlock=_revealBlock;
@property(copy, nonatomic) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(nonatomic) unsigned long long variableResultType; // @synthesize variableResultType=_variableResultType;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long smartDashesType; // @synthesize smartDashesType=_smartDashesType;
@property(nonatomic) long long smartQuotesType; // @synthesize smartQuotesType=_smartQuotesType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak id <WFTextTokenEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)paste:(id)arg1;
- (void)insertVariable:(id)arg1;
- (void)textDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)beginEditingWithContext:(id)arg1;
- (void)selectRange:(struct _NSRange)arg1;
@property(copy, nonatomic) WFVariableString *variableString;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;
- (void)removeTextChangeObserver;
- (void)layoutSubviews;
- (void)setUsesTextView:(_Bool)arg1;
- (_Bool)usesTextView;
@property(readonly, nonatomic) UIView<WFTextField> *currentField;
- (id)currentView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

