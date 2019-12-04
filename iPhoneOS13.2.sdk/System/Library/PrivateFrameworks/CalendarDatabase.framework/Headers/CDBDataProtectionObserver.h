//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject
{
    id /* block */ _stateChangedCallback;
    CalDeviceLockObserver *_deviceLockObserver;
}

+ (id)stateChangedNotificationName;
@property(retain, nonatomic) CalDeviceLockObserver *deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property(copy, nonatomic) id /* block */ stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(readonly, nonatomic) _Bool dataIsAccessible;
- (void)_deviceLockStateChanged;
- (id)init;

@end

