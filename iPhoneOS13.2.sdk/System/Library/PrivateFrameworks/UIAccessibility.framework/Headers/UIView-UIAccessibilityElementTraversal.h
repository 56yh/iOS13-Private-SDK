//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (UIAccessibilityElementTraversal)
+ (id)_accessibilityElementsAndContainersDescendingFromViews:(id)arg1 options:(id)arg2 sorted:(_Bool)arg3;
+ (id)_subviewsReplacedByModalViewSubviewsIfNecessary:(id)arg1;
+ (id)_accessibilityTitleForSystemTag:(long long)arg1;
- (_Bool)_accessibilityShouldBeProcessed:(id)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (void)_accessibilitySetIsSortingInUpperFrame:(_Bool)arg1;
- (_Bool)_accessibilityIsSortingInUpperFrame;
- (void)_addAccessibilityElementsAndOrderedContainersWithOptions:(id)arg1 toCollection:(id)arg2;
- (id)_accessibilitySubviewsForGettingElementsWithOptions:(id)arg1;
- (_Bool)_accessibilityShouldUseSupplementaryViews;
- (_Bool)_accessibilityShouldBeAddedToViewChildrenWithOptions:(id)arg1;
- (struct CGRect)accessibilityConvertRectToSceneReferenceCoordinates:(struct CGRect)arg1;
- (struct CGPoint)accessibilityConvertPointFromSceneReferenceCoordinates:(struct CGPoint)arg1;
- (id)_accessibilityComputedLabelForNavigationBarWithAssociatedBarButtonItem:(id)arg1;
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(_Bool)arg1;
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (void)_accessibilitySetOverridesInvalidFrames:(_Bool)arg1;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (id)_accessibilitySubviews;
- (id)_accessibleSubviews;
- (id)_accessibleSubviews:(int)arg1;
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1 stoppingBeforeContainer:(id)arg2;
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1;
- (void)_accessibilitySetViewIsVisible:(_Bool)arg1;
- (_Bool)_accessibilityViewIsVisible;
- (_Bool)_accessibilityViewIsActive;
- (void)_accessibilitySetFrameExpansion:(struct CGSize)arg1;
- (struct CGSize)_accessibilityFrameExpansion;
@end

