//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSError, PRRemoteDevice;

@protocol PRRangingClientProtocol 
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;
- (void)didFailWithError:(NSError *)arg1;

@optional
- (void)remoteDevice:(PRRemoteDevice *)arg1 didChangeState:(long long)arg2;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)didReceiveNewSolutions:(NSArray *)arg1;
@end

