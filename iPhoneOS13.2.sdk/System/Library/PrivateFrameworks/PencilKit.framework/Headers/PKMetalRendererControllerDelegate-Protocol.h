//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PKMetalRendererController;
@protocol MTLTexture;

@protocol PKMetalRendererControllerDelegate 

@optional
- (void)metalRendererController:(PKMetalRendererController *)arg1 didCommitRenderingIntoTexture:(id <MTLTexture>)arg2;
- (id <MTLTexture>)nextTextureTargetForMetalRendererController:(PKMetalRendererController *)arg1;
@end

