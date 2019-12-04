//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNSceneRendererDelegate-Protocol.h>
#import <AvatarKit/_SCNSceneRendererDelegateSPI-Protocol.h>

@class AVTAvatar, AVTAvatarEnvironment, NSString, SCNNode, SCNRenderer;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>
{
    SCNRenderer *_renderer;
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    SCNNode *_avatarNode;
    AVTAvatarEnvironment *_environment;
}

+ (struct CGImage *)copyRescaledCGImage:(struct CGImage *)arg1 by:(float)arg2;
+ (id)sharedInstance;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(id /* block */)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (struct UIImage *)animatedImageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (struct UIImage *)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3 useACopy:(_Bool)arg4;
- (struct UIImage *)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (struct UIImage *)imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (void)setupAvatarWithOptions:(id)arg1 useACopy:(_Bool)arg2;
- (void)_applyOptions:(id)arg1;
- (id)init;
@property(retain, nonatomic) AVTAvatar *avatar;
@property(readonly, nonatomic) SCNRenderer *renderer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

