//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDContentAnimationTiming-Protocol.h>

@class NSString;

@interface TSDContentAnimation : NSObject <TSDContentAnimationTiming>
{
}

+ (id)animation;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(id /* block */)arg1;
- (_Bool)i_canProduceAnimation;
- (void)i_applyToLayer:(id)arg1 withTransformBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

