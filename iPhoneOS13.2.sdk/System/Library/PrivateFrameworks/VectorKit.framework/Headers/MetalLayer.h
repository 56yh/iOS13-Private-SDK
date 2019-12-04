//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

#import <VectorKit/GGLLayer-Protocol.h>

@protocol GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface MetalLayer : CAMetalLayer <GGLLayer>
{
    id <GGLLayerDelegate> _delegate;
    shared_ptr_94286ce0 _device;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _texture;
    _Bool _sRGB;
    struct CGSize _backingSize;
}

@property(readonly, nonatomic) _Bool sRGB; // @synthesize sRGB=_sRGB;
@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property id <GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
- (id).cxx_construct;
- (void)display;
- (void)didEnterBackground;
- (void)onTimerFired:(double)arg1 presentAfterMinimumDuration:(double)arg2;
- (void)onTimerFired:(double)arg1 presentAtTime:(double)arg2;
- (void)onTimerFired:(double)arg1;
- (void)_onTimerFired:(double)arg1 withPresent:(id /* block */)arg2;
- (id)_updateDrawable;
- (void)_createTexture;
- (void)layoutSublayers;
- (id)initWithDevice:(shared_ptr_94286ce0)arg1 sRGB:(_Bool)arg2;
@property(readonly) int backingFormat;

@end
