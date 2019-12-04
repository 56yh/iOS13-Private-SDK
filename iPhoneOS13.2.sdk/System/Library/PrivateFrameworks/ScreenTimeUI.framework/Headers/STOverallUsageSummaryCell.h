//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class STNoUsageDataView, STUsageGraphViewController, STUsageSummaryTitleView;

__attribute__((visibility("hidden")))
@interface STOverallUsageSummaryCell : STTableCell
{
    STUsageSummaryTitleView *_titleView;
    STUsageGraphViewController *_weekGraphViewController;
    STNoUsageDataView *_noUsageDataView;
}

@property(readonly) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(readonly) STUsageGraphViewController *weekGraphViewController; // @synthesize weekGraphViewController=_weekGraphViewController;
@property(readonly) STUsageSummaryTitleView *titleView; // @synthesize titleView=_titleView;
- (void)_setNoUsageDataViewVisibility;
- (void)setValue:(id)arg1;
- (id)value;
- (void)_hasMulitlineLayoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

