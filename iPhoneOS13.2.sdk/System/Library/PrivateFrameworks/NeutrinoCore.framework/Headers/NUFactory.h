//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NUCacheNodeRegistry, NUGLContext, NUGLContextPool, NUJSContextPool, NUPlatform, NUPurgeableStoragePool, NURenderNodeCache, NURenderPipelineRegistry, NUScheduler, NUSchemaRegistry;
@protocol NUSlowMotionVideoFactory, NUStorageFactory;

@interface NUFactory : NSObject
{
    NUSchemaRegistry *_schemaRegistry;
    NURenderPipelineRegistry *_renderPipelineRegistry;
    NSString *_defaultNameSpace;
    NUScheduler *_scheduler;
    NUPurgeableStoragePool *_bufferStoragePool;
    NUPurgeableStoragePool *_surfaceStoragePool;
    id <NUStorageFactory> _bufferFactory;
    id <NUStorageFactory> _surfaceFactory;
    NUGLContext *_sharedOpenGLContext;
    NUGLContextPool *_sharedOpenGLContextPool;
    NURenderNodeCache *_renderNodeCache;
    NUPlatform *_platform;
    NUJSContextPool *_sharedJavaScriptContextPool;
    NUCacheNodeRegistry *_cacheNodeRegistry;
    id <NUSlowMotionVideoFactory> _slomoFactory;
}

+ (void)reset;
+ (void)setSharedFactory:(id)arg1;
+ (id)sharedFactory;
@property(retain, nonatomic) id <NUSlowMotionVideoFactory> slomoFactory; // @synthesize slomoFactory=_slomoFactory;
@property(retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry; // @synthesize cacheNodeRegistry=_cacheNodeRegistry;
@property(retain, nonatomic) NUJSContextPool *sharedJavaScriptContextPool; // @synthesize sharedJavaScriptContextPool=_sharedJavaScriptContextPool;
@property(retain, nonatomic) NUPlatform *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NURenderNodeCache *renderNodeCache; // @synthesize renderNodeCache=_renderNodeCache;
@property(retain, nonatomic) NUGLContextPool *sharedOpenGLContextPool; // @synthesize sharedOpenGLContextPool=_sharedOpenGLContextPool;
@property(retain, nonatomic) NUGLContext *sharedOpenGLContext; // @synthesize sharedOpenGLContext=_sharedOpenGLContext;
@property(retain, nonatomic) id <NUStorageFactory> surfaceFactory; // @synthesize surfaceFactory=_surfaceFactory;
@property(retain, nonatomic) id <NUStorageFactory> bufferFactory; // @synthesize bufferFactory=_bufferFactory;
@property(retain, nonatomic) NUPurgeableStoragePool *surfaceStoragePool; // @synthesize surfaceStoragePool=_surfaceStoragePool;
@property(retain, nonatomic) NUPurgeableStoragePool *bufferStoragePool; // @synthesize bufferStoragePool=_bufferStoragePool;
@property(retain, nonatomic) NUScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(copy, nonatomic) NSString *defaultNameSpace; // @synthesize defaultNameSpace=_defaultNameSpace;
@property(retain, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry; // @synthesize renderPipelineRegistry=_renderPipelineRegistry;
@property(retain, nonatomic) NUSchemaRegistry *schemaRegistry; // @synthesize schemaRegistry=_schemaRegistry;
- (void)shutdown;
- (void)start;

@end

