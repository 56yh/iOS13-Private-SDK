//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ENOAuthViewController, NSError, NSURL;

@protocol ENOAuthViewControllerDelegate 
- (void)oauthViewController:(ENOAuthViewController *)arg1 receivedOAuthCallbackURL:(NSURL *)arg2;
- (void)oauthViewController:(ENOAuthViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)oauthViewControllerDidSwitchProfile:(ENOAuthViewController *)arg1;
- (void)oauthViewControllerDidCancel:(ENOAuthViewController *)arg1;
@end

