//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIGestureRecognizer;
@protocol _UIClickInteractionDriving;

@protocol _UIClickInteractionDriverDelegate <NSObject>
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didPerformEvent:(NSUInteger)arg2;
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldBegin:(void (^)(BOOL))arg2;

@optional
- (BOOL)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldDelayGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didUpdateHighlightProgress:(double)arg2;
@end
