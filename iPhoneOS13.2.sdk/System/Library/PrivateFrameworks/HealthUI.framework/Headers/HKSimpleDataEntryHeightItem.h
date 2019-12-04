//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKSimpleDataEntryItem.h>

#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class HKSimpleDataEntryPlainTextCell, NSNumber, NSString, UIPickerView;

@interface HKSimpleDataEntryHeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource>
{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    UIPickerView *_picker;
    _Bool _usesImperialUnits;
    NSNumber *_defaultValue;
    NSNumber *_centimeterValue;
}

- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)_setHeightValueForPicker:(id)arg1 selectedRow:(long long)arg2;
- (void)doneButtonTapped:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)_updateLocaleDependentValues;
- (void)_valueDidChange;
- (void)_setTextForInputTextField:(id)arg1;
- (void)_setupPlaceholder;
- (id)_formattedValueForDisplay;
- (void)updateCellDisplay;
- (void)beginEditing;
- (id)cell;
- (id)formattedKeyAndValue;
- (double)_defaultCentimeterValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 heightInCm:(id)arg3 defaultHeightInCm:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

