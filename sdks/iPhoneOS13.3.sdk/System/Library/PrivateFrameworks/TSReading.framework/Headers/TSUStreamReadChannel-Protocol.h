//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject;
@protocol OS_dispatch_queue;

@protocol TSUStreamReadChannel <NSObject>
- (void)close;
- (void)readWithQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end

