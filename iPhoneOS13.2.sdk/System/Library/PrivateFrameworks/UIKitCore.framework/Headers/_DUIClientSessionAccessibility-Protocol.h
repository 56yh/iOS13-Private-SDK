//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class _DUIAccessibilityDragStatus;

@protocol _DUIClientSessionAccessibility
- (oneway void)dragDidEndWithOperation:(NSUInteger)arg1;
- (oneway void)dragStatusDidChange:(_DUIAccessibilityDragStatus *)arg1;
- (oneway void)dragWillBeginWithReply:(void (^)(void))arg1;
@end
