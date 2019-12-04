//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIReviewInAppRatingHeaderView, SKUIStarRatingControl, UIInterfaceAction, UIStackView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInterfaceActionHandlerInvocationDelegate>
{
    _Bool _disableSubmit;
    id /* block */ _completion;
    id /* block */ _ratingHandler;
    UIVisualEffectView *_backgroundView;
    UIStackView *_stackView;
    NSMutableArray *_constraints;
    SKUIReviewInAppRatingHeaderView *_headerView;
    unsigned long long _state;
    UIInterfaceAction *_ratingControlAction;
    SKUIStarRatingControl *_ratingControl;
}

@property(retain, nonatomic) SKUIStarRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
@property(retain, nonatomic) UIInterfaceAction *ratingControlAction; // @synthesize ratingControlAction=_ratingControlAction;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) SKUIReviewInAppRatingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool disableSubmit; // @synthesize disableSubmit=_disableSubmit;
@property(copy, nonatomic) id /* block */ ratingHandler; // @synthesize ratingHandler=_ratingHandler;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)_actionsLayoutAxesForCurrentState;
- (id)_buttonActionWithTitle:(id)arg1 style:(unsigned long long)arg2;
- (id)_actions;
- (void)_ratingControlChanged:(id)arg1;
- (void)reloadViewsConfiguration;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

