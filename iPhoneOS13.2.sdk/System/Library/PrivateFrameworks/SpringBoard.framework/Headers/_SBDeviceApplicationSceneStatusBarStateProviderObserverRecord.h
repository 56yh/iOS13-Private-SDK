//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBDeviceApplicationSceneStatusBarStateObserver;

@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject
{
    struct SBDeviceApplicationSceneStatusBarStateObserverFlags _flags;
    id <SBDeviceApplicationSceneStatusBarStateObserver> _observer;
}

@property(readonly, nonatomic) struct SBDeviceApplicationSceneStatusBarStateObserverFlags flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) __weak id <SBDeviceApplicationSceneStatusBarStateObserver> observer; // @synthesize observer=_observer;
- (id)initWithObserver:(id)arg1 andFlags:(struct SBDeviceApplicationSceneStatusBarStateObserverFlags)arg2;

@end

