//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFEventBuilder, HMTrigger, NSArray, NSString, NSTimeZone;
@protocol HFTimeEventBuilder;

@interface HFConcreteTimeTriggerBuilder : HFItemBuilder
{
    NSString *_name;
    HFEventBuilder<HFTimeEventBuilder> *_eventBuilder;
    NSArray *_recurrences;
    NSTimeZone *_timeZone;
}

+ (id)builderForExistingTrigger:(id)arg1 inHome:(id)arg2;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder; // @synthesize eventBuilder=_eventBuilder;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)copyCurrentStateFromTriggerBuilder:(id)arg1;
- (void)triggerEnabledStateDidChange:(_Bool)arg1;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (id)commitItem;
@property(retain, nonatomic) HMTrigger *trigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

