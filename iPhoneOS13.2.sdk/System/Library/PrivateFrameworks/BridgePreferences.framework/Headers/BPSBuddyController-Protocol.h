//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIViewController;
@protocol BPSBuddyControllerDelegate;

@protocol BPSBuddyController 
- (void)setDelegate:(id <BPSBuddyControllerDelegate>)arg1;
- (id <BPSBuddyControllerDelegate>)delegate;

@optional
+ (_Bool)controllerNeedsToRun;
- (_Bool)holdBeforeDisplaying;
- (_Bool)controllerAllowsNavigatingBackFrom;
- (_Bool)controllerAllowsNavigatingBackTo;
- (UIViewController *)viewController;
@end

