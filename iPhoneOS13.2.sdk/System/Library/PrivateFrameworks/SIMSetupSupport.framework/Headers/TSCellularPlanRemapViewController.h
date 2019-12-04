//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>
#import <SIMSetupSupport/UITableViewDataSource-Protocol.h>
#import <SIMSetupSupport/UITableViewDelegate-Protocol.h>

@class CTCellularPlanItem, CTDanglingPlanItem, NSArray, NSIndexPath, NSLayoutConstraint, NSString, OBBoldTrayButton, UITableViewCell;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanRemapViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem>
{
    OBBoldTrayButton *_doneButton;
    _Bool _hasBackButton;
    _Bool _hasContinueButton;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSLayoutConstraint *_heightAnchor;
    NSArray *_selectedPlanItems;
    CTDanglingPlanItem *_danglingPlanItem;
    CTCellularPlanItem *_defaultVoiceItem;
    UITableViewCell *_sectionFooter;
    NSIndexPath *_chosenTargetCellularPlanItem;
}

@property _Bool hasContinueButton; // @synthesize hasContinueButton=_hasContinueButton;
@property _Bool hasBackButton; // @synthesize hasBackButton=_hasBackButton;
@property(retain) NSIndexPath *chosenTargetCellularPlanItem; // @synthesize chosenTargetCellularPlanItem=_chosenTargetCellularPlanItem;
@property(retain) UITableViewCell *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property(retain) CTCellularPlanItem *defaultVoiceItem; // @synthesize defaultVoiceItem=_defaultVoiceItem;
@property(retain) CTDanglingPlanItem *danglingPlanItem; // @synthesize danglingPlanItem=_danglingPlanItem;
@property(retain) NSArray *selectedPlanItems; // @synthesize selectedPlanItems=_selectedPlanItems;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canBeShownFromSuspendedState;
- (void)_doneButtonTapped;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepare:(id /* block */)arg1;
- (void)remapDanglingItem:(id /* block */)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithBackButton:(_Bool)arg1 continueButton:(_Bool)arg2 danglingPlanItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

