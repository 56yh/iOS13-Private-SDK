//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CLLocation, CLSEKCalendar, CLSEKParticipant, NSArray, NSDate, NSString;

@interface CLSEKEvent : NSObject <NSCoding>
{
    _Bool _isBirthday;
    _Bool _allDay;
    _Bool _hasAttendees;
    _Bool _organizedByMe;
    _Bool _isSelfOrganized;
    _Bool _hasRecurrenceRules;
    _Bool _isSuggestedAndAccepted;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_attendees;
    CLSEKParticipant *_selfAttendee;
    CLSEKCalendar *_calendar;
    NSString *_calendarItemIdentifier;
    struct CLLocationCoordinate2D _coordinate;
}

@property(readonly) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly) _Bool isSuggestedAndAccepted; // @synthesize isSuggestedAndAccepted=_isSuggestedAndAccepted;
@property(readonly) _Bool hasRecurrenceRules; // @synthesize hasRecurrenceRules=_hasRecurrenceRules;
@property(readonly) _Bool isSelfOrganized; // @synthesize isSelfOrganized=_isSelfOrganized;
@property(readonly) NSString *calendarItemIdentifier; // @synthesize calendarItemIdentifier=_calendarItemIdentifier;
@property(readonly) CLSEKCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly) CLSEKParticipant *selfAttendee; // @synthesize selfAttendee=_selfAttendee;
@property(readonly) _Bool organizedByMe; // @synthesize organizedByMe=_organizedByMe;
@property(readonly) NSArray *attendees; // @synthesize attendees=_attendees;
@property(readonly) _Bool hasAttendees; // @synthesize hasAttendees=_hasAttendees;
@property(readonly, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(readonly) NSString *title; // @synthesize title=_title;
- (id)description;
@property(readonly) CLLocation *geoLocation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKEvent:(id)arg1;

@end

