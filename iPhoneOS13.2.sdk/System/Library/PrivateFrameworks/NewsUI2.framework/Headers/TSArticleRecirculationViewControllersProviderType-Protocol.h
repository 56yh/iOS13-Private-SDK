//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIViewController;
@protocol TSArticleRecirculationRoutableFeedDelegate><TSArticleRecirculationViewControllerDelegate, TSArticleRecirculationRoutedType><TSArticleRecirculationViewControllerType;

@protocol TSArticleRecirculationViewControllersProviderType
@property(nonatomic, retain) id <TSArticleRecirculationRoutableFeedDelegate><TSArticleRecirculationViewControllerDelegate> delegate;
@property(nonatomic, readonly) UIViewController<TSArticleRecirculationRoutedType><TSArticleRecirculationViewControllerType> *inArticleViewController;
@property(nonatomic, readonly) UIViewController *bottomMarginViewController;
@property(nonatomic, readonly) UIViewController<TSArticleRecirculationRoutedType><TSArticleRecirculationViewControllerType> *secondaryViewController;
@property(nonatomic, readonly) UIViewController<TSArticleRecirculationRoutedType><TSArticleRecirculationViewControllerType> *primaryViewController;
@end
