//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CLLocation, NSCalendar, NSDate, NSNumber, NSString;

@interface NTKFaceSnapshotContext : NSObject <NSSecureCoding>
{
    CLLocation *_location;
    NSDate *_date;
    NSCalendar *_calendar;
    NSString *_monogram;
    NSString *_locale;
    NSNumber *_uses24hTime;
    NSString *_buildVersion;
    NSString *_tzVersion;
    NSNumber *_enhanceTextLegibilityEnabled;
    NSString *_lunarCalendarLocaleID;
}

+ (_Bool)supportsSecureCoding;
+ (id)currentContext;
@property(retain, nonatomic) NSString *lunarCalendarLocaleID; // @synthesize lunarCalendarLocaleID=_lunarCalendarLocaleID;
@property(retain, nonatomic) NSNumber *enhanceTextLegibilityEnabled; // @synthesize enhanceTextLegibilityEnabled=_enhanceTextLegibilityEnabled;
@property(retain, nonatomic) NSString *tzVersion; // @synthesize tzVersion=_tzVersion;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSNumber *uses24hTime; // @synthesize uses24hTime=_uses24hTime;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *monogram; // @synthesize monogram=_monogram;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)_yearMonthDay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)lunarCalendarLocaleIDMatchesContext:(id)arg1;
- (_Bool)locationSignificantlyDiffersFromContext:(id)arg1;
- (double)distanceInKilometersFromContext:(id)arg1;
- (_Bool)enhanceTextLegibilityEnabledMatchesContext:(id)arg1;
- (_Bool)buildVersionMatchesContext:(id)arg1;
- (_Bool)localeMatchesContext:(id)arg1;
- (_Bool)timeZoneMatchesContext:(id)arg1;
- (_Bool)calendarDateMatchesContext:(id)arg1;

@end

