//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/UIPageViewControllerDataSource-Protocol.h>

@class IKViewElement, NSArray, NSString, UIPageViewController;

@interface _TVModalPageTemplateController : UIViewController <UIPageViewControllerDataSource>
{
    IKViewElement *_backgroundElement;
    NSArray *_bezelViewControllers;
    IKViewElement *_collectionListElement;
    UIPageViewController *_pageViewController;
    NSArray *_viewControllers;
    IKViewElement *_viewElement;
}

- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (_Bool)_updateWithCollectionListElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)_tapAction:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

