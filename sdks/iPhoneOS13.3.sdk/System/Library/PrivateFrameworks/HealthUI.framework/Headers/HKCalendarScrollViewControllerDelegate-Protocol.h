//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKCalendarScrollViewController, NSDate;

@protocol HKCalendarScrollViewControllerDelegate <NSObject>
- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 didUpdateCenteredMonth:(NSDate *)arg2;
- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 didSelectDate:(NSDate *)arg2;

@optional
- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 accessoryViewForDate:(NSDate *)arg2 accessoryViewCompletion:(void (^)(UIView *))arg3;
@end

