//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

@interface HUNetworkConfigurationItemListModuleController : HUItemTableModuleController
{
    NSUInteger _style;
}

@property(readonly, nonatomic) NSUInteger style; // @synthesize style=_style;
- (id)_viewControllerToPresentForNetworkConfigurationGroupItem:(id)arg1;
- (NSUInteger)didSelectItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)presentNetworkConfigurationSettingsForItem:(id)arg1 animated:(BOOL)arg2;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 style:(NSUInteger)arg2;

@end

