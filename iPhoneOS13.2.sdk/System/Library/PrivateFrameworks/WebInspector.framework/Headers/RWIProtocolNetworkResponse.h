//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming, RWIProtocolSecurity;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolSecurity *security;
@property(retain, nonatomic) RWIProtocolNetworkResourceTiming *timing;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property(nonatomic) long long source;
@property(copy, nonatomic) NSString *mimeType;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property(copy, nonatomic) NSString *statusText;
@property(nonatomic) int status;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6;

@end

