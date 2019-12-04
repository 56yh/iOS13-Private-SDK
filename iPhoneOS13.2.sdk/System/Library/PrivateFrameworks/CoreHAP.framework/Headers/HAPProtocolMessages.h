//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HAPProtocolMessages : HMFObject
{
}

+ (id)logCategory;
+ (id)parseInfoResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(_Bool)arg3;
+ (_Bool)parseTokenUpdateResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(_Bool)arg3;
+ (_Bool)parseTokenResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(_Bool)arg3 outToken:(id *)arg4 outUUID:(id *)arg5;
+ (id)constructRequestHeaderFor:(unsigned long long)arg1 instanceID:(id)arg2 outTID:(char *)arg3;
+ (id)constructTokenUpdateRequest:(id)arg1 token:(id)arg2 outTID:(char *)arg3;
+ (id)constructInfoRequest:(id)arg1 serviceUUID:(id)arg2 outTID:(char *)arg3;
+ (id)constructInfoRequest:(id)arg1 outTID:(char *)arg2;
+ (id)constructTokenRequest:(id)arg1 outTID:(char *)arg2;

@end

