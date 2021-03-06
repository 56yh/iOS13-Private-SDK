//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLSerializerResource-Protocol.h>

@protocol MTLBuffer, MTLTexture;

@protocol MTLSerializerTexture <MTLSerializerResource>
@property(readonly) id <MTLTexture> decompressedTextureView;
@property(readonly) id <MTLBuffer> backingBuffer;
@property(readonly) NSUInteger decompressedPixelFormat;
@property(readonly) NSUInteger pixelFormat;
@property(readonly) unsigned int textureRef;
- (NSUInteger)calculateOffsetToRegion:(CDStruct_caaed6bc)arg1 level:(NSUInteger)arg2 slice:(NSUInteger)arg3;
- (void)decompressPlaceholder:(const char )arg1 expandedTex:(char )arg2 srcFormat:(NSUInteger)arg3 destFormat:(NSUInteger)arg4 width:(NSUInteger)arg5 height:(NSUInteger)arg6 destRowBytes:(NSUInteger)arg7 srcRowBytes:(NSUInteger)arg8;
@end

