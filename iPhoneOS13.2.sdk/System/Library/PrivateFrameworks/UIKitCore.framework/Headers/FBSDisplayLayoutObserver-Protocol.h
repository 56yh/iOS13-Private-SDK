//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutTransitionContext;

@protocol FBSDisplayLayoutObserver 

@optional
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2 withContext:(FBSDisplayLayoutTransitionContext *)arg3;
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2;
@end

