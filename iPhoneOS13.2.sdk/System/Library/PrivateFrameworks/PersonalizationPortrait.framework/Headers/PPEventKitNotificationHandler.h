//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PersonalizationPortrait/PPNotificationHandler.h>

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PPEventKitNotificationHandler : PPNotificationHandler
{
    // Error parsing type: {atomic_flag="_Value"AB}, name: _isFiring
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasWaiter
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)description;
- (void)_clearFlags;
- (void)fireWithEvents:(id)arg1;
- (id)_popEvents;
- (void)_pushEvents:(id)arg1;
- (void)_executeBlocksWithEvents:(id)arg1;
- (id)initWithName:(id)arg1 waitSeconds:(double)arg2;

@end

