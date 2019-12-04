//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>

@class HUPersonalRequestsDevicesModuleController, HUPersonalRequestsEditorItemManager, NSString;

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>
{
    _Bool _onlyShowDeviceSwitches;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    HUPersonalRequestsDevicesModuleController *_prDevicesModuleController;
}

@property(nonatomic) _Bool onlyShowDeviceSwitches; // @synthesize onlyShowDeviceSwitches=_onlyShowDeviceSwitches;
@property(readonly, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController; // @synthesize prDevicesModuleController=_prDevicesModuleController;
@property(retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // @synthesize prEditorItemManager=_prEditorItemManager;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)itemModuleControllers;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (id)initWithUserItem:(id)arg1 sourceMediaProfileContainer:(id)arg2 onlyShowDeviceSwitches:(_Bool)arg3;
- (id)initWithUserItem:(id)arg1 onlyShowDeviceSwitches:(_Bool)arg2;
- (id)initWithAccessoryGroupItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

