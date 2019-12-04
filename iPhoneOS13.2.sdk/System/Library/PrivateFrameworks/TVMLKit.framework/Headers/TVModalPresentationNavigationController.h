//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <TVMLKit/_TVModalPresenterFocusing-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSString, TVModalPresentationConfiguration, UIAlertController, UIView, UIViewController;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing>
{
    NSHashTable *_presentedViewControllers;
    UIViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    UIAlertController *_containingAlertController;
    TVModalPresentationConfiguration *_configuration;
}

@property(retain, nonatomic) TVModalPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak UIAlertController *containingAlertController; // @synthesize containingAlertController=_containingAlertController;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)_dismissForLastViewController:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_updateConfiguration;
- (id)initWithConfiguration:(id)arg1;
@property(readonly, nonatomic) NSHashTable *presentedViewControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

