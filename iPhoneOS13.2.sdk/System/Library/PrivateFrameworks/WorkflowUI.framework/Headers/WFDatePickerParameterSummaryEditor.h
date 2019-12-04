//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowUI/WFNonViewResponderDelegate-Protocol.h>
#import <WorkflowUI/WFVariableUIDelegate-Protocol.h>

@class NSString, UIDatePicker, UIView, UIViewController, WFNonViewResponder, WFVariableInputCoordinator;

@interface WFDatePickerParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFNonViewResponderDelegate, WFVariableUIDelegate>
{
    _Bool _isPickingMagicVariable;
    UIViewController *_presentedViewController;
    UIView *_sourceView;
    UIDatePicker *_datePicker;
    WFNonViewResponder *_datePickerResponder;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property(nonatomic) _Bool isPickingMagicVariable; // @synthesize isPickingMagicVariable=_isPickingMagicVariable;
@property(retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property(retain, nonatomic) WFNonViewResponder *datePickerResponder; // @synthesize datePickerResponder=_datePickerResponder;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(id /* block */)arg3 goBackHandler:(id /* block */)arg4 scrolledAwayHandler:(id /* block */)arg5;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)responderWillResign:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)sourceViewTintColorDidChange;
- (void)datePickerValueChanged:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

