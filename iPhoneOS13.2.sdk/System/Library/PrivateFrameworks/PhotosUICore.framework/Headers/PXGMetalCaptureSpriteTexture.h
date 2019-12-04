//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGPayloadTexture.h>

#import <PhotosUICore/PXGMetalSpriteTexture-Protocol.h>

@class NSIndexSet, NSString, PXGCaptureSpritePayload, PXGColorProgram;
@protocol MTLTexture;

@interface PXGMetalCaptureSpriteTexture : PXGPayloadTexture <PXGMetalSpriteTexture>
{
    long long _renderPipelineIndex;
    id <MTLTexture> _texture;
    const CDStruct_869f9c67 *_spriteGeometries;
    struct CGRect _captureRect;
}

@property(nonatomic) const CDStruct_869f9c67 *spriteGeometries; // @synthesize spriteGeometries=_spriteGeometries;
@property(retain, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(nonatomic) struct CGRect captureRect; // @synthesize captureRect=_captureRect;
@property(nonatomic) long long renderPipelineIndex; // @synthesize renderPipelineIndex=_renderPipelineIndex;
@property(readonly, nonatomic) int shaderFlags;
@property(readonly, nonatomic) _Bool isCaptureTexture;
@property(readonly, nonatomic) _Bool isAtlas;
@property(readonly, nonatomic) _Bool isOpaque;
- (void)cleanupAfterRender:(long long)arg1;
- (void)prepareForRender:(long long)arg1;
@property(readonly, nonatomic) PXGColorProgram *colorProgram;
- (void)getTextureInfos:(CDStruct_183601bc *)arg1 forSpriteIndexes:(unsigned int *)arg2 geometries:(const CDStruct_ac168a83 *)arg3 spriteStyles:(const CDStruct_506f5052 *)arg4 spriteInfos:(const CDStruct_9d1ebe49 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
@property(readonly, nonatomic) id <MTLTexture> chromaTexture;
@property(readonly, copy, nonatomic) PXGCaptureSpritePayload *payload;
- (id)initWithPayload:(id)arg1 presentationType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) unsigned int spriteCount;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly) Class superclass;

@end

