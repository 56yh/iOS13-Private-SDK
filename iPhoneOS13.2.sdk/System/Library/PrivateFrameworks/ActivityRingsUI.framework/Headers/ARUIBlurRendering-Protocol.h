//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol MTLCommandBuffer, MTLTexture;

@protocol ARUIBlurRendering 
- (id <MTLTexture>)gaussianBlurredTexture:(id <MTLTexture>)arg1 withCommandBuffer:(id <MTLCommandBuffer>)arg2 andSize:(unsigned long long)arg3 blurRadius:(float)arg4 initialDownsampleFraction:(float)arg5 brightnessMultiplier: /* Error: Ran out of types for this method. */;
- (void)prewarmBlurRenderPipeline;
@end

