//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSBridgedFeedArticleContext, UINavigationItem, UIViewController;
@protocol FCHeadlineProviding;

@protocol TSBridgedFeedArticleRouterType
- (UINavigationItem *)navigationItemForPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForHeadline:(id <FCHeadlineProviding>)arg1 withContext:(TSBridgedFeedArticleContext *)arg2;
- (void)routeToHeadline:(id <FCHeadlineProviding>)arg1 withContext:(TSBridgedFeedArticleContext *)arg2 shouldAutoPlayVideo:(BOOL)arg3;
@end
