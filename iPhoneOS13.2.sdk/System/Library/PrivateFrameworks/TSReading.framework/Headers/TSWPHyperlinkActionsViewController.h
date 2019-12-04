//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TSReading/UITableViewDataSource-Protocol.h>
#import <TSReading/UITableViewDelegate-Protocol.h>

@class NSString, TSWPHyperlinkField, TSWPHyperlinkSettingsViewController;

@interface TSWPHyperlinkActionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    TSWPHyperlinkField *_hyperlink;
    _Bool _readOnly;
    TSWPHyperlinkSettingsViewController *_hyperlinkSettingsViewController;
}

@property(retain, nonatomic) TSWPHyperlinkField *hyperlink; // @synthesize hyperlink=_hyperlink;
- (id)hyperlinkSettingsViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithHyperlink:(id)arg1 readOnly:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

