//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction
{
    NSString *_suppressionReason;
    UIGestureRecognizer *_gestureRecognizer;
    long long _completionType;
}

@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)_beginAnimation;
- (void)_setupAnimation;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (_Bool)shouldSuppressMedusaKeyboardDuringGesture;
- (void)_didComplete;
- (void)_begin;
@property(readonly, nonatomic) long long completionType; // @synthesize completionType=_completionType;
- (void)finishWithCompletionType:(long long)arg1;
- (id)initWithTransitionRequest:(id)arg1;

@end

