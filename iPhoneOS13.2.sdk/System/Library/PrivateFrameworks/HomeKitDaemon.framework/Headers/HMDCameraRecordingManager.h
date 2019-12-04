//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraClipManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionNotificationTriggerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraRecordingSettingsControlDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraProfile, HMDCameraRecordingBulkSendDataReadEvent, HMDCameraRecordingBulkSendSessionInitiator, HMDCameraRecordingManagerDependencyFactory, HMDCameraRecordingResidentElector, HMDCameraRecordingSession, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSessionRetryContext, HMDCameraRecordingSettingsControl, HMDHAPAccessory, HMDStreamDataChunkAssembler, HMFMessageDispatcher, HMFTimer, NSDictionary, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMDDataStreamBulkSendSession, OS_dispatch_queue;

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate>
{
    _Bool _didShutDown;
    _Bool _motionActive;
    NSUUID *_messageTargetUUID;
    HMDStreamDataChunkAssembler *_dataChunkAssembler;
    HMDCameraRecordingResidentElector *_recordingResidentElector;
    HMDCameraRecordingBulkSendDataReadEvent *_readEvent;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraRecordingSessionNotificationTrigger *_notificationTrigger;
    HMDCameraRecordingSettingsControl *_recordingSettingsControl;
    HMDCameraRecordingManagerDependencyFactory *_dependencyFactory;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHAPAccessory *_accessory;
    HMDCameraProfile *_camera;
    id <HMDDataStreamBulkSendSession> _currentBulkSendSession;
    HMDCameraRecordingBulkSendSessionInitiator *_bulkSendSessionInitiator;
    HMFTimer *_readCallbackTimer;
    HMFTimer *_sessionRetryTimer;
    HMDCameraRecordingSessionRetryContext *_sessionRetryContext;
    HMDCameraRecordingSession *_currentRecordingSession;
    NSMutableSet *_activeRecordingSessions;
}

+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
@property(readonly) NSMutableSet *activeRecordingSessions; // @synthesize activeRecordingSessions=_activeRecordingSessions;
@property(retain) HMDCameraRecordingSession *currentRecordingSession; // @synthesize currentRecordingSession=_currentRecordingSession;
@property(getter=isMotionActive) _Bool motionActive; // @synthesize motionActive=_motionActive;
@property(retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext; // @synthesize sessionRetryContext=_sessionRetryContext;
@property(retain) HMFTimer *sessionRetryTimer; // @synthesize sessionRetryTimer=_sessionRetryTimer;
@property(retain) HMFTimer *readCallbackTimer; // @synthesize readCallbackTimer=_readCallbackTimer;
@property(readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator; // @synthesize bulkSendSessionInitiator=_bulkSendSessionInitiator;
@property(retain) id <HMDDataStreamBulkSendSession> currentBulkSendSession; // @synthesize currentBulkSendSession=_currentBulkSendSession;
@property(readonly) __weak HMDCameraProfile *camera; // @synthesize camera=_camera;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) HMDCameraRecordingManagerDependencyFactory *dependencyFactory; // @synthesize dependencyFactory=_dependencyFactory;
@property(readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl; // @synthesize recordingSettingsControl=_recordingSettingsControl;
@property(readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger; // @synthesize notificationTrigger=_notificationTrigger;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property _Bool didShutDown; // @synthesize didShutDown=_didShutDown;
@property(retain) HMDCameraRecordingBulkSendDataReadEvent *readEvent; // @synthesize readEvent=_readEvent;
@property(readonly) HMDCameraRecordingResidentElector *recordingResidentElector; // @synthesize recordingResidentElector=_recordingResidentElector;
@property(retain) HMDStreamDataChunkAssembler *dataChunkAssembler; // @synthesize dataChunkAssembler=_dataChunkAssembler;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)closeSession:(id)arg1 withError:(id)arg2;
@property(readonly) NSString *logIdentifier;
- (void)_resetCurrentRecordingSession:(id)arg1;
- (void)_startSessionRetryTimer;
- (void)_resetRetryContextWithReason:(id)arg1;
- (void)_closeCurrentSessionsWithReason:(unsigned short)arg1;
- (unsigned short)_closeEventReasonForRecordingSessionError:(id)arg1;
- (void)_handleDataReceived:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)_readDataForCurrentSession;
- (void)_handleBulkSendSessionCreated:(id)arg1;
- (void)_submitReadEventWithStatus:(unsigned short)arg1;
- (void)_bulkSendReadDidReceiveStreamDataChunk:(id)arg1;
- (void)_startBulkSendDataReadEvent;
- (void)_startRecordingSessionForTrigger:(unsigned long long)arg1 presenceByPairingIdentity:(id)arg2 reason:(id)arg3 completionCallback:(id /* block */)arg4;
- (_Bool)_canAnyDeviceStartRecordingSession;
- (void)handleStartRecordingSessionRequest:(id)arg1;
- (void)_startCameraRecordingSessionForTrigger:(unsigned long long)arg1 reason:(id)arg2;
- (void)_createRecordingSessionForTrigger:(unsigned long long)arg1 presenceByPairingIdentity:(id)arg2;
- (void)_forwardRecordingSession:(unsigned long long)arg1 withSortedDevices:(id)arg2 withRetries:(long long)arg3;
@property(readonly) NSDictionary *homePresenceByPairingIdentity;
- (void)_coordinateRecordingSessionForAccessory:(unsigned long long)arg1;
- (void)_clipManagerDidBecomeAvailable;
- (void)_shutDown;
- (void)_start;
- (void)recordingSettingsControlDidConfigure:(id)arg1;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;
- (void)clipManagerDidBecomeUnavailable:(id)arg1;
- (void)clipManagerDidBecomeAvailable:(id)arg1;
- (void)notificationTrigger:(id)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(_Bool)arg3;
- (void)shutDown;
- (void)start;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2 dependencyFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

