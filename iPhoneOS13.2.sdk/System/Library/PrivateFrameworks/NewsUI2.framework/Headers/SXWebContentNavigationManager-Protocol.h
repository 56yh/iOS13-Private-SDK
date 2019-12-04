//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, NSURLRequest, UIViewController;
@protocol SXWebContentNavigationHandler, SXWebContentNavigationObserver;

@protocol SXWebContentNavigationManager 
- (void)removeObserver:(id <SXWebContentNavigationObserver>)arg1;
- (void)addObserver:(id <SXWebContentNavigationObserver>)arg1;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1 extension:(NSString *)arg2;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1 scheme:(NSString *)arg2;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1;
- (void)commitViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;
- (_Bool)shouldPreviewRequest:(NSURLRequest *)arg1;
- (unsigned long long)actionForRequest:(NSURLRequest *)arg1;
@end

