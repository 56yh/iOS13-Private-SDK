//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _DKEventIntersection : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_events;
}

+ (id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;
@property(readonly) NSArray *events; // @synthesize events=_events;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;

@end

