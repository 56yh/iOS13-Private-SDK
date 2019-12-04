//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MTLDevice, MTLLibrary, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EspressoMetalKernelsCache : NSObject
{
    id <MTLLibrary> m_ShaderLibrary;
    id <MTLLibrary> m_DefaultLibrary;
    id <MTLDevice> _device;
    _Bool isSupportingiOSGPUFamilyV2;
    NSObject<OS_dispatch_queue> *dictionary_write_queue;
    NSMutableDictionary *auxLibraries;
    NSMutableDictionary *m_kernelCache_rw;
    NSString *_kernelPrefix;
    NSDictionary *_m_kernelCache;
}

@property(retain) NSDictionary *m_kernelCache; // @synthesize m_kernelCache=_m_kernelCache;
@property(retain, nonatomic) NSString *kernelPrefix; // @synthesize kernelPrefix=_kernelPrefix;
- (_Bool)shouldUseTexArray;
- (id)kernelForFunction:(const char *)arg1 cacheString:(const char *)arg2 withConstants:(id)arg3;
- (id)kernelForFunction:(const char *)arg1;
- (void)addLibraryAtPath:(id)arg1;
- (void)loadLibraryNamed:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

