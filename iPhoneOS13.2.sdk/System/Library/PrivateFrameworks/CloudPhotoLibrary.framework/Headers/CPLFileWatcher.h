//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CPLFileWatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CPLFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
    NSURL *_fileURL;
    id <CPLFileWatcherDelegate> _delegate;
}

@property(nonatomic) __weak id <CPLFileWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)stopWatching;
- (void)startWatching;
- (void)_stopWatchingParent;
- (void)_startWatchingParent;
- (void)_updateWatchingNode;
- (void)_stopWatchingNode;
- (void)_startWatchingNode;
- (void)_forceRefreshWatchingNode;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end

