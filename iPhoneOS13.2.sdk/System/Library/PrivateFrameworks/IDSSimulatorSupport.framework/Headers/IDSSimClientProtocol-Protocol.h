//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSString, NSUUID;

@protocol IDSSimClientProtocol 
- (void)connectionStateDidChange:(unsigned long long)arg1 simulatorID:(NSUUID *)arg2;
- (void)receiveData:(NSData *)arg1 withServiceName:(NSString *)arg2 messageID:(NSString *)arg3 completion:(void (^)(_Bool))arg4;
@end

