//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXScrollViewController;
@protocol SXAction, SXDocumentStyle;

@protocol SXScrollViewControllerDelegate <NSObject>

@optional
- (BOOL)accessibilityShouldScrollForScrollViewController:(SXScrollViewController *)arg1;
- (BOOL)accessibilityShouldScrollForScrollViewController:(SXScrollViewController *)arg1 defaultValue:(BOOL)arg2;
- (BOOL)scrollViewController:(SXScrollViewController *)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (void)scrollViewController:(SXScrollViewController *)arg1 enableNavigation:(BOOL)arg2;
- (void)scrollViewControllerDidStopScrolling:(SXScrollViewController *)arg1;
- (void)scrollViewControllerDidScroll:(SXScrollViewController *)arg1;
- (void)scrollViewControllerDismissFullscreen:(SXScrollViewController *)arg1;
- (double)toolBarHeightForScrollViewController:(SXScrollViewController *)arg1;
- (double)navigationBarHeightForScrollViewController:(SXScrollViewController *)arg1;
- (void)scrollViewControllerRequestsFullscreen:(SXScrollViewController *)arg1;
- (void)scrollViewController:(SXScrollViewController *)arg1 triggerAction:(id <SXAction>)arg2;
- (void)scrollViewController:(SXScrollViewController *)arg1 didApplyDocumentStyle:(id <SXDocumentStyle>)arg2;
- (void)scrollViewControllerDidLayoutContent:(SXScrollViewController *)arg1;
- (void)scrollViewControllerWillLayoutContent:(SXScrollViewController *)arg1;
@end

