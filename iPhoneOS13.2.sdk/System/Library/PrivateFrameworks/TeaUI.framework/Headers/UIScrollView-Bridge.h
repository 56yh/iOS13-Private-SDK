//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (Bridge)
- (void)ts_setIndicatorInsetAdjustmentBehaviorAlways;
- (void)ts_setIndicatorInsetAdjustmentBehaviorAutomatic;
- (void)ts_setIndicatorInsetAdjustmentBehaviorNever;
- (_Bool)ts_isAutomaticContentOffsetAdjustmentEnabled;
- (void)ts_setAutomaticContentOffsetAdjustmentEnabled:(_Bool)arg1;
- (_Bool)ts_scrollToTop:(_Bool)arg1;
@property(readonly, nonatomic) double ts_verticalVelocity;
@property(readonly, nonatomic) _Bool ts_isAnimatingScroll;
@property(readonly, nonatomic) _Bool ts_isScrolling;
@end

