//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ADInterstitialAd, NSError;

@protocol ADInterstitialAdDelegate 
- (void)interstitialAd:(ADInterstitialAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)interstitialAdDidUnload:(ADInterstitialAd *)arg1;

@optional
- (void)interstitialAdActionDidFinish:(ADInterstitialAd *)arg1;
- (_Bool)interstitialAdActionShouldBegin:(ADInterstitialAd *)arg1 willLeaveApplication:(_Bool)arg2;
- (void)interstitialAdDidLoad:(ADInterstitialAd *)arg1;
- (void)interstitialAdWillLoad:(ADInterstitialAd *)arg1;
@end

