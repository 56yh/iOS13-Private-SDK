//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/BSUIScrollViewDelegate-Protocol.h>

@class SBIconScrollView;

@protocol SBIconScrollViewDelegate <BSUIScrollViewDelegate>
- (_Bool)iconScrollView:(SBIconScrollView *)arg1 shouldSetAutoscrollContentOffset:(struct CGPoint)arg2;
- (_Bool)iconScrollView:(SBIconScrollView *)arg1 shouldSetContentOffset:(struct CGPoint *)arg2 animated:(_Bool)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(SBIconScrollView *)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(SBIconScrollView *)arg1;
@end

