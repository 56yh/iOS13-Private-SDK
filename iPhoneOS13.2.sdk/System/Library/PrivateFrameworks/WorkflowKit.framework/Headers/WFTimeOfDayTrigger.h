//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>



@class NSArray, NSDateComponents;

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding>
{
    unsigned long long _event;
    unsigned long long _timeOffset;
    NSDateComponents *_time;
    NSArray *_daysOfWeek;
}

+ (id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1;
+ (id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)dateFormatter;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
@property(copy, nonatomic) NSArray *daysOfWeek; // @synthesize daysOfWeek=_daysOfWeek;
@property(retain, nonatomic) NSDateComponents *time; // @synthesize time=_time;
@property(nonatomic) unsigned long long timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) unsigned long long event; // @synthesize event=_event;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end

