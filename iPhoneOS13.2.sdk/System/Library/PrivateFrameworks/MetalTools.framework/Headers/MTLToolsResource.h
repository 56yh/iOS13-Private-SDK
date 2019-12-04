//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLResourceSPI-Protocol.h>

@class MTLResourceAllocationInfo, MTLToolsHeap, NSString;
@protocol MTLDevice, MTLHeap;

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI>
{
    unsigned long long _options;
    MTLToolsHeap *_heap;
}

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly) unsigned long long allocatedSize;
- (void)validateCPUWriteable;
- (void)validateCPUReadable;
- (void)waitUntilComplete;
- (_Bool)isComplete;
@property(readonly) id <MTLHeap> heap;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property(readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property int responsibleProcess;
- (_Bool)isPurgeable;
@property(readonly) unsigned long long heapOffset;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)makeAliasable;
- (_Bool)isAliasable;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(copy) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

