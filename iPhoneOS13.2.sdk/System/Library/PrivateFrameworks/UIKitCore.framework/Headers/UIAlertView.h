//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIAlertController, UIViewController, _UIAlertControllerShimPresenter;

@interface UIAlertView : UIView
{
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    id _retainedSelf;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _defaultButtonIndex;
    long long _firstOtherButtonIndex;
    NSString *_message;
    NSString *_subtitle;
    long long _alertViewStyle;
    _Bool _hasPreparedAlertActions;
    _Bool _isPresented;
    _Bool _alertControllerShouldDismiss;
    _Bool _handlingAlertActionShouldDismiss;
    _Bool _dismissingAlertController;
    id _delegate;
    id _context;
    UIViewController *_externalViewControllerForPresentation;
}

+ (id)_alertViewForWindow:(id)arg1;
+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_remoteAlertViewWithBlock:(id /* block */)arg1;
@property(retain, nonatomic, getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:) UIViewController *externalViewControllerForPresentation; // @synthesize externalViewControllerForPresentation=_externalViewControllerForPresentation;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)_alertController;
- (void)setTableShouldShowMinimumContent:(_Bool)arg1;
- (id)_addButtonWithTitle:(id)arg1;
- (id)tableView;
- (id)keyboard;
- (id)titleLabel;
- (id)_titleLabel;
- (void)layout;
- (void)dismiss;
@property(retain, nonatomic) NSString *bodyText;
@property(nonatomic) _Bool groupsTextFields;
- (void)_setAccessoryView:(id)arg1;
@property(nonatomic) long long numberOfRows;
- (struct CGSize)backgroundSize;
- (_Bool)_isAnimating;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)show;
- (void)_showAnimated:(_Bool)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (id)textField;
- (int)textFieldCount;
- (void)_textDidChangeInTextField:(id)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (int)buttonCount;
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (void)_updateFirstOtherButtonEnabledState;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
@property(nonatomic) long long cancelButtonIndex;
@property(nonatomic) long long defaultButtonIndex;
- (long long)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (void)_setIsPresented:(_Bool)arg1;
- (void)_dismissForTappedIndex:(long long)arg1;
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (id)window;
@property(nonatomic) long long alertViewStyle;
- (void)_updateMessageAndSubtitle;
@property(retain, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)_prepareAlertActions;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

