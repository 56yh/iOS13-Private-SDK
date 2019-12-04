//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSKeychainSyncTextEntryController.h>

#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class NSString, PSKeychainSyncManager, UIButton;

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate>
{
    UIButton *_footerButton;
    NSString *_phoneNumber;
    NSString *_dialingPrefix;
    NSString *_countryCode;
    PSKeychainSyncManager *_keychainSyncManager;
}

@property(nonatomic) __weak PSKeychainSyncManager *keychainSyncManager; // @synthesize keychainSyncManager=_keychainSyncManager;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *dialingPrefix; // @synthesize dialingPrefix=_dialingPrefix;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)dismissAlerts;
- (void)showSupportVerification;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)specifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

