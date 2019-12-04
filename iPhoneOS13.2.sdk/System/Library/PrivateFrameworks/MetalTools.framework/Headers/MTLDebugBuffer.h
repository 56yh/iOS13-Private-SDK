//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsBuffer.h>

@class MTLDebugDevice, MTLDebugResource, MTLDebugResourceAccessTracker, MTLIndirectCommandBufferDescriptor, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer
{
    MTLDebugResource *_common;
    unsigned long long _length;
    MTLDebugResourceAccessTracker *_resourceAccessTracker;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    _Bool _purgeableStateHasBeenSet;
    _Bool _isContentsPointerExposed;
    _Bool _isContentExposedToCPU;
    unsigned int _maxIndirectCommandCount;
    unsigned int _checksum;
    const void *_pointer;
    unsigned long long _purgeableState;
    MTLIndirectCommandBufferDescriptor *_indirectCommandBufferDescriptor;
}

@property(nonatomic) _Bool isContentExposedToCPU; // @synthesize isContentExposedToCPU=_isContentExposedToCPU;
@property(nonatomic) unsigned int checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) _Bool isContentsPointerExposed; // @synthesize isContentsPointerExposed=_isContentsPointerExposed;
@property(readonly, nonatomic) unsigned int maxIndirectCommandCount; // @synthesize maxIndirectCommandCount=_maxIndirectCommandCount;
@property(readonly, nonatomic) MTLIndirectCommandBufferDescriptor *indirectCommandBufferDescriptor; // @synthesize indirectCommandBufferDescriptor=_indirectCommandBufferDescriptor;
@property(readonly, nonatomic) _Bool purgeableStateHasBeenSet; // @synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet;
@property(readonly, nonatomic) unsigned long long purgeableState; // @synthesize purgeableState=_purgeableState;
@property(readonly, nonatomic) const void *pointer; // @synthesize pointer=_pointer;
@property(readonly, nonatomic) MTLDebugResource *common; // @synthesize common=_common;
- (void)blitManagedToShared;
- (void)blitManagedToPrivate;
- (void)accessedByCPU;
- (void)accessedByGPU;
@property(readonly, nonatomic) _Bool resourceTrackingEnabled; // @dynamic resourceTrackingEnabled;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (id)copyDebugMarkers;
- (void *)contents;
- (void)didModifyRange:(struct _NSRange)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)description;
@property(readonly, nonatomic) unsigned int resourceUsage; // @dynamic resourceUsage;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)makeAliasable;
- (_Bool)doesAliasResource:(id)arg1;
- (id)heap;
- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCount:(unsigned long long)arg3 device:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)length;

@end

