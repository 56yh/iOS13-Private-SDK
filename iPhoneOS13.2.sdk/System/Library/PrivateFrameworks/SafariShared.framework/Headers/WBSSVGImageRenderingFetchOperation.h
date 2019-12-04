//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSWebViewMetadataFetchOperation.h>

#import <SafariShared/WBSSVGImageRenderingObserver-Protocol.h>

@class NSMutableArray, NSString, NSTimer, WBSSVGImageRenderingRequest, _WKRemoteObjectInterface;

@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation <WBSSVGImageRenderingObserver>
{
    NSMutableArray *_remainingURLs;
    NSTimer *_loadingTimeoutTimer;
    _WKRemoteObjectInterface *_svgImageRenderingObserverInterface;
    id /* block */ _completionHandler;
}

@property(readonly, copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)didFailFetch;
- (void)willClearWebView;
- (void)didCreateWebView;
- (void)startOffscreenFetching;
- (struct CGSize)webViewSize;
- (id)webViewConfiguration;
- (void)didRenderImage:(id)arg1;
- (void)_loadingTimerDidTimeout:(id)arg1;
- (void)_didCompleteWithImage:(id)arg1;
- (void)_renderNextImage;
- (void)_loadSVGFileURL:(id)arg1;
- (id)_htmlStringWithImageElementString:(id)arg1;
- (id)_htmlStringWithSVGContent:(id)arg1;
- (id)_htmlStringWithURL:(id)arg1;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) WBSSVGImageRenderingRequest *request; // @dynamic request;
@property(readonly) Class superclass;

@end

