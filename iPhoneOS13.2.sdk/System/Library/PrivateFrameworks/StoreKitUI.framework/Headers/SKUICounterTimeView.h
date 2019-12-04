//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, SKUIClientContext, UIColor, UIFont, _SKUICounterTimeFieldView;

__attribute__((visibility("hidden")))
@interface SKUICounterTimeView : UIView
{
    SKUIClientContext *_clientContext;
    _SKUICounterTimeFieldView *_daysFieldView;
    NSDate *_endDate;
    _SKUICounterTimeFieldView *_hoursFieldView;
    long long _lastTimeValue;
    _SKUICounterTimeFieldView *_minutesFieldView;
    _SKUICounterTimeFieldView *_secondsFieldView;
    UIColor *_textColor;
    UIFont *_valueFont;
    unsigned long long _visibleFields;
}

@property(nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (id)_visibleFieldViews;
- (void)_setValuesUsingTimestamp:(long long)arg1;
- (double)_fieldSpacingForFieldCount:(long long)arg1 fieldWidth:(double)arg2 totalWidth:(double)arg3;
- (id)_allFieldViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)reloadTimeValue;
- (id)initWithClientContext:(id)arg1;

@end

