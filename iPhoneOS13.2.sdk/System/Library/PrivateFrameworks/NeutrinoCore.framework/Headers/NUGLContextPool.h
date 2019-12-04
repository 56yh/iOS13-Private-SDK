//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NUGLContextPool : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

+ (id)sharedContextPool;
- (void)_returnContext:(id)arg1;
- (id)_newContext;
- (void)returnContext:(id)arg1;
- (id)newContextForDevice:(id)arg1;
- (id)newContext;
- (id)init;

@end

