//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIScenePresentationBinder.h>

@class FBSDisplayConfiguration, NSMutableSet, UIMutableTransformer, UIRootSceneWindow;

@interface UIRootWindowScenePresentationBinder : UIScenePresentationBinder
{
    FBSDisplayConfiguration *_displayConfiguration;
    UIRootSceneWindow *_rootSceneWindow;
    _Bool _shouldManageWindowLifecycle;
    NSMutableSet *_presentedScenes;
}

- (void)_noteDidStopPresentingScene:(id)arg1;
- (void)_noteWillStartPresentingScene:(id)arg1;
- (id)_rootView;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic) UIMutableTransformer *sceneTransformer;
- (id)initWithPriority:(long long)arg1 displayConfiguration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4;
- (id)_initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4;

@end

