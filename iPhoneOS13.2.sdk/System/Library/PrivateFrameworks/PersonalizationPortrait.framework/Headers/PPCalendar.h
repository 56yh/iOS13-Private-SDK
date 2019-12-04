//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface PPCalendar : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_calendarIdentifier;
    NSString *_title;
    struct CGColor *_color;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
- (_Bool)isEqualToCalendar:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCalendarIdentifier:(id)arg1 title:(id)arg2 color:(struct CGColor *)arg3;
- (id)initWithEKCalendar:(id)arg1;
- (id)init;

@end
