//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol WDDashboardCellChartSource, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource;

@protocol WDDisplayTypeDetailViewControllerChartCellType 
@property(nonatomic) unsigned long long marginMode;
@property(nonatomic) unsigned long long displayMode;
- (void)setTimeScope:(long long)arg1;
- (void)setPrimaryValueSource:(id <WDDashboardCellPrimaryValueSource>)arg1 secondaryValueSource:(id <WDDashboardCellSecondaryValueSource>)arg2 chartSource:(id <WDDashboardCellChartSource>)arg3;
@end

