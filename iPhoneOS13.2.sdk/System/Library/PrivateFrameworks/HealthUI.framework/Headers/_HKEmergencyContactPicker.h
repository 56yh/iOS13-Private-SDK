//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/CNContactPickerDelegate-Protocol.h>

@class NSString, UIViewController;
@protocol _HKEmergencyContactPickerDelegate;

@interface _HKEmergencyContactPicker : NSObject <CNContactPickerDelegate>
{
    UIViewController *_owningViewController;
    id <_HKEmergencyContactPickerDelegate> _delegate;
}

@property(nonatomic) __weak id <_HKEmergencyContactPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
- (id)_meContactIdentifier;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)presentEmergencyContactPickerForMedicalIDData:(id)arg1;
- (id)initWithOwningViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

