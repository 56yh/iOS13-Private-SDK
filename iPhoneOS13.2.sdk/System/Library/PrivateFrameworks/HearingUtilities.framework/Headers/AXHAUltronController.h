//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXUIClientDelegate-Protocol.h>
#import <HearingUtilities/SNResultsObserving-Protocol.h>

@class AVAudioEngine, AVAudioFormat, AVAudioSession, AXUIClient, NSMutableArray, NSMutableDictionary, NSString, SBSStatusBarStyleOverridesAssertion, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

@interface AXHAUltronController : NSObject <SNResultsObserving, AXUIClientDelegate>
{
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    SNAudioStreamAnalyzer *_listener;
    AXUIClient *_hearingUIClient;
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    _Bool _isRecording;
    AVAudioEngine *_audioEngine;
    AVAudioFormat *_clientFormat;
    AVAudioSession *_session;
    NSMutableArray *_bufferCollection;
    NSMutableDictionary *_detectionResultCollection;
}

+ (id)sharedInstance;
- (void)reduceFileDirectorySize;
- (id)recorderSettings;
- (void)_configureAudioCapture;
- (void)_handleAudioSessionInterruption:(id)arg1;
- (void)dealloc;
- (void)_stopAudioSession;
- (void)_startAudioSession;
- (void)stopUltron;
- (void)startUltron;
- (void)toggleUltronSupport:(_Bool)arg1;
- (_Bool)isListening;
- (void)_registerListeningRequestTypes;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (id)getDictionaryForListenType;
- (void)_processResult:(id)arg1;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (id)directory;
- (void)cleanupUltron;
- (id)hearingUIClient;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

