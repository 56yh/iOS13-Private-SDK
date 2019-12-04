//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKCalendarWeekViewDelegate-Protocol.h>
#import <HealthUI/HKDateCacheObserver-Protocol.h>
#import <HealthUI/UIScrollViewDelegate-Protocol.h>

@class HKDateCache, HKMonthDayCell, NSCalendar, NSDate, NSMutableArray, NSString, UIScrollView;
@protocol HKCalendarScrollViewControllerDelegate;

@interface HKCalendarScrollViewController : HKViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver>
{
    unsigned long long _numberOfRows;
    NSCalendar *_calendar;
    HKDateCache *_dateCache;
    HKMonthDayCell *_selectedCell;
    NSDate *_initiallyCenteredDate;
    NSMutableArray *_weekViews;
    _Bool _needsInitialOffset;
    double _topInset;
    id <HKCalendarScrollViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HKCalendarScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)_findCenteredWeekAndUpdateTitleIfNecessary;
- (void)updateVisibleAccessoryViews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)week:(id)arg1 cellSelected:(id)arg2;
- (void)scrollToDate:(id)arg1 animateIfPossible:(_Bool)arg2;
- (unsigned long long)_firstVisibleWeekIndex;
- (id)_currentlyCenteredVisibleWeek;
- (_Bool)_dateIsVisible:(id)arg1;
- (struct CGRect)_visibleContentRect;
- (id)_weekForDate:(id)arg1;
- (void)scrollToToday;
- (struct CGPoint)_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(_Bool)arg2;
- (struct CGPoint)_centerPointToCenterDate:(id)arg1;
- (id)_startDateToTileWeekViews:(id)arg1;
- (double)_heightOfAllWeekCells;
- (void)setSelectedCell:(id)arg1;
- (void)_selectCellForDate:(id)arg1;
- (void)_selectTodayCell;
- (void)_pulseCircle;
- (id)_weekViewContainingTitleForThisMonth;
- (id)_weekViewForToday;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)_refreshViewsAndUpdateToday;
- (void)_createWeekViews;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelectedDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

