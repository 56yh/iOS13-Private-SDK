//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSURL, _SFFormAutoFillController;

@protocol SFFormAutoFillControllerDelegate 
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;

@optional
- (_Bool)formAutoFillControllerShouldShowIconsInPasswordPicker:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(_SFFormAutoFillController *)arg1 completion:(void (^)(_Bool))arg2;
- (_Bool)formAutoFillControllerShouldDisableStreamlinedLogin:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerDidFocusSensitiveFormField:(_SFFormAutoFillController *)arg1;
@end

