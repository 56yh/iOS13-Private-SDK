//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HAPRelayStream, NSData, NSError, NSString;

@protocol HAPStreamDelegate 
- (void)stream:(HAPRelayStream *)arg1 didReceiveData:(NSData *)arg2 withIdentifier:(NSString *)arg3;
- (void)stream:(HAPRelayStream *)arg1 didFailToWriteDataWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)stream:(HAPRelayStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)streamDidResume:(HAPRelayStream *)arg1;
- (void)streamDidSuspend:(HAPRelayStream *)arg1;
@end

