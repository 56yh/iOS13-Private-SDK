//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/TSCacheFlushingManagerType-Protocol.h>

@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType>
{
    // Error parsing type: , name: cacheFlusher
    // Error parsing type: , name: storageLevelProvider
    // Error parsing type: , name: preFlushGroup
}

- (id)init;
- (void)enableFlushing;
- (void)addPreFlushTask:(id /* block */)arg1;

@end

