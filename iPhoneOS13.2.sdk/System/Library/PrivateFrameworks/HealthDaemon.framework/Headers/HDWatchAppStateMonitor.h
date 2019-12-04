//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/FBSDisplayLayoutObserver-Protocol.h>

@class NSString;
@protocol HDWatchAppStateMonitorDelegate;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver>
{
    _Bool _appIsActive;
    id <HDWatchAppStateMonitorDelegate> _delegate;
    NSString *_bundleIdentifier;
}

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <HDWatchAppStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool appIsActive; // @synthesize appIsActive=_appIsActive;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithFirstPartyWorkoutApp;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

