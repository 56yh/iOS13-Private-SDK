//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray;
@protocol HMFLocking;

@interface HMDMessageFilterChain : HMFObject
{
    id <HMFLocking> _lock;
    NSMutableArray *_filters;
}

- (void)resetConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)shouldCloudSyncData;
- (_Bool)acceptMessage:(id)arg1 error:(id *)arg2;
- (void)removeMessageFilter:(id)arg1;
- (void)addMessageFilter:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *filters;
- (id)init;

@end

