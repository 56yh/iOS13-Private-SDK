//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSpIdContext, CSSpeakerIdNviSignalReceiver, NviSignalProvidersController;
@protocol OS_dispatch_queue;

@interface CSSpeakerIdNviOrchestrator : NSObject
{
    NviSignalProvidersController *_signalControllerNvi;
    CSSpeakerIdNviSignalReceiver *_resultRxNvi;
    NSObject<OS_dispatch_queue> *_nviQueue;
    CSSpIdContext *_spIdCtx;
}

@property(retain, nonatomic) CSSpIdContext *spIdCtx; // @synthesize spIdCtx=_spIdCtx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nviQueue; // @synthesize nviQueue=_nviQueue;
@property(retain, nonatomic) CSSpeakerIdNviSignalReceiver *resultRxNvi; // @synthesize resultRxNvi=_resultRxNvi;
@property(retain, nonatomic) NviSignalProvidersController *signalControllerNvi; // @synthesize signalControllerNvi=_signalControllerNvi;
- (void)_uploadDirectionVectorToAFAnalyticsOnQueue;
- (void)_endSpIdNviSignalProcessing;
- (void)_startSpIdNviSignalProcessing;
- (void)uploadDirectionVectorToAFAnalytics;
- (void)end;
- (void)start;
- (id)initWithSpeakerIdContext:(id)arg1;

@end

