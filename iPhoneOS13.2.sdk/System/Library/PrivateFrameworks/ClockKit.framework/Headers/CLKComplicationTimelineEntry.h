//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/CLKTimelineEntry-Protocol.h>



@class CLKComplicationTemplate, NSDate, NSString;

@interface CLKComplicationTimelineEntry : NSObject <NSCopying, NSSecureCoding, CLKTimelineEntry>
{
    _Bool _finalized;
    NSDate *_date;
    CLKComplicationTemplate *_complicationTemplate;
    NSString *_timelineAnimationGroup;
}

+ (_Bool)supportsSecureCoding;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2;
@property(copy, nonatomic) NSString *timelineAnimationGroup; // @synthesize timelineAnimationGroup=_timelineAnimationGroup;
@property(copy, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)finalizedCopy;
- (void)finalize;
- (void)validate;
- (void)validateComplicationFamily:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

