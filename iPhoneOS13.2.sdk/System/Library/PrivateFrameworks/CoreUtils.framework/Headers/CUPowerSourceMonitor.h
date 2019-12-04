//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CUPowerSourceMonitor : NSObject
{
    _Bool _activateCalled;
    NSMutableDictionary *_aggregateSources;
    NSMutableDictionary *_pendingAggregates;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _invalidationHandler;
    id /* block */ _powerSourceFoundHandler;
    id /* block */ _powerSourceLostHandler;
    id /* block */ _powerSourceChangedHandler;
}

@property(copy, nonatomic) id /* block */ powerSourceChangedHandler; // @synthesize powerSourceChangedHandler=_powerSourceChangedHandler;
@property(copy, nonatomic) id /* block */ powerSourceLostHandler; // @synthesize powerSourceLostHandler=_powerSourceLostHandler;
@property(copy, nonatomic) id /* block */ powerSourceFoundHandler; // @synthesize powerSourceFoundHandler=_powerSourceFoundHandler;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2;
- (void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_updatePowerSources;
- (void)_update;
- (void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned int)arg2;
- (void)_aggregatePowerSourceLost:(id)arg1;
- (void)_aggregatePowerSourceFound:(id)arg1;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

