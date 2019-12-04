//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUItemTableModuleControllerHosting-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HMHome, HUTVViewingProfilesEditorItemManager, NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_useTVVPButton;
    OBLinkTrayButton *_customizeButton;
    HUTVViewingProfilesEditorItemManager *_tvVPEditorItemManager;
}

@property(retain, nonatomic) HUTVViewingProfilesEditorItemManager *tvVPEditorItemManager; // @synthesize tvVPEditorItemManager=_tvVPEditorItemManager;
@property(retain, nonatomic) OBLinkTrayButton *customizeButton; // @synthesize customizeButton=_customizeButton;
@property(retain, nonatomic) OBTrayButton *useTVVPButton; // @synthesize useTVVPButton=_useTVVPButton;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)hu_preloadContent;
- (void)_turnOnAllTVViewingProfiles:(id)arg1;
- (void)_customizeOrOffButton:(id)arg1;
- (void)_setupTVViewingProfilesItemInfrastructure;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end

