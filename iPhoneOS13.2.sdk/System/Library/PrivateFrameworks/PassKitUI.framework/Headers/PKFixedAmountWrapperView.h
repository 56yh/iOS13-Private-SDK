//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPickerView, UITableView;

@interface PKFixedAmountWrapperView : UIView
{
    UITableView *_tableView;
    UIPickerView *_pickerView;
}

@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)layoutSubviews;

@end

