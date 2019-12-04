//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/HMHomeDelegate-Protocol.h>
#import <MediaControls/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSMutableSet, NSString;
@protocol MediaControlsHomeObserverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsHomeObserver : NSObject <HMHomeDelegate, HMHomeManagerDelegate>
{
    HMHomeManager *_homeManager;
    NSMutableSet *_knownUIDs;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    id <MediaControlsHomeObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <MediaControlsHomeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)_notifyDelegate;
- (void)_updateUIDs;
- (_Bool)hasAccessoryWithUID:(id)arg1;
- (void)stopObserving;
- (void)beginObserving;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

