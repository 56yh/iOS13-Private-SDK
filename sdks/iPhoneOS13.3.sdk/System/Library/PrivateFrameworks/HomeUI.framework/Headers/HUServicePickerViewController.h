//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class NSSet;

@interface HUServicePickerViewController : HUSelectableServiceGridViewController
{
    BOOL _isPresentedModally;
    NSSet *_preselectedServices;
}

@property(retain, nonatomic) NSSet *preselectedServices; // @synthesize preselectedServices=_preselectedServices;
@property(nonatomic) BOOL isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
// - (void).cxx_destruct;
- (BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (BOOL)_preselectedServicesContainsService:(id)arg1;
- (BOOL)_isItemPreselected:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)_servicesForItem:(id)arg1;
- (id)_servicesForItems:(id)arg1;
- (void)_done:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_setUpNavButtons;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1 selectedServices:(id)arg2 isPresentedModally:(BOOL)arg3 delegate:(id)arg4;
- (id)initWithHome:(id)arg1 isPresentedModally:(BOOL)arg2 delegate:(id)arg3;

@end

