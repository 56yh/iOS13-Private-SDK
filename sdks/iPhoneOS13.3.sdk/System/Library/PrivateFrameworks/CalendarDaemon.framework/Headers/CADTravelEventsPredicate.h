//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@interface CADTravelEventsPredicate : EKPredicate
{
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_fetchTravelEventsWithDatabase:(struct CalDatabase )arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase )arg1;

@end

