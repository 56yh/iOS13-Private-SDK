//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SAUIDomainObjectPickerSelection, SiriUIObjectPickerViewController, UIViewController;

@protocol SiriUIObjectPickerViewControllerDelegate 
- (UIViewController *)viewControllerForPickerPresentation:(SiriUIObjectPickerViewController *)arg1;

@optional
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didSelectObject:(SAUIDomainObjectPickerSelection *)arg2 fromPicker:(UIViewController *)arg3;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willPresentPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
@end

