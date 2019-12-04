//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/_UIScrollToTopView-Protocol.h>

@class SBSceneHandle;
@protocol SBScrollToTopSceneProxyViewDelegate;

@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView>
{
    SBSceneHandle *_sceneHandle;
    id <SBScrollToTopSceneProxyViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBScrollToTopSceneProxyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(id /* block */)arg2;
- (_Bool)isScrollEnabled;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;

@end

