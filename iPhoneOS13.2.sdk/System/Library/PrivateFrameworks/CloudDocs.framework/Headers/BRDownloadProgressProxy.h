//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSMetadataQuery, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface BRDownloadProgressProxy : NSProgress
{
    NSMetadataQuery *_query;
    NSOperationQueue *_queue;
}

- (void)stop;
- (void)start;
- (void)_queryDidReceiveUpdate:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

