//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@class NSString, SBDismissOverlaysAnimationController;

@interface SBRotateHomeScreenWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBDismissOverlaysAnimationController *_animationController;
}

- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
