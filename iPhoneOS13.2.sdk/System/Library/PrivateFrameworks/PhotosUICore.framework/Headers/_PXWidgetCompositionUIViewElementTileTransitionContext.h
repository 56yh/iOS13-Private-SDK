//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXBasicTileAnimationOptions;

@interface _PXWidgetCompositionUIViewElementTileTransitionContext : NSObject
{
    PXBasicTileAnimationOptions *_animationOptions;
    id /* block */ _alongsideAnimation;
    id /* block */ _alongsideAnimationCompletion;
}

@property(copy, nonatomic) id /* block */ alongsideAnimationCompletion; // @synthesize alongsideAnimationCompletion=_alongsideAnimationCompletion;
@property(copy, nonatomic) id /* block */ alongsideAnimation; // @synthesize alongsideAnimation=_alongsideAnimation;
@property(retain, nonatomic) PXBasicTileAnimationOptions *animationOptions; // @synthesize animationOptions=_animationOptions;

@end

