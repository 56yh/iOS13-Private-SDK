//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CKLTrafficLogMessage : NSObject
{
    NSString *_uuid;
    NSDate *_requestTime;
    NSString *_requestMethod;
    NSURL *_requestURL;
    NSDictionary *_requestHeaders;
    long long _bodyStreamResetCount;
    NSArray *_requestObjects;
    long long _responseStatus;
    NSDate *_responseTime;
    NSDictionary *_responseHeaders;
    NSArray *_responseObjects;
}

@property(retain, nonatomic) NSArray *responseObjects; // @synthesize responseObjects=_responseObjects;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(readonly, nonatomic) NSDate *responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) long long responseStatus; // @synthesize responseStatus=_responseStatus;
@property(retain, nonatomic) NSArray *requestObjects; // @synthesize requestObjects=_requestObjects;
@property(nonatomic) long long bodyStreamResetCount; // @synthesize bodyStreamResetCount=_bodyStreamResetCount;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property(retain, nonatomic) NSDate *requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)description;
- (id)_initWithUUID:(id)arg1 requestMetadata:(id)arg2 requestObjects:(id)arg3 bodyStreamResetCount:(long long)arg4 responseMetadata:(id)arg5 responseObjects:(id)arg6;

@end

