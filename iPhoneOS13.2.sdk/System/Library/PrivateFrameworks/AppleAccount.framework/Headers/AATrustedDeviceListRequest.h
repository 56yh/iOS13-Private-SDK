//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest : AARequest
{
    AAGrandSlamSigner *_grandSlamSigner;
    NSString *_heartbeatToken;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3;

@end

