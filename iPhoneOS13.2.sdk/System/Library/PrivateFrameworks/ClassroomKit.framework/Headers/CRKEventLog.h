//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSSet;

@interface CRKEventLog : NSObject <NSSecureCoding>
{
    NSSet *mLazilyLoadedEvents;
    NSDate *_startDate;
    NSDate *_endDate;
    NSSet *_passedInEvents;
    NSSet *_passedInEventDatas;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSSet *passedInEventDatas; // @synthesize passedInEventDatas=_passedInEventDatas;
@property(copy, nonatomic) NSSet *passedInEvents; // @synthesize passedInEvents=_passedInEvents;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqualToTimeline:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSSet *events;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventDatas:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;
- (id)init;

@end

