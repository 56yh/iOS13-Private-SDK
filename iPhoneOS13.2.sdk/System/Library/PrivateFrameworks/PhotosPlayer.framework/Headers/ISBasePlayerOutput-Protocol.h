//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ISPlayerOutputContent, ISPlayerOutputTransitionOptions, ISPlayerState;

@protocol ISBasePlayerOutput 
- (void)setContent:(ISPlayerOutputContent *)arg1;
- (void)applyOutputInfo:(ISPlayerState *)arg1 withTransitionOptions:(ISPlayerOutputTransitionOptions *)arg2 completion:(void (^)(_Bool))arg3;
- (void)applyScale:(double)arg1 withTransitionOptions:(ISPlayerOutputTransitionOptions *)arg2 completion:(void (^)(_Bool))arg3;

@optional
@property(copy, nonatomic) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property(readonly, nonatomic) _Bool isVideoReadyForDisplay;
@end

