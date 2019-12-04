//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

#import <NeutrinoCore/NUGLFramebufferAttachable-Protocol.h>

@class NUPixelFormat;
@protocol EAGLDrawable;

@interface NUGLRenderbuffer : NUGLObject <NUGLFramebufferAttachable>
{
    id <EAGLDrawable> _drawable;
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

@property(readonly, nonatomic) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
- (void)copyRect:(CDStruct_996ac03c)arg1 toBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)read:(id)arg1 block:(id /* block */)arg2;
- (void)draw:(id)arg1 block:(id /* block */)arg2;
- (void)flushDrawableWithContext:(id)arg1;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)delete;
- (void)generate:(id)arg1;
- (id)initWithDrawable:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)init;

@end

