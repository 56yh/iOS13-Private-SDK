//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailWebProcessSupport/MSBundlePageController-Protocol.h>
#import <MailWebProcessSupport/MSComposeBodyFieldController-Protocol.h>
#import <MailWebProcessSupport/WKWebProcessPlugInLoadDelegate-Protocol.h>

@class JSContext, JSValue, NSMutableArray, NSString, WKWebProcessPlugInBrowserContextController;
@protocol MSComposeBodyFieldObserver, WKWebProcessPlugIn;

@interface MSComposeBundlePageController : NSObject <WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController>
{
    unsigned long long _performOnPageSuspendCount;
    NSMutableArray *_blocksToPerformOnPage;
    JSValue *_jsBodyField;
    id <WKWebProcessPlugIn> _plugIn;
    WKWebProcessPlugInBrowserContextController *_controller;
    JSContext *_jsContext;
}

@property(readonly, nonatomic) JSValue *jsBodyField; // @synthesize jsBodyField=_jsBodyField;
@property(readonly, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(readonly, nonatomic) WKWebProcessPlugInBrowserContextController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) __weak id <WKWebProcessPlugIn> plugIn; // @synthesize plugIn=_plugIn;
- (void)initializeBodyField:(id)arg1;
- (void)initializeGlobalObject;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (id)willSendRequest:(id)arg1;
- (void)changeQuoteLevelBy:(long long)arg1;
- (void)performBodyFieldMethodOnPage:(id)arg1 withArguments:(id)arg2;
- (void)resumePerformOnPage;
- (void)suspendPerformOnPage;
- (void)performOnPage:(id /* block */)arg1;
@property(readonly, nonatomic) id <MSComposeBodyFieldObserver> observerProxy;
- (void)invalidate;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

