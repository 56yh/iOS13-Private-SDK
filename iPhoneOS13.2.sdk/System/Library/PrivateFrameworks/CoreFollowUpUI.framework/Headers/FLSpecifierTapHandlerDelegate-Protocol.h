//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FLSpecifierTapHandler, UIViewController;

@protocol FLSpecifierTapHandlerDelegate 
- (void)startPresentingForHandler:(FLSpecifierTapHandler *)arg1 withRemoteController:(UIViewController *)arg2;

@optional
- (void)preflightNetworkConnectivityForHandler:(FLSpecifierTapHandler *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

