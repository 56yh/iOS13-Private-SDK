//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIViewController;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject
{
    _Bool _animated;
    _Bool _presenting;
    UIView *_containerView;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    id /* block */ _presentationCompletion;
    id /* block */ _dismissalCompletion;
}

@property(copy, nonatomic) id /* block */ dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(copy, nonatomic) id /* block */ presentationCompletion; // @synthesize presentationCompletion=_presentationCompletion;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;

@end

