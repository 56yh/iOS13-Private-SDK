//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSURLRequest, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSMockURLResponse : NSObject
{
    _Bool _performActualRequest;
    unsigned long long _statusCode;
    NSDictionary *_headers;
    NSData *_body;
    NSURLRequest *_originalRequest;
    NSMutableArray *_responseHandlerBlocks;
    NSURLSessionTask *_runningTask;
}

+ (id)responseWithHARFile:(id)arg1;
+ (id)responseWithStatus:(unsigned long long)arg1 headers:(id)arg2 body:(id)arg3;
+ (id)responseFromActualResponse;
@property(retain, nonatomic) NSURLSessionTask *runningTask; // @synthesize runningTask=_runningTask;
@property(retain, nonatomic) NSMutableArray *responseHandlerBlocks; // @synthesize responseHandlerBlocks=_responseHandlerBlocks;
@property(readonly, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(nonatomic) _Bool performActualRequest; // @synthesize performActualRequest=_performActualRequest;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
- (void)stopRunningTasks;
- (void)addResponseHandler:(id /* block */)arg1;
- (CDStruct_0f015c83)handleReceivedRequest:(id)arg1;
- (id)init;

@end
