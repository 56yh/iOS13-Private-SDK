//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController
{
    PSSpecifier *_spinner;
    PSSpecifier *_turnOnButton;
}

- (id)getAccountNameForSpecifier:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)turnOnTapped:(id)arg1;
- (void)_deactivateSpinner;
- (void)_activateSpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_rightButtonItem;
- (id)specifierList;
- (id)bundle;

@end

