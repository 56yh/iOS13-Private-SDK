//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/STTelephonyStateObserver-Protocol.h>
#import <SpringBoard/UITableViewDataSource-Protocol.h>
#import <SpringBoard/UITableViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UITableView, UIView;

@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate>
{
    NSString *_meid;
    NSString *_serial;
    NSArray *_mobileEquipmentInfo;
    NSArray *_mobileSubscriptionInfo;
    UIView *_containerView;
    UITableView *_activationInfoTableView;
    NSLayoutConstraint *_activationInfoTableViewHeight;
    UIButton *_regulatoryInfoButton;
}

@property(readonly, nonatomic) UIButton *regulatoryInfoButton; // @synthesize regulatoryInfoButton=_regulatoryInfoButton;
- (id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2;
- (id)_formattedCSN:(id)arg1;
- (id)_formattedIMEI:(id)arg1;
- (id)_formattedICCID:(id)arg1;
- (id)_backgroundViewForHeaderView:(id)arg1;
- (id)_activationInfoCell;
- (id)_titleForHeaderInSection:(long long)arg1;
- (id)_processDeviceInfo;
- (id)_processMobileEquipmentInfo:(id)arg1;
- (id)_processMobileSubscriptionInfo;
- (void)_updateMobileEquipmentInfo;
- (void)_telephonyStateChanged;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

