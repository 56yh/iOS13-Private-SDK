//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol PXInfoProvider, PXInfoUpdaterObserver;

@interface PXInfoUpdater : NSObject
{
    struct {
        _Bool priorityForInfoRequestOfKind;
    } _infoProviderRespondsTo;
    struct {
        _Bool shouldUpdate;
    } _observerRespondsTo;
    _Bool _shouldUpdateInfo;
    _Bool _isUpdatingInfo;
    id _info;
    id <PXInfoProvider> _infoProvider;
    NSString *_infoKind;
    id <PXInfoUpdaterObserver> _observer;
    long long _currentUpdateGeneration;
    long long _currentUpdatePriority;
    NSProgress *_currentUpdateProgress;
}

@property(retain, nonatomic) NSProgress *currentUpdateProgress; // @synthesize currentUpdateProgress=_currentUpdateProgress;
@property(nonatomic) long long currentUpdatePriority; // @synthesize currentUpdatePriority=_currentUpdatePriority;
@property(nonatomic) long long currentUpdateGeneration; // @synthesize currentUpdateGeneration=_currentUpdateGeneration;
@property(nonatomic) _Bool isUpdatingInfo; // @synthesize isUpdatingInfo=_isUpdatingInfo;
@property(nonatomic) _Bool shouldUpdateInfo; // @synthesize shouldUpdateInfo=_shouldUpdateInfo;
@property(nonatomic) __weak id <PXInfoUpdaterObserver> observer; // @synthesize observer=_observer;
@property(readonly, copy, nonatomic) NSString *infoKind; // @synthesize infoKind=_infoKind;
@property(readonly, nonatomic) __weak id <PXInfoProvider> infoProvider; // @synthesize infoProvider=_infoProvider;
- (void)performBlockWhenDoneUpdating:(id /* block */)arg1;
- (void)_handleCurrentUpdateWithInfo:(id)arg1 generation:(long long)arg2;
- (void)_updateInfo;
- (void)_updateInfoIfNeeded;
- (void)invalidateInfo;
@property(retain, nonatomic) id info; // @synthesize info=_info;
- (id)initWithInfoProvider:(id)arg1 infoKind:(id)arg2;
- (id)init;

@end

