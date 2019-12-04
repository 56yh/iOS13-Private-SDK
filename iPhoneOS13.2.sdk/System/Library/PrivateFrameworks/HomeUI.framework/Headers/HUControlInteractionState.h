//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NAValueThrottler;

@interface HUControlInteractionState : NSObject
{
    _Bool _userInteractionActive;
    _Bool _writesInProgressOrPossible;
    NAValueThrottler *_writeThrottler;
    unsigned long long _inFlightWriteCount;
}

@property(nonatomic, getter=areWritesInProgressOrPossible) _Bool writesInProgressOrPossible; // @synthesize writesInProgressOrPossible=_writesInProgressOrPossible;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(nonatomic) unsigned long long inFlightWriteCount; // @synthesize inFlightWriteCount=_inFlightWriteCount;
@property(retain, nonatomic) NAValueThrottler *writeThrottler; // @synthesize writeThrottler=_writeThrottler;

@end

