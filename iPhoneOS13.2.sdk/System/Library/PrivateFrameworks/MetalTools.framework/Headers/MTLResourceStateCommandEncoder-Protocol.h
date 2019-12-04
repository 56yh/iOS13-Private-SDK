//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLCommandEncoder-Protocol.h>

@protocol MTLBuffer, MTLFence, MTLTexture;

@protocol MTLResourceStateCommandEncoder <MTLCommandEncoder>
- (void)waitForFence:(id <MTLFence>)arg1;
- (void)updateFence:(id <MTLFence>)arg1;
- (void)updateTextureMapping:(id <MTLTexture>)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id <MTLBuffer>)arg3 indirectBufferOffset:(unsigned long long)arg4;
- (void)updateTextureMapping:(id <MTLTexture>)arg1 mode:(unsigned long long)arg2 region:(CDStruct_1e3be3a8)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (void)updateTextureMappings:(id <MTLTexture>)arg1 mode:(unsigned long long)arg2 regions:(const CDStruct_1e3be3a8 *)arg3 mipLevels:(const unsigned long long *)arg4 slices:(const unsigned long long *)arg5 numRegions:(unsigned long long)arg6;
@end

