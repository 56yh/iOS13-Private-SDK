//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOSUtilities : NSObject
{
}

+ (void)setAllowedToMessageSOSContacts:(_Bool)arg1;
+ (_Bool)isAllowedToMessageSOSContacts;
+ (void)setPlayAudioDuringCountdown:(_Bool)arg1;
+ (_Bool)shouldPlayAudioDuringCountdown;
+ (void)setAutomaticCallCountdownEnabled:(_Bool)arg1;
+ (_Bool)isAutomaticCallCountdownEnabled;
+ (_Bool)hasActiveSIMForClient:(id)arg1;
+ (_Bool)shouldForceDisableAutoCallForClient:(id)arg1;
+ (long long)SOSSelectableTriggerMechanismCapability;
+ (_Bool)deviceHasHomeButton;
+ (_Bool)isD2xDevice;
+ (long long)defaultSOSTriggerMechanism;
+ (long long)SOSTriggerMechanismForClickCount:(long long)arg1;
+ (long long)currentSOSTriggerMechanism;
+ (long long)SOSTriggerClickCount;
+ (_Bool)canTriggerSOSWithClicks;
+ (_Bool)canTriggerSOSWithVolumeLockHold;
+ (_Bool)isIndiaSKU;
+ (_Bool)autoCallRequiresSIM;
+ (_Bool)mustAllowThreeClickTrigger;
+ (void)setNewtonTriggersEmergencySOS:(_Bool)arg1;
+ (_Bool)newtonTriggersEmergencySOS;
+ (void)setNewtonTriggersEmergencySOSNumber:(id)arg1;
+ (id)newtonTriggersEmergencySOSNumber;
+ (void)setLongPressTriggersEmergencySOS:(_Bool)arg1;
+ (_Bool)longPressTriggersEmergencySOS;
+ (id)_userFriendsDefaults;
+ (id)_userSOSDefaults;

@end

