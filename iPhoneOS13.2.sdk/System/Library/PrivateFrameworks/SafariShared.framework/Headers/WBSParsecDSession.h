//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/PARSessionDelegate-Protocol.h>
#import <SafariShared/WBSParsecSearchSession-Protocol.h>

@class GEOUserSessionEntity, NSString, PARSession, WBSCompletionQuery, WBSParsecDFeedbackDispatcher;
@protocol OS_dispatch_queue, WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession>
{
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    GEOUserSessionEntity *_threadUnsafeGEOUserSessionEntity;
    struct os_unfair_lock_s _geoUserSessionLock;
    _Bool _skipAutoFillDataUpdates;
    double _threadUnsafeUIScale;
    WBSCompletionQuery *_threadUnsafeCurrentQuery;
    id <WBSParsecSearchSessionDelegate> _threadUnsafeDelegate;
    PARSession *_threadUnsafeParsecdSession;
    unsigned long long _currentQueryID;
}

+ (void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;
@property unsigned long long currentQueryID; // @synthesize currentQueryID=_currentQueryID;
@property(readonly, nonatomic) _Bool skipAutoFillDataUpdates; // @synthesize skipAutoFillDataUpdates=_skipAutoFillDataUpdates;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
@property(readonly, nonatomic) id <WBSParsecFeedbackDispatcher> feedbackDispatcher;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
@property(retain, nonatomic) WBSCompletionQuery *currentQuery; // @synthesize currentQuery=_threadUnsafeCurrentQuery;
@property(nonatomic, setter=setUIScale:) double uiScale; // @synthesize uiScale=_threadUnsafeUIScale;
@property(retain, nonatomic) PARSession *parsecdSession; // @synthesize parsecdSession=_threadUnsafeParsecdSession;
@property(nonatomic) __weak id <WBSParsecSearchSessionDelegate> delegate; // @synthesize delegate=_threadUnsafeDelegate;
- (id)initWithParsecdSession:(id)arg1 skipAutoFillDataUpdates:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

