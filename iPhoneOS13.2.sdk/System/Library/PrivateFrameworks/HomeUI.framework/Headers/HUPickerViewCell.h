//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/UIPickerViewDataSource-Protocol.h>
#import <HomeUI/UIPickerViewDelegate-Protocol.h>

@class HFItem, NSIndexPath, NSString, UIPickerView;
@protocol HUPickerCellDelegate;

@interface HUPickerViewCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSIndexPath *_selectedIndexPath;
    HFItem *_item;
    id <HUPickerCellDelegate> _delegate;
    UIPickerView *_pickerView;
    long long _numberOfValues;
}

@property(nonatomic) long long numberOfValues; // @synthesize numberOfValues=_numberOfValues;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <HUPickerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)_canSelectValueAtIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadPickerView;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

