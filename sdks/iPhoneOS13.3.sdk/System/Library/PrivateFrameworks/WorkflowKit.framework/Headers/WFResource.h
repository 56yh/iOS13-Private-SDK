//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>
#import <WorkflowKit/WFErrorRecoveryAttempting-Protocol.h>

@class NSDictionary, NSError;
@protocol OS_dispatch_queue;

@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting>
{
    BOOL _available;
    BOOL _shouldRefreshAvailability;
    NSError *_availabilityError;
    NSDictionary *_definition;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
}

+ (BOOL)alwaysMakeAvailable;
+ (BOOL)mustBeAvailableForDisplay;
+ (BOOL)refreshesAvailabilityOnApplicationResume;
+ (BOOL)isSingleton;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // @synthesize stateAccessQueue=_stateAccessQueue;
@property(readonly, nonatomic) BOOL shouldRefreshAvailability; // @synthesize shouldRefreshAvailability=_shouldRefreshAvailability;
@property(readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
// - (void).cxx_destruct;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)invalidateAvailability;
- (void)updateAvailability:(BOOL)arg1 withError:(id)arg2;
- (void)refreshAvailabilityWithNotification:(BOOL)arg1;
- (void)notifyResourcesAboutAvailabilityChange;
- (BOOL)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(BOOL)arg1;
- (void)refreshAvailabilityWithForcedNotification;
- (void)refreshAvailabilityWithNotification;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(NSUInteger)arg2 userInterface:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)refreshAvailability;
- (id)_availabilityError;
- (BOOL)_isAvailable;
@property(readonly, nonatomic) NSError *availabilityError; // @synthesize availabilityError=_availabilityError;
@property(readonly, nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(readonly, copy, nonatomic) NSDictionary *eventDictionary;
- (void)dealloc;
- (id)init;
- (id)initWithDefinition:(id)arg1;

@end

