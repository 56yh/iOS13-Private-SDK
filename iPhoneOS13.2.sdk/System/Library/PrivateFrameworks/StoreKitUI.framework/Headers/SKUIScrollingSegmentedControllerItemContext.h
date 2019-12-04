//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView, UIViewController;
@protocol SKUIScrollingSegmentedControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingSegmentedControllerItemContext : NSObject
{
    struct UIEdgeInsets _appliedContentInsetsAdjustment;
    struct UIEdgeInsets _desiredContentInsetsAdjustment;
    UIScrollView *_insetAdjustedContentScrollView;
    id <SKUIScrollingSegmentedControllerItemContextDelegate> _delegate;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SKUIScrollingSegmentedControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;
- (void)updateAppliedContentInsetsAdjustment;
- (void)applyNewContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

