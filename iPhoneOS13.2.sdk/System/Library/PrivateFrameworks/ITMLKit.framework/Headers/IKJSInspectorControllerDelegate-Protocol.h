//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, UIColor;

@protocol IKJSInspectorControllerDelegate 

@optional
- (_Bool)cancelHighlightView;
- (_Bool)highlightViewsForElementsWithIDs:(NSArray *)arg1 contentColor:(UIColor *)arg2 paddingColor:(UIColor *)arg3 borderColor:(UIColor *)arg4 marginColor:(UIColor *)arg5;
- (_Bool)highlightViewForElementWithID:(long long)arg1 contentColor:(UIColor *)arg2 paddingColor:(UIColor *)arg3 borderColor:(UIColor *)arg4 marginColor:(UIColor *)arg5;
- (void)inspectElementModeChanged:(_Bool)arg1;
@end
