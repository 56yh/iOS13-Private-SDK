//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, PXGTextureProvider;
@protocol NSCopying;

@protocol PXGTextureProviderDelegate
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(PXGTextureProvider *)arg1;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(PXGTextureProvider *)arg1;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePayload:(id <NSCopying>)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePixelBuffer:(struct __CVBuffer *)arg2 orientationTransform:(struct CGAffineTransform)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideImageData:(NSData *)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideNothingForRequestID:(int)arg2;
@end

