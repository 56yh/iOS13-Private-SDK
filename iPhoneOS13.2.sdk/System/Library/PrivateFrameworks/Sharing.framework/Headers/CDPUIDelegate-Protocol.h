//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CDPUIController, UIViewController;

@protocol CDPUIDelegate 
- (void)uiController:(CDPUIController *)arg1 didPresentRootViewController:(UIViewController *)arg2;

@optional
- (void)uiController:(CDPUIController *)arg1 preparePresentationContext:(void (^)(void))arg2;
- (void)uiController:(CDPUIController *)arg1 prepareAlertContext:(void (^)(void))arg2;
@end

