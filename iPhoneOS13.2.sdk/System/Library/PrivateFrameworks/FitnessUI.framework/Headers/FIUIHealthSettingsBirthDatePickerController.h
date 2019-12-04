//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIHealthSettingsForceUpdatable-Protocol.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable>
{
    FIUIHealthSettingsDatePicker *_datePickerView;
    id /* block */ _dateOfBirthUpdateHandler;
}

@property(copy, nonatomic) id /* block */ dateOfBirthUpdateHandler; // @synthesize dateOfBirthUpdateHandler=_dateOfBirthUpdateHandler;
@property(retain, nonatomic) FIUIHealthSettingsDatePicker *datePickerView; // @synthesize datePickerView=_datePickerView;
- (void)forceUpdate;
- (void)setDateOfBirth:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

