//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITableView;

__attribute__((visibility("hidden")))
@interface MCSectionBasedTableView : UIView
{
    UITableView *_tableView;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)layoutSubviews;
- (id)_createTableView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

