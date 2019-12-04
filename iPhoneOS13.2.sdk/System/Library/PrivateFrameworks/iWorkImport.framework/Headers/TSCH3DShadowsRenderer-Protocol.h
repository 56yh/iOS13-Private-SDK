//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSCH3DContext, TSCH3DFramebuffer, TSCH3DSceneRenderPipeline, TSCH3DSession;

@protocol TSCH3DShadowsRenderer
- (TSCH3DFramebuffer *)shadowsFBOForContext:(TSCH3DContext *)arg1;
- (float)blurSlackForQuality:(float)arg1;
- (void)invalidate;
- (void)unprotectShadowInSession:(TSCH3DSession *)arg1;
- (void)protectShadowForQuality:(float)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2 renderBlock:(void (^)(TSCH3DFramebuffer *))arg3;
@end

