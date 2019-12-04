//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyPreferences/TPSListController.h>

#import <TelephonyPreferences/TPSCallForwardingControllerDelegate-Protocol.h>

@class NSString, PSSpecifier, TPSCallForwardingController;

@interface TPSCallForwardingListController : TPSListController <TPSCallForwardingControllerDelegate>
{
    TPSCallForwardingController *_callForwardingController;
    PSSpecifier *_conditionalServiceSwitchSpecifier;
    PSSpecifier *_masterSwitchSpecifier;
}

- (void)callForwardingController:(id)arg1 didChangeValue:(id)arg2 error:(id)arg3;
- (void)callForwardingController:(id)arg1 didChangeServiceType:(long long)arg2;
- (void)configureCell:(id)arg1 forSpecifier:(id)arg2;
- (void)configureCell:(id)arg1;
- (void)setUnconditionalServicePhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)unconditionalServicePhoneNumber:(id)arg1;
- (void)setConditionalServiceSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceSwitchOn:(id)arg1;
- (void)setConditionalServiceUnreachablePhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceUnreachablePhoneNumber:(id)arg1;
- (void)setConditionalServiceUnansweredPhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceUnansweredPhoneNumber:(id)arg1;
- (void)setConditionalServiceBusyPhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)conditionalServiceBusyPhoneNumber:(id)arg1;
- (void)setMasterSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)masterSwitchOn:(id)arg1;
- (id)unconditionalServiceTypeSpecifiers;
- (id)conditionalServiceTypeSpecifiers;
@property(readonly, nonatomic) PSSpecifier *conditionalServiceSwitchSpecifier; // @synthesize conditionalServiceSwitchSpecifier=_conditionalServiceSwitchSpecifier;
@property(readonly, nonatomic) PSSpecifier *masterSwitchSpecifier; // @synthesize masterSwitchSpecifier=_masterSwitchSpecifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
@property(readonly, nonatomic) TPSCallForwardingController *callForwardingController; // @synthesize callForwardingController=_callForwardingController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

