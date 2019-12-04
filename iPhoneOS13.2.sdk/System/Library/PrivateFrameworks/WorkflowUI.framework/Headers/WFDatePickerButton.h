//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <WorkflowUI/WFInputViewMutable-Protocol.h>

@class NSDate, NSSet, NSString, UIDatePicker, UIView, WFVariableInputCoordinator;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFDatePickerButton : UIButton <WFInputViewMutable>
{
    UIView *_inputView;
    UIView *_inputAccessoryView;
    NSDate *_currentDate;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _datePickerMode;
    NSSet *_allowedVariableTypes;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id /* block */ _updateBlock;
    id /* block */ _variableBlock;
    UIDatePicker *_datePicker;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property(retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(copy, nonatomic) id /* block */ variableBlock; // @synthesize variableBlock=_variableBlock;
@property(copy, nonatomic) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)datePickerValueChanged;
- (void)tintColorDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

