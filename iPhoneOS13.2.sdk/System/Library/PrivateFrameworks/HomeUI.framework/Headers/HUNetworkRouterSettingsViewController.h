//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@class HUNetworkConfigurationItemListModuleController, HUNetworkRouterSettingsItemManager, NSString;

@interface HUNetworkRouterSettingsViewController : HUItemTableViewController <HUPresentationDelegate, HUSwitchCellDelegate>
{
    HUNetworkConfigurationItemListModuleController *_networkConfigurationItemListModuleController;
}

@property(retain, nonatomic) HUNetworkConfigurationItemListModuleController *networkConfigurationItemListModuleController; // @synthesize networkConfigurationItemListModuleController=_networkConfigurationItemListModuleController;
- (Class)_networkRouterDetailsViewControllerClass;
- (_Bool)_shouldShowNetworkRouterDetails;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)presentNetworkRouterSettingsForItem:(id)arg1 animated:(_Bool)arg2;
- (id)presentNetworkRouterSettingsForProfile:(id)arg1 animated:(_Bool)arg2;
- (id)presentNetworkConfigurationSettingsForProfile:(id)arg1 animated:(_Bool)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) HUNetworkRouterSettingsItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

