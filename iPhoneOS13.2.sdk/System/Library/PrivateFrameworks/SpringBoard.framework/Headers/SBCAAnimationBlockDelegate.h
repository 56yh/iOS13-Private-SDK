//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface SBCAAnimationBlockDelegate : NSObject <CAAnimationDelegate>
{
    id /* block */ _animationDidStartHandler;
    id /* block */ _animationDidStopHandler;
}

@property(copy, nonatomic) id /* block */ animationDidStopHandler; // @synthesize animationDidStopHandler=_animationDidStopHandler;
@property(copy, nonatomic) id /* block */ animationDidStartHandler; // @synthesize animationDidStartHandler=_animationDidStartHandler;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

