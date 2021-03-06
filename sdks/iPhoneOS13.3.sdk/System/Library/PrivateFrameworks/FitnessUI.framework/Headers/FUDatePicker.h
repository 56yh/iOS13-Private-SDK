//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FitnessUI/FUScrollWheelDataSource-Protocol.h>
#import <FitnessUI/FUScrollWheelDelegate-Protocol.h>

@class FUScrollWheel, NSArray, NSDate, NSDateFormatter, NSMutableArray, UIColor, UILabel;
@protocol FUDatePickerDelegate;

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate>
{
    NSUInteger _monthOffset;
    NSUInteger _dayOffset;
    long long _yearOrder;
    long long _monthOrder;
    long long _dayOrder;
    NSUInteger _numRowsMonth;
    NSUInteger _numRowsDate;
    NSUInteger _numRowsYear;
    NSArray *_monthNames;
    NSArray *_dayValues;
    NSMutableArray *_yearsWithNames;
    UILabel *_dayLabel;
    UILabel *_yearLabel;
    UILabel *_monthLabel;
    NSDateFormatter *_dateFormatter;
    BOOL _firstResponderShouldChange;
    BOOL _displayEra;
    UIColor *_tintColor;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _initialWheelType;
    id <FUDatePickerDelegate> _delegate;
    NSDate *_date;
    FUScrollWheel *_monthWheel;
    FUScrollWheel *_dayWheel;
    FUScrollWheel *_yearWheel;
}

@property(retain, nonatomic) FUScrollWheel *yearWheel; // @synthesize yearWheel=_yearWheel;
@property(retain, nonatomic) FUScrollWheel *dayWheel; // @synthesize dayWheel=_dayWheel;
@property(retain, nonatomic) FUScrollWheel *monthWheel; // @synthesize monthWheel=_monthWheel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <FUDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)scrollWheelShouldBecomeFirstResponder:(id)arg1;
- (void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(NSUInteger)arg2;
- (void)tappedScrollWheel:(id)arg1;
- (NSUInteger)numberOfRowsInScrollWheel:(id)arg1;
- (id)scrollWheel:(id)arg1 titleForItemAtIndex:(NSUInteger)arg2;
- (void)_updateDayRangeReloadingWheel:(BOOL)arg1;
- (void)_updateSpinnersAnimated:(BOOL)arg1;
- (id)dateWheel;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)_enumerateDayValues;
- (id)_enumerateDayValuesFromFormatter:(id)arg1;
- (id)_wheelOfType:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 tintColor:(id)arg2 initialWheelType:(long long)arg3 shouldEnableCrown:(BOOL)arg4 minimumDate:(id)arg5 maximumDate:(id)arg6;
- (id)initWithFrame:(CGRect)arg1;

@end

