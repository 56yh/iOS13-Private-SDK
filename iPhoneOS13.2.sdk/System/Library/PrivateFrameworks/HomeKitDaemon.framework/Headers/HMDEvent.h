//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>


@class HMDEventTrigger, HMDHome, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol HMDEventDelegate, OS_dispatch_queue;

@interface HMDEvent : HMFObject <NSSecureCoding, HMFDumpState, HMDHomeMessageReceiver, HMFLogging, HMDBackingStoreObjectProtocol>
{
    _Bool _endEvent;
    HMDEventTrigger *_eventTrigger;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    id <HMDEventDelegate> _delegate;
    HMDHome *_home;
    NSUUID *_uuid;
    NSString *_triggerType;
    NSString *_logString;
    unsigned long long _activationType;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
@property(nonatomic) unsigned long long activationType; // @synthesize activationType=_activationType;
@property(readonly, nonatomic, getter=isEndEvent) _Bool endEvent; // @synthesize endEvent=_endEvent;
@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HMDEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
- (id)metricData;
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)createPayload;
- (_Bool)isEqual:(id)arg1;
- (id)dumpState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleUpdateRequest:(id)arg1;
- (void)_registerForMessages;
- (void)invalidate;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)emptyModelObject;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (void)_updateTriggerType;
- (void)_setup;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

