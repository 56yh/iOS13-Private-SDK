//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKMedicalIDEditorCell.h>

@class NSDate, UIDatePicker;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell
{
    UIDatePicker *_picker;
    NSDate *_dateValue;
}

@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
- (void)commitEditing;
- (void)beginEditing;
- (void)_dateChanged:(id)arg1;
- (void)_hideDatePicker;
- (void)_showDatePicker;
- (void)_configureDatePicker;
- (id)formattedValue;

@end

