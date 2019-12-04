//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, UISearchBar, UIView, UIViewController, WFDrawerPaneContainer;
@protocol WFDrawerPaneHeaderView;

@protocol WFDrawerPane 
@property(retain, nonatomic) UISearchBar *searchBar;
@property(retain, nonatomic) UIView *titleView;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) __weak UIView<WFDrawerPaneHeaderView> *activeHeaderView;
@property(nonatomic) double topCornerRadius;
@property(nonatomic) double bottomContentInset;
@property(readonly, nonatomic) struct CGRect grabberAreaBounds;
@property(nonatomic) __weak WFDrawerPaneContainer *container;
@property(retain, nonatomic) UIViewController *viewController;
- (id)initWithViewController:(UIViewController *)arg1;

@optional
- (void)didTransitionToVisibility:(unsigned long long)arg1;
- (void)transitionContentForHeight:(double)arg1;
- (void)willTransitionToVisibility:(unsigned long long)arg1;
@end

