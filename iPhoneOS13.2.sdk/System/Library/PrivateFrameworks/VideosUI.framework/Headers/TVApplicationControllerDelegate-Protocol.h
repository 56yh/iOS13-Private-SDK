//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class JSContext, NSDictionary, NSError, TVApplicationController, TVPlayer;

@protocol TVApplicationControllerDelegate 

@optional
- (TVPlayer *)playerForAppController:(TVApplicationController *)arg1;
- (void)appController:(TVApplicationController *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 didFailWithError:(NSError *)arg2;
- (void)appController:(TVApplicationController *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
@end

