//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PXWidgetCompositionElement;

@protocol PXWidgetCompositionElementDelegate 
- (struct NSObject *)elementViewController:(PXWidgetCompositionElement *)arg1;

@optional
- (_Bool)element:(PXWidgetCompositionElement *)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (_Bool)element:(PXWidgetCompositionElement *)arg1 transitionToViewController:(struct NSObject *)arg2 withTransitionType:(long long)arg3;
@end

