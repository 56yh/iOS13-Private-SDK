//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSString;

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate>
{
    unsigned long long _calendarUnit;
    struct _NSRange _possibleRange;
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
    NSLocale *_locale;
    id _changeTarget;
    SEL _changeAction;
}

- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)_stringForIndex:(unsigned long long)arg1;
- (id)_dateForIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfItems;
- (unsigned long long)_defaultIndex;
- (id)_dateComponentsForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)_dateFormatForCalendarUnit:(unsigned long long)arg1;
- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) NSDate *date;
- (void)dealloc;
- (id)initShowingDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 useDarkAppearance:(_Bool)arg4 locale:(id)arg5 calendar:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

