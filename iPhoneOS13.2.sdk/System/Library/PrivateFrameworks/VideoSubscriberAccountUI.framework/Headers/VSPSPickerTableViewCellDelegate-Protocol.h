//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, VSPSPickerTableViewCell;

@protocol VSPSPickerTableViewCellDelegate 
- (void)pickerViewCell:(VSPSPickerTableViewCell *)arg1 didSelectRow:(long long)arg2;
- (long long)pickerViewCellNumberOfRows:(VSPSPickerTableViewCell *)arg1;
- (long long)pickerViewCellInitialSelectedRow:(VSPSPickerTableViewCell *)arg1;
- (NSString *)pickerViewCell:(VSPSPickerTableViewCell *)arg1 titleForRow:(long long)arg2;
@end

