//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMAssetResolver-Protocol.h>

@class NSURLSession;
@protocol OS_dispatch_queue;

@interface RMAssetResolver : NSObject <RMAssetResolver>
{
    NSURLSession *_URLSession;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (id)userAgent;
- (id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2;
- (_Bool)_validateAsset:(id)arg1 reference:(id)arg2 didFinishWithResponse:(id)arg3 data:(id)arg4 error:(id *)arg5;
- (id)downloadTaskWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithURLSession:(id)arg1;
- (id)initWithURLSessionConfiguration:(id)arg1;
- (id)init;

@end

