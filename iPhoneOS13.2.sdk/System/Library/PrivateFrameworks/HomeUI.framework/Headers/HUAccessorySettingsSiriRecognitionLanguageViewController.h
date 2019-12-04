//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>

@class HUAccessorySettingsSiriRecognitionLanguageItemManager, NAFuture, NSString;

@interface HUAccessorySettingsSiriRecognitionLanguageViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>
{
    NAFuture *_changeLanguageFuture;
    long long _selectedLanguageIndex;
}

@property(nonatomic) long long selectedLanguageIndex; // @synthesize selectedLanguageIndex=_selectedLanguageIndex;
@property(retain, nonatomic) NAFuture *changeLanguageFuture; // @synthesize changeLanguageFuture=_changeLanguageFuture;
- (void)_turnOffVoiceIDAndChangeSiriLanguageForAllHomePods:(id)arg1;
- (void)_clearSpinner;
- (_Bool)_isAnyHomePodOnSupportedMultiUserLanguage;
- (void)_changeSiriLanguageOnlyForThisHomePod:(id)arg1 turnOffVoiceID:(_Bool)arg2;
- (void)_turnOffVoiceIDForTargetLanguageOption:(id)arg1;
- (void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)arg1;
- (void)_presentAlertConfirmingLanguageChangeForThisORAllHomePods:(id)arg1 indexPath:(id)arg2;
- (void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)arg1 indexPath:(id)arg2;
- (void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)arg1 indexPath:(id)arg2;
- (_Bool)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) HUAccessorySettingsSiriRecognitionLanguageItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

