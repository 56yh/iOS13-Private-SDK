//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class WFHomeManager;
@protocol WFAutomationTypeChooserViewControllerDelegate;

@interface WFAutomationTypeChooserViewController : UITableViewController
{
    id <WFAutomationTypeChooserViewControllerDelegate> _delegate;
    WFHomeManager *_homeManager;
}

+ (unsigned long long)automationTypeForHomeManager:(id)arg1;
@property(readonly, nonatomic) WFHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) __weak id <WFAutomationTypeChooserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)chooseHomeAutomation:(id)arg1;
- (void)choosePersonalAutomation:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isModalInPresentation;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHomeManager:(id)arg1;

@end

