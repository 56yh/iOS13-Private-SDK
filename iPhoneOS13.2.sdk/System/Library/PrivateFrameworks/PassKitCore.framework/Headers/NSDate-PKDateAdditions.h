//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDate (PKDateAdditions)
+ (id)dateForYesterday;
+ (id)dateForTomorrow;
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;
+ (id)dateWithDaysFromNow:(unsigned long long)arg1;
- (_Bool)isYesterday;
- (_Bool)isTomorrow;
- (_Bool)isToday;
- (_Bool)isDateEqualToDateIgnoringTime:(id)arg1;
@end

