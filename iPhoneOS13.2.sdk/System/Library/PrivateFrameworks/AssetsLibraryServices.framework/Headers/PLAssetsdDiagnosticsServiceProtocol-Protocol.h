//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSXPCListenerEndpoint, PLXPCObject;

@protocol PLAssetsdDiagnosticsServiceProtocol 
- (void)initializeSharedMemoryForDeferredLogs:(PLXPCObject *)arg1;
- (void)setPhotosXPCEndpoint:(NSXPCListenerEndpoint *)arg1 withReply:(void (^)(_Bool, NSError *))arg2;
- (void)getPhotosXPCEndpointWithReply:(void (^)(_Bool, NSXPCListenerEndpoint *, NSError *))arg1;
- (void)incompleteRestoreProcessesWithReply:(void (^)(NSArray *))arg1;
- (void)dumpPhotoAnalysisStatusWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)dumpStatusIncludingDaemon:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
@end

