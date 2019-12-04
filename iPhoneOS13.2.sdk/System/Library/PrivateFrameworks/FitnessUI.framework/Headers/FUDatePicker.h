//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FitnessUI/FUScrollWheelDataSource-Protocol.h>
#import <FitnessUI/FUScrollWheelDelegate-Protocol.h>

@class FUScrollWheel, NSArray, NSDate, NSDateFormatter, NSMutableArray, NSString, UIColor, UILabel;
@protocol FUDatePickerDelegate;

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate>
{
    unsigned long long _monthOffset;
    unsigned long long _dayOffset;
    long long _yearOrder;
    long long _monthOrder;
    long long _dayOrder;
    unsigned long long _numRowsMonth;
    unsigned long long _numRowsDate;
    unsigned long long _numRowsYear;
    NSArray *_monthNames;
    NSArray *_dayValues;
    NSMutableArray *_yearsWithNames;
    UILabel *_dayLabel;
    UILabel *_yearLabel;
    UILabel *_monthLabel;
    NSDateFormatter *_dateFormatter;
    _Bool _firstResponderShouldChange;
    _Bool _displayEra;
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
- (_Bool)scrollWheelShouldBecomeFirstResponder:(id)arg1;
- (void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2;
- (void)tappedScrollWheel:(id)arg1;
- (unsigned long long)numberOfRowsInScrollWheel:(id)arg1;
- (id)scrollWheel:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (void)_updateDayRangeReloadingWheel:(_Bool)arg1;
- (void)_updateSpinnersAnimated:(_Bool)arg1;
- (id)dateWheel;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)_enumerateDayValues;
- (id)_enumerateDayValuesFromFormatter:(id)arg1;
- (id)_wheelOfType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tintColor:(id)arg2 initialWheelType:(long long)arg3 shouldEnableCrown:(_Bool)arg4 minimumDate:(id)arg5 maximumDate:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

