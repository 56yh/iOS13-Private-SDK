//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFileUnlinker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

+ (id)fileUnlinker;
- (_Bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (void)forcePurgeWithCompletionBlock:(id /* block */)arg1;
- (void)_purge;
- (_Bool)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;
- (void)resume;
- (id)init;

@end

