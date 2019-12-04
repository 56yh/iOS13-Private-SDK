//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>






@class NSData, NSError, NSInputStream, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface ENAFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying>
{
    _Bool _cancelled;
    short _state;
    NSURLConnection *_connection;
    NSSet *_runLoopModes;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    NSString *_responseString;
    long long _totalBytesRead;
    NSOutputStream *_outputStream;
    id /* block */ _uploadProgress;
    id /* block */ _downloadProgress;
    id /* block */ _authenticationAgainstProtectionSpace;
    id /* block */ _authenticationChallenge;
    id /* block */ _cacheResponse;
    id /* block */ _redirectResponse;
    NSRecursiveLock *_lock;
}

+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) id /* block */ redirectResponse; // @synthesize redirectResponse=_redirectResponse;
@property(copy, nonatomic) id /* block */ cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(copy, nonatomic) id /* block */ authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(copy, nonatomic) id /* block */ authenticationAgainstProtectionSpace; // @synthesize authenticationAgainstProtectionSpace=_authenticationAgainstProtectionSpace;
@property(copy, nonatomic) id /* block */ downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) id /* block */ uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) short state; // @synthesize state=_state;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)cancelConnection;
- (void)cancel;
- (void)finish;
- (void)operationDidStart;
- (void)start;
- (_Bool)isConcurrent;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (void)resume;
- (_Bool)isPaused;
- (void)pause;
- (void)setRedirectResponseBlock:(id /* block */)arg1;
- (void)setCacheResponseBlock:(id /* block */)arg1;
- (void)setAuthenticationChallengeBlock:(id /* block */)arg1;
- (void)setAuthenticationAgainstProtectionSpaceBlock:(id /* block */)arg1;
- (void)setDownloadProgressBlock:(id /* block */)arg1;
- (void)setUploadProgressBlock:(id /* block */)arg1;
@property(retain, nonatomic) NSInputStream *inputStream; // @dynamic inputStream;
- (void)setCompletionBlock:(id /* block */)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

