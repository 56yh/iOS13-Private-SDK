//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKJSInspectorControllerDelegate-Protocol.h>

@class IKAppContext, IKDOMDocument, IKJSInspectorCSSAgent, IKJSInspectorDOMAgent, IKJSInspectorNetworkAgent, IKJSInspectorPageAgent, IKJSInspectorStorageAgent, NSDate, NSString, RWIProtocolInspector;
@protocol IKJSInspectorControllerDelegate, IKNetworkRequestLoader;

@interface IKJSInspectorController : NSObject <IKJSInspectorControllerDelegate>
{
    struct {
        _Bool respondsToInspectElementModeChanged;
        _Bool respondsToHighlightViewForElementWithOneID;
        _Bool respondsToHighlightViewForElementWithManyIDs;
        _Bool respondsToCancelHighlightView;
    } _delegateFlags;
    struct {
        _Bool respondsToActiveDocument;
    } _appFlags;
    IKAppContext *_appContext;
    id <IKJSInspectorControllerDelegate> _delegate;
    RWIProtocolInspector *_inspector;
    NSDate *_inspectorConnectDate;
    id <IKNetworkRequestLoader> _requestLoader;
    IKDOMDocument *_activeDocument;
    IKJSInspectorDOMAgent *_domAgent;
    IKJSInspectorNetworkAgent *_networkAgent;
    IKJSInspectorPageAgent *_pageAgent;
    IKJSInspectorCSSAgent *_cssAgent;
    IKJSInspectorStorageAgent *_storageAgent;
    id _inspectorConnectedToken;
    id _inspectorDisconnectedToken;
}

@property(readonly, nonatomic) id inspectorDisconnectedToken; // @synthesize inspectorDisconnectedToken=_inspectorDisconnectedToken;
@property(readonly, nonatomic) id inspectorConnectedToken; // @synthesize inspectorConnectedToken=_inspectorConnectedToken;
@property(readonly, nonatomic) __weak IKJSInspectorStorageAgent *storageAgent; // @synthesize storageAgent=_storageAgent;
@property(readonly, nonatomic) __weak IKJSInspectorCSSAgent *cssAgent; // @synthesize cssAgent=_cssAgent;
@property(readonly, nonatomic) __weak IKJSInspectorPageAgent *pageAgent; // @synthesize pageAgent=_pageAgent;
@property(readonly, nonatomic) __weak IKJSInspectorNetworkAgent *networkAgent; // @synthesize networkAgent=_networkAgent;
@property(readonly, nonatomic) __weak IKJSInspectorDOMAgent *domAgent; // @synthesize domAgent=_domAgent;
@property(nonatomic) __weak IKDOMDocument *activeDocument; // @synthesize activeDocument=_activeDocument;
@property(readonly, nonatomic) id <IKNetworkRequestLoader> requestLoader; // @synthesize requestLoader=_requestLoader;
@property(readonly, nonatomic) NSDate *inspectorConnectDate; // @synthesize inspectorConnectDate=_inspectorConnectDate;
@property(readonly, nonatomic) RWIProtocolInspector *inspector; // @synthesize inspector=_inspector;
@property(nonatomic) __weak id <IKJSInspectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void)inspectNodeWithID:(long long)arg1;
@property(readonly, nonatomic, getter=isInspectElementModeEnabled) _Bool inspectElementModeEnabled;
- (void)unregisterLoaderWithIdentifier:(id)arg1;
- (id)registerLoaderWithIdentifier:(id)arg1;
- (void)appDocumentDidUpdate:(id)arg1;
- (void)appDocumentDidUnload:(id)arg1;
- (void)appDocumentDidLoad:(id)arg1;
- (void)appDocumentDidDisappear:(id)arg1;
- (void)appDocumentDidAppear:(id)arg1;
- (void)willRemoveEventListenerForDOMNode:(id)arg1;
- (void)didAddEventListenerForDOMNode:(id)arg1;
- (_Bool)cancelHighlightView;
- (_Bool)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (_Bool)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (void)inspectElementModeChanged:(_Bool)arg1;
- (void)resetStylesFromNode:(id)arg1;
- (void)updateStylesheets;
- (void)evaluateMediaQuery:(id /* block */)arg1;
- (id)styleFromComposer:(id)arg1;
- (id)nodesByIds:(id)arg1;
- (id)nodeById:(long long)arg1;
- (void)_updateCurrentActiveDocument;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

