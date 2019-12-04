//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDevice;
@protocol OS_dispatch_queue;

@interface BBBiometricResource : NSObject
{
    _Bool _isPasscodeSet;
    _Bool _isBiometricUnlockAllowed;
    _Bool _hasEnrolledPearlIdentities;
    BKDevice *_pearlDevice;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) _Bool hasPearlCapability;
@property(readonly, nonatomic) _Bool isPearlEnabledAndEnrolled;
- (void)_updateHasEnrolledPearlIdentities;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_updateIsPasscodeSet;
- (void)_registerForPasscodeChange;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void)_registerForBiometricUnlockAllowedChange;
- (void)_unregisterForBKEnrollmentChange;
- (void)_registerForBKEnrollmentChange;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

