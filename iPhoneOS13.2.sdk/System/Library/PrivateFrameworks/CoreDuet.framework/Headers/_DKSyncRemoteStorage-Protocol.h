//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, _DKSyncPeer;

@protocol _DKSyncRemoteStorage
- (long long)transportType;
- (NSString *)name;
- (void)fetchSourceDeviceIDFromPeer:(_DKSyncPeer *)arg1 highPriority:(_Bool)arg2 completion:(void (^)(NSUUID *, NSString *, NSError *))arg3;
- (void)cancelOutstandingOperations;
- (_Bool)isAvailable;
- (void)start;
@end

