//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier
{
    CTCellularPlanPendingTransfer *_plan;
    CTCellularPlanManager *_cellularPlanManager;
}

@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *plan; // @synthesize plan=_plan;
- (void)activatePlanPendingTransfer:(id)arg1;
- (void)setSpecifierProperties;
- (id)initWithListController:(id)arg1 planPendingTransfer:(id)arg2;

@end

