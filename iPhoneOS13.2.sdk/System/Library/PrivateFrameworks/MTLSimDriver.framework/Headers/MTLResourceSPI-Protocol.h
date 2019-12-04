//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLSimDriver/MTLResource-Protocol.h>

@class MTLResourceAllocationInfo;
@protocol MTLResource;

@protocol MTLResourceSPI <MTLResource>
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property(readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property int responsibleProcess;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id <MTLResource>)arg1;
- (void)waitUntilComplete;
- (_Bool)isComplete;
- (_Bool)isPurgeable;
@end

