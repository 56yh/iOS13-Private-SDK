//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CARenderer;
@protocol MTLTexture;

@interface NTKUpNextRenderer : NSObject
{
    CARenderer *_renderer;
    struct __IOSurface *_ioSurface;
    id <MTLTexture> _texture;
}

- (void)dealloc;
- (struct __IOSurface *)newSurfaceWithWidth:(double)arg1 height:(double)arg2;
- (id)renderView:(id)arg1;

@end

