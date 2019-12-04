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

@class NSArray, NSLayoutConstraint, NSString, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    NSArray *_homeAssistantDevicesHavingLanguageMismatch;
    NSLayoutConstraint *_heightAnchor;
    OBTrayButton *_continueButton;
}

@property(retain, nonatomic) OBTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch; // @synthesize homeAssistantDevicesHavingLanguageMismatch=_homeAssistantDevicesHavingLanguageMismatch;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)hu_preloadContent;
- (void)_continue;
- (id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end
