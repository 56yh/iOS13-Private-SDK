//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class WiFiAwareDataSession, WiFiAwarePublishDatapathServiceSpecificInfo, WiFiMACAddress;

@protocol WiFiAwareDataSessionDelegate 
- (void)dataSession:(WiFiAwareDataSession *)arg1 terminatedWithReason:(long long)arg2;
- (void)dataSession:(WiFiAwareDataSession *)arg1 confirmedForPeerDataAddress:(WiFiMACAddress *)arg2 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg3;
- (void)dataSession:(WiFiAwareDataSession *)arg1 failedToStartWithError:(long long)arg2;
- (void)dataSessionRequestStarted:(WiFiAwareDataSession *)arg1;
@end

