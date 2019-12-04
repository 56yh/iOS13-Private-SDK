//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKEventStatsCounterInternalProperty-Protocol.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;
}

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;
@property(retain) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;
- (unsigned long long)countWithTypeValue:(id)arg1;
- (void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2 typeValue:(id)arg3;
- (void)addTimingWithTimeInterval:(double)arg1 typeValue:(id)arg2;
- (id)eventName;

@end

