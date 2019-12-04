//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBSceneLayoutInterfaceOrientedView-Protocol.h>

@class NSString, SBApplicationSceneView, SBLayoutElement, SBOrientationTransformWrapperView;

@interface SBSceneLayoutElementAnimationWrapperView : UIView <SBSceneLayoutInterfaceOrientedView>
{
    SBLayoutElement *_layoutElement;
    SBApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
}

@property(readonly, nonatomic) SBApplicationSceneView *appView; // @synthesize appView=_appView;
@property(readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
@property(readonly, nonatomic) long long layoutOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)addContentView:(id)arg1;
- (void)invalidate;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

