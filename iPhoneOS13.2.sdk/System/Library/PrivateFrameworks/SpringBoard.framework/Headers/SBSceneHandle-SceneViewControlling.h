//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBSceneHandle.h>

@interface SBSceneHandle (SceneViewControlling)
- (id)newSceneViewController;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewWithReferenceSize:(struct CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3;
- (_Bool)isDeviceApplicationSceneHandle;
@property(readonly, nonatomic, getter=isEffectivelyForeground) _Bool effectivelyForeground;
@end

