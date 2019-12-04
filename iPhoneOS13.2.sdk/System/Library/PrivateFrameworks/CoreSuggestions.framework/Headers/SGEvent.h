//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGObject.h>

#import <CoreSuggestions/SGEventForGeocode-Protocol.h>

@class NSArray, NSDate, NSObject, NSString, NSTimeZone, NSURL;
@protocol OS_dispatch_queue;

@interface SGEvent : SGObject <SGEventForGeocode>
{
    NSObject<OS_dispatch_queue> *_geocodeQueue;
    SGEvent *_geocoded;
    _Bool _isAllDay;
    NSString *_title;
    NSString *_notes;
    NSDate *_start;
    NSTimeZone *_startTimeZone;
    NSDate *_end;
    NSTimeZone *_endTimeZone;
    NSDate *_creationDate;
    NSDate *_lastModifiedDate;
    NSArray *_locations;
    NSString *_opaqueKey;
    NSString *_uniqueKey;
    NSArray *_tags;
    NSURL *_URL;
    NSString *_naturalLanguageEventTypeIdentifier;
    unsigned long long _naturalLanguageEventAttributes;
    NSArray *_schemaOrg;
}

+ (id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(_Bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *schemaOrg; // @synthesize schemaOrg=_schemaOrg;
@property(readonly, nonatomic) unsigned long long naturalLanguageEventAttributes; // @synthesize naturalLanguageEventAttributes=_naturalLanguageEventAttributes;
@property(readonly, nonatomic) NSString *naturalLanguageEventTypeIdentifier; // @synthesize naturalLanguageEventTypeIdentifier=_naturalLanguageEventTypeIdentifier;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(readonly, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
@property(readonly, nonatomic) NSTimeZone *endTimeZone; // @synthesize endTimeZone=_endTimeZone;
@property(readonly, nonatomic) NSDate *end; // @synthesize end=_end;
@property(readonly, nonatomic) NSTimeZone *startTimeZone; // @synthesize startTimeZone=_startTimeZone;
@property(readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_naturalLanguageEventTagsInTags:(id)arg1;
@property(readonly, nonatomic, getter=isNaturalLanguageEvent) _Bool naturalLanguageEvent;
- (id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5;
- (id)geocodeLocations;
- (id)geocodeEndTimeZone;
- (id)geocodeEndDate;
- (id)geocodeStartTimeZone;
- (id)geocodeStartDate;
- (id)poiFilters;
- (unsigned long long)geocodingMode;
- (id)firstLocationForType:(unsigned long long)arg1;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3;
- (void)_mergeTagsIntoEKEvent:(id)arg1 withStore:(id)arg2;
- (void)_applyTimeRangeToEKEvent:(id)arg1 withTZID:(id)arg2;
- (_Bool)shouldAllowNotificationsInCalendarForBundleId:(id)arg1 appIsInForeground:(_Bool)arg2;
- (_Bool)shouldAllowNotificationsInCalendar;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2;
- (void)mergeIntoEKEvent:(id)arg1;
- (id)toEKEventWithStore:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqualToEvent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)geocodeWithCallback:(id /* block */)arg1;
@property(readonly, nonatomic, getter=isGeocodeCandidate) _Bool geocodeCandidate;
- (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
- (double)duration;
- (id)endDateComponents;
- (id)startDateComponents;
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(_Bool)arg3 calendar:(id)arg4;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(_Bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(_Bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tagStrings:(id)arg15 URL:(id)arg16 naturalLanguageEventIdentifier:(id)arg17 naturalLanguageEventAttributes:(unsigned long long)arg18 schemaOrg:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

