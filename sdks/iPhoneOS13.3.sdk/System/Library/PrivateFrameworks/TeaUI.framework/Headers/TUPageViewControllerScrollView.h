//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol TUPageViewControllerScrollViewAccessibilityDelegate;

@interface TUPageViewControllerScrollView : UIScrollView
{
    id <TUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <TUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
// - (void).cxx_destruct;
- (BOOL)accessibilityScroll:(long long)arg1;

@end

