//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol SVVideoPlaybackPolicy;

@protocol SVVideoPlaybackPolicyObserving 
@property(readonly, nonatomic) id <SVVideoPlaybackPolicy> policy;
@property(copy, nonatomic, setter=onAllowedStateChange:) id /* block */ allowedStateChangeBlock;
@property(copy, nonatomic, setter=onRequestStateChange:) id /* block */ requestStateChangeBlock;
@end

