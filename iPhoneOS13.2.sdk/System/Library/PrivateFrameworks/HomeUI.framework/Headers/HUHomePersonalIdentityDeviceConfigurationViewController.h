//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomePersonalIdentityDeviceConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_changeLanguageButton;
    OBLinkTrayButton *_cancelButton;
    NSArray *_mediaProfilesAndLanguageInfoList;
    long long _selectedLanguageIndex;
    NSLayoutConstraint *_heightAnchor;
}

@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(nonatomic) long long selectedLanguageIndex; // @synthesize selectedLanguageIndex=_selectedLanguageIndex;
@property(retain, nonatomic) NSArray *mediaProfilesAndLanguageInfoList; // @synthesize mediaProfilesAndLanguageInfoList=_mediaProfilesAndLanguageInfoList;
@property(retain, nonatomic) OBLinkTrayButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) OBTrayButton *changeLanguageButton; // @synthesize changeLanguageButton=_changeLanguageButton;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)_configureTitleDescriptionContentViewForCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)hu_preloadContent;
- (void)_cancelLanguageChange;
- (void)_changeLanguage;
- (id)initWithMediaProfileAndLanguageInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end

