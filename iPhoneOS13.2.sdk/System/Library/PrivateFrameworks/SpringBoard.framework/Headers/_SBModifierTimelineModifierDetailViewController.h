//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/UITableViewDataSource-Protocol.h>
#import <SpringBoard/UITableViewDelegate-Protocol.h>

@class NSString, SBSwitcherModifierStackSnapshot, UITableView, _SBModifierTimelineTextViewController;

@interface _SBModifierTimelineModifierDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    _SBModifierTimelineTextViewController *_textViewController;
    SBSwitcherModifierStackSnapshot *_stackSnapshot;
}

@property(retain, nonatomic) SBSwitcherModifierStackSnapshot *stackSnapshot; // @synthesize stackSnapshot=_stackSnapshot;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

