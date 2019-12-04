//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDate, NSString, NSURL;

@interface PPEventHighlight : NSObject <NSSecureCoding>
{
    _Bool _isExtraordinary;
    NSString *_eventIdentifier;
    NSURL *_externalURI;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_organizer;
    struct CGColor *_calendarColor;
    unsigned long long _prominentFeature;
    NSArray *_features;
    double _score;
}

+ (_Bool)supportsSecureCoding;
+ (id)describeProminentFeature:(unsigned long long)arg1;
+ (id)eventHighlightWithEvent:(id)arg1 score:(double)arg2 prominentFeature:(unsigned long long)arg3 features:(id)arg4 isExtraordinary:(_Bool)arg5;
+ (id)eventHighlightWithEKEvent:(id)arg1 score:(double)arg2 prominentFeature:(unsigned long long)arg3 features:(id)arg4 isExtraordinary:(_Bool)arg5;
@property(nonatomic) _Bool isExtraordinary; // @synthesize isExtraordinary=_isExtraordinary;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(nonatomic) unsigned long long prominentFeature; // @synthesize prominentFeature=_prominentFeature;
@property(nonatomic) struct CGColor *calendarColor; // @synthesize calendarColor=_calendarColor;
@property(retain, nonatomic) NSString *organizer; // @synthesize organizer=_organizer;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *externalURI; // @synthesize externalURI=_externalURI;
@property(retain, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (void)dealloc;
- (_Bool)isEqualToEventHighlight:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEventIdentifier:(id)arg1 externalURI:(id)arg2 title:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 location:(id)arg6 organizer:(id)arg7 calendarColor:(struct CGColor *)arg8 prominentFeature:(unsigned long long)arg9 features:(id)arg10 score:(double)arg11 isExtraordinary:(_Bool)arg12;

@end

