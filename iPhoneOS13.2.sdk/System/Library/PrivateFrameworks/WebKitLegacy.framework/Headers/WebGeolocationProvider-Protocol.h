//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class WebGeolocationPosition, WebView;
@protocol WebGeolocationProviderInitializationListener;

@protocol WebGeolocationProvider 
- (void)stopTrackingWebView:(WebView *)arg1;
- (void)initializeGeolocationForWebView:(WebView *)arg1 listener:(id <WebGeolocationProviderInitializationListener>)arg2;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (WebGeolocationPosition *)lastPosition;
- (void)unregisterWebView:(WebView *)arg1;
- (void)registerWebView:(WebView *)arg1;
@end

