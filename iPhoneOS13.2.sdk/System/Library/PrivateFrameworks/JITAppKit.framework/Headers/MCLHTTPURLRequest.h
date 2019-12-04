//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCLURLDataLoaderTask, NSData, NSDictionary, NSError, NSString, NSURL;

@interface MCLHTTPURLRequest : NSObject
{
    MCLURLDataLoaderTask *_task;
    NSURL *_url;
    NSString *_httpMethod;
    NSDictionary *_httpHeaders;
    double _timeout;
    unsigned long long _statusCode;
    NSError *_error;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)handleCompletion:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)cancel;
- (void)sendText:(id)arg1;
- (void)sendData:(id)arg1;
- (void)send;
- (id)init;

@end

