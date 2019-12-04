//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyPreferences/TPSEditingPane.h>

#import <TelephonyPreferences/UITableViewDataSource-Protocol.h>
#import <TelephonyPreferences/UITableViewDelegate-Protocol.h>

@class NSString, UITableView, UITableViewCell;

@interface TPSDetailPane : TPSEditingPane <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UITableViewCell *_tableViewCell;
}

@property(readonly, nonatomic) UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceValue;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

