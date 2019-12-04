//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAEAGLLayer.h>

#import <VectorKit/GGLLayer-Protocol.h>

@protocol GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface GGLOpenGLESLayer : CAEAGLLayer <GGLLayer>
{
    id <GGLLayerDelegate> _delegate;
    shared_ptr_2063da68 _device;
    struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext>> _context;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _texture;
    struct CGSize _backingSize;
}

@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property id <GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
- (id).cxx_construct;
- (void)didEnterBackground;
- (void)setContentsScale:(double)arg1;
- (void)onTimerFired:(double)arg1;
- (void)_deleteLayerRenderBuffer;
- (_Bool)_createLayerRenderBuffer;
- (void)_createTexture;
- (void)layoutSublayers;
- (void)dealloc;
- (id)initWithDevice:(shared_ptr_2063da68)arg1;
@property(readonly, nonatomic) struct Texture *texture;
@property(readonly) int backingFormat;

@end

