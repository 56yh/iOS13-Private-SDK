//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIPhysicalCirclesDataSource-Protocol.h>
#import <StoreKitUI/SKUIPhysicalCirclesDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSObject, NSString, SKUIClientContext, SKUIOnboardingInstructionsView, SKUIPhysicalCirclesView, UIView;
@protocol OS_dispatch_source, SKUIOnboardingAffiliationCirclesDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController <SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate>
{
    NSMutableArray *_affiliationItems;
    SKUIPhysicalCirclesView *_circlesView;
    SKUIClientContext *_clientContext;
    id <SKUIOnboardingAffiliationCirclesDelegate> _delegate;
    NSObject<OS_dispatch_source> *_deletionTimer;
    _Bool _didPerformFinishAnimation;
    UIView *_footerView;
    NSMapTable *_images;
    SKUIOnboardingInstructionsView *_instructionsView;
    _Bool _needsReloadOnDidAppear;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <SKUIOnboardingAffiliationCirclesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSArray *affiliationItems; // @synthesize affiliationItems=_affiliationItems;
- (double)_topLayoutMargin;
- (long long)_titlePositionForAffinityCount:(long long)arg1;
- (void)_sendAffilationItemsDidChange;
- (void)_reloadRepellors;
- (void)_completeDeletionForCircleAtIndex:(long long)arg1;
- (struct CGSize)_circleSizeForAffinityCount:(long long)arg1;
- (double)_circleImageAlphaForAffinityCount:(long long)arg1;
- (void)_cancelDeletionTimer;
- (void)circleView:(id)arg1 didTapCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;
- (long long)numberOfCirclesInCircleView:(id)arg1;
- (id)circlesView:(id)arg1 circleForIndex:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)setUserAffinityCount:(long long)arg1 forAffiliationItemAtIndex:(long long)arg2 animated:(_Bool)arg3 completionBlock:(id /* block */)arg4;
- (void)setImage:(id)arg1 forAffiliationItem:(id)arg2;
- (void)setFooterView:(id)arg1 animated:(_Bool)arg2;
- (void)resetWithAffiliationItems:(id)arg1 animated:(_Bool)arg2 completionBlock:(id /* block */)arg3;
- (void)removeAffiliationItemsInIndexSet:(id)arg1 animated:(_Bool)arg2 completionBlock:(id /* block */)arg3;
- (void)performFinishAnimationWithCompletionBlock:(id /* block */)arg1;
@property(readonly, nonatomic) double maximumCircleDiameter;
@property(readonly, nonatomic) SKUIOnboardingInstructionsView *instructionsView;
- (void)addAffiliationItems:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

