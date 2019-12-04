//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class CLLocation, NSDate, NSString;

@interface NTKSunriseTimelineEntryModel : NTKTimelineEntryModel
{
    _Bool _showingSunrise;
    _Bool _currentEvent;
    NSDate *_sunriseDate;
    NSDate *_sunsetDate;
    long long _constantSun;
    NSString *_locationText;
    CLLocation *_location;
    NSString *_animationGroup;
}

+ (id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5;
+ (id)_signatureCorner:(id)arg1;
+ (id)_eventTimeAndCountdown:(id)arg1 suppressCountdown:(_Bool)arg2 suppressCommaSeparator:(_Bool)arg3 abbreviated:(_Bool)arg4;
+ (id)extraLarge:(id)arg1;
+ (id)smallUtility:(id)arg1;
+ (id)circular:(id)arg1 isMedium:(_Bool)arg2;
+ (id)largeUtility:(id)arg1 suppressCountdown:(_Bool)arg2;
+ (id)smallModular:(id)arg1;
+ (id)largeModular:(id)arg1;
@property(retain, nonatomic) NSString *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *locationText; // @synthesize locationText=_locationText;
@property(nonatomic) _Bool currentEvent; // @synthesize currentEvent=_currentEvent;
@property(nonatomic) _Bool showingSunrise; // @synthesize showingSunrise=_showingSunrise;
@property(nonatomic) long long constantSun; // @synthesize constantSun=_constantSun;
@property(retain, nonatomic) NSDate *sunsetDate; // @synthesize sunsetDate=_sunsetDate;
@property(retain, nonatomic) NSDate *sunriseDate; // @synthesize sunriseDate=_sunriseDate;
@property(readonly, nonatomic) NSDate *eventDate;
- (id)description;
- (id)templateForComplicationFamily:(long long)arg1;

@end

