//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebFormSubmissionListener-Protocol.h>
#import <WebKitLegacy/WebPolicyDecisionListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>
{
    struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame>> _frame;
    struct PolicyCheckIdentifier _identifier;
    struct Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)> _policyFunction;
    struct RetainPtr<NSURL> _appLinkURL;
    unsigned char _defaultPolicy;
}

+ (void)initialize;
- (id).cxx_construct;
- (void)continue;
- (void)use;
- (void)download;
- (void)ignore;
- (void)receivedPolicyDecision:(unsigned char)arg1;
- (void)dealloc;
- (void)invalidate;
-     // Error parsing type: @60@0:8^{Frame=^^?{atomic<unsigned int>=AI}{Ref<WebCore::WindowProxy, WTF::DumbPtrTraits<WebCore::WindowProxy> >=^{WindowProxy}}{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}IIII}}^{Frame}^{Page}{RefPtr<WebCore::Settings, WTF::DumbPtrTraits<WebCore::Settings> >=^{Settings}}{FrameTree=^{Frame}^{Frame}{AtomString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}IQ}{UniqueRef<WebCore::FrameLoader>={unique_ptr<WebCore::FrameLoader, std::__1::default_delete<WebCore::FrameLoader> >={__compressed_pair<WebCore::FrameLoader *, std::__1::default_delete<WebCore::FrameLoader> >=^{FrameLoader}}}}{UniqueRef<WebCore::NavigationScheduler>={unique_ptr<WebCore::NavigationScheduler, std::__1::default_delete<WebCore::NavigationScheduler> >={__compressed_pair<WebCore::NavigationScheduler *, std::__1::default_delete<WebCore::NavigationScheduler> >=^{NavigationScheduler}}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView, WTF::DumbPtrTraits<WebCore::FrameView> >=^{FrameView}}{RefPtr<WebCore::Document, WTF::DumbPtrTraits<WebCore::Document> >=^{Document}}{UniqueRef<WebCore::ScriptController>={unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> >={__compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> >=^{ScriptController}}}}{UniqueRef<WebCore::Editor>={unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> >={__compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> >=^{Editor}}}}{UniqueRef<WebCore::FrameSelection>={unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> >={__compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> >=^{FrameSelection}}}}{UniqueRef<WebCore::CSSAnimationController>={unique_ptr<WebCore::CSSAnimationController, std::__1::default_delete<WebCore::CSSAnimationController> >={__compressed_pair<WebCore::CSSAnimationController *, std::__1::default_delete<WebCore::CSSAnimationController> >=^{CSSAnimationController}}}}{RetainPtr<NSArray>=^v}{ViewportArguments=iffffffffffffiB}B{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}ffiBIIBI{UniqueRef<WebCore::EventHandler>={unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> >={__compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> >=^{EventHandler}}}}}16{PolicyCheckIdentifier={ObjectIdentifier<WebCore::ProcessIdentifierType>=Q}Q}24^{Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >=^{CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>}}}}40C48@52, name: initWithFrame:identifier:policyFunction:defaultPolicy:appLinkURL:
-     // Error parsing type: @52@0:8^{Frame=^^?{atomic<unsigned int>=AI}{Ref<WebCore::WindowProxy, WTF::DumbPtrTraits<WebCore::WindowProxy> >=^{WindowProxy}}{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}IIII}}^{Frame}^{Page}{RefPtr<WebCore::Settings, WTF::DumbPtrTraits<WebCore::Settings> >=^{Settings}}{FrameTree=^{Frame}^{Frame}{AtomString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}IQ}{UniqueRef<WebCore::FrameLoader>={unique_ptr<WebCore::FrameLoader, std::__1::default_delete<WebCore::FrameLoader> >={__compressed_pair<WebCore::FrameLoader *, std::__1::default_delete<WebCore::FrameLoader> >=^{FrameLoader}}}}{UniqueRef<WebCore::NavigationScheduler>={unique_ptr<WebCore::NavigationScheduler, std::__1::default_delete<WebCore::NavigationScheduler> >={__compressed_pair<WebCore::NavigationScheduler *, std::__1::default_delete<WebCore::NavigationScheduler> >=^{NavigationScheduler}}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView, WTF::DumbPtrTraits<WebCore::FrameView> >=^{FrameView}}{RefPtr<WebCore::Document, WTF::DumbPtrTraits<WebCore::Document> >=^{Document}}{UniqueRef<WebCore::ScriptController>={unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> >={__compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> >=^{ScriptController}}}}{UniqueRef<WebCore::Editor>={unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> >={__compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> >=^{Editor}}}}{UniqueRef<WebCore::FrameSelection>={unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> >={__compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> >=^{FrameSelection}}}}{UniqueRef<WebCore::CSSAnimationController>={unique_ptr<WebCore::CSSAnimationController, std::__1::default_delete<WebCore::CSSAnimationController> >={__compressed_pair<WebCore::CSSAnimationController *, std::__1::default_delete<WebCore::CSSAnimationController> >=^{CSSAnimationController}}}}{RetainPtr<NSArray>=^v}{ViewportArguments=iffffffffffffiB}B{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}ffiBIIBI{UniqueRef<WebCore::EventHandler>={unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> >={__compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> >=^{EventHandler}}}}}16{PolicyCheckIdentifier={ObjectIdentifier<WebCore::ProcessIdentifierType>=Q}Q}24^{Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >=^{CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>}}}}40C48, name: initWithFrame:identifier:policyFunction:defaultPolicy:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

