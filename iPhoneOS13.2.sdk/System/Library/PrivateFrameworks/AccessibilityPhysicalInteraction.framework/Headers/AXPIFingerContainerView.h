//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AXPIPinchChainView, NSMutableArray;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerContainerView : UIView
{
    NSMutableArray *_fingerViews;
    UIView *_viewForAnimatingAlpha;
    AXPIPinchChainView *_pinchChainView;
    _Bool _shouldAnimatePress;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
}

@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic) _Bool shouldAnimatePress; // @synthesize shouldAnimatePress=_shouldAnimatePress;
- (void)animateToTapWithDuration:(double)arg1;
- (void)cancelCircularProgressAnimation;
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (struct CGRect)rectForFingersAtPoints:(id)arg1;
- (void)_updatePinchChainAppearance;
- (void)updateWithFingerModel:(id)arg1 forFingerAtIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfFingerAtPoint:(struct CGPoint)arg1;
- (void)clearAllFingersAnimated:(_Bool)arg1 endPointForAnimation:(struct CGPoint)arg2;
- (void)showFingerModels:(id)arg1 animated:(_Bool)arg2 startPointForAnimation:(struct CGPoint)arg3 shouldShowPinchChain:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isPinchChainVisible;
- (id)initWithFrame:(struct CGRect)arg1;

@end
