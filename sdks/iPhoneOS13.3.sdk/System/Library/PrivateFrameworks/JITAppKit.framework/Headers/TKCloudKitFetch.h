//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableURLRequest, NSURL, TMLJSONObject;
@protocol TKNetworkTask;

@interface TKCloudKitFetch : NSObject
{
    id <TKNetworkTask> _queryTask;
    id <TKNetworkTask> _downloadTask;
    BOOL _active;
    BOOL _cancelled;
    NSMutableURLRequest *_urlRequest;
    NSError *_error;
    TMLJSONObject *_response;
    NSURL *_downloadURL;
}

@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) TMLJSONObject *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
// - (void).cxx_destruct;
- (void)handleDownloadResponse:(id)arg1 error:(id)arg2;
- (void)downloadAssetFromCloudKit;
- (void)handleResponse:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (void)cancel;
- (void)send;
- (void)tmlDispose;
- (void)dealloc;
- (id)init;

@end

