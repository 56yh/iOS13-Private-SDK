//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

#import <WorkflowUI/WFVariablesViewControllerDelegate-Protocol.h>

@class NSArray, NSString, UIImageView, WFVariablesViewController;
@protocol WFVariableProvider, WFVariableShortcutsTrayDelegate;

@interface WFVariableShortcutsTray : UIInputView <WFVariablesViewControllerDelegate>
{
    id <WFVariableShortcutsTrayDelegate> _delegate;
    WFVariablesViewController *_variablesViewController;
    WFVariablesViewController *_specialVariablesViewController;
    UIImageView *_keyboardImageView;
}

@property(retain, nonatomic) UIImageView *keyboardImageView; // @synthesize keyboardImageView=_keyboardImageView;
@property(retain, nonatomic) WFVariablesViewController *specialVariablesViewController; // @synthesize specialVariablesViewController=_specialVariablesViewController;
@property(retain, nonatomic) WFVariablesViewController *variablesViewController; // @synthesize variablesViewController=_variablesViewController;
@property(nonatomic) __weak id <WFVariableShortcutsTrayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)variablesViewControllerDidSelectMagicVariable:(id)arg1;
- (void)variablesViewController:(id)arg1 didSelectVariable:(id)arg2;
@property(copy, nonatomic) NSArray *suggestedVariables;
@property(copy, nonatomic) NSArray *specialVariables;
@property(nonatomic) _Bool showsUserDefinedVariables;
@property(nonatomic) _Bool showsMagicVariableButton;
@property(copy, nonatomic) NSArray *userDefinedVariableNames;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider;
- (id)keyboardWindow;
- (void)obsureWithCompletion:(id /* block */)arg1;
- (void)reveal;
- (void)prepareReveal;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

