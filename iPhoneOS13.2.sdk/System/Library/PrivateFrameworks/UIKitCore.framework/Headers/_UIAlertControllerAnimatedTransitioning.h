//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIAlertController, UIInteractionProgress;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presentation;
    UIAlertController *_alertController;
    UIInteractionProgress *_interactionProgress;
}

@property(retain, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(getter=isPresentation) _Bool presentation; // @synthesize presentation=_presentation;
- (void)_animateTransition:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)_alertControllerForContext:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

