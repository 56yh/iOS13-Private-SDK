//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STLockoutViewController.h>

#import <LockoutUI/LOViewController-Protocol.h>

@class NSString;
@protocol LOViewControllerDelegate;

@interface STLockoutViewController (LOViewController) <LOViewController>

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool didFinishDismissing;
@property(nonatomic, getter=isForSnapshot) _Bool forSnapshot;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <LOViewControllerDelegate> viewControllerDelegate;
@end

