//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIScrollView, WFDrawerPaneContainer;

@protocol WFDrawerPaneContainerDelegate 
- (UIScrollView *)scrollViewOccludingDrawerPaneInsideContainer:(WFDrawerPaneContainer *)arg1;
- (double)bottomInsetForPaneContainer:(WFDrawerPaneContainer *)arg1;
- (void)drawerPaneContainer:(WFDrawerPaneContainer *)arg1 didTransitionToVisibility:(unsigned long long)arg2;
- (void)drawerPaneContainer:(WFDrawerPaneContainer *)arg1 willTransitionToVisibility:(unsigned long long)arg2;
@end

