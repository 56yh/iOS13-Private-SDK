//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSObject, TSPArchiver, TSPComponent, TSPComponentWriter, TSPObject;
@protocol OS_dispatch_queue;

@protocol TSPComponentWriterDelegate 
- (void)componentWriter:(TSPComponentWriter *)arg1 wantsComponentOfObject:(TSPObject *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(TSPComponent *))arg4;
- (void)componentWriterWantsDelayedObjects:(TSPComponentWriter *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)componentWriter:(TSPComponentWriter *)arg1 canSkipArchivingStronglyReferencedObject:(TSPObject *)arg2 fromComponentRootObject:(TSPObject *)arg3 completion:(void (^)(_Bool))arg4;
- (TSPObject *)componentWriter:(TSPComponentWriter *)arg1 wantsExplicitComponentRootObjectForObject:(TSPObject *)arg2 archiverOrNil:(TSPArchiver *)arg3 claimingComponent:(TSPComponent *)arg4 hasArchiverAccessLock:(_Bool)arg5;
- (unsigned long long)objectTargetTypeForComponentWriter:(TSPComponentWriter *)arg1;

@optional
- (_Bool)componentWriter:(TSPComponentWriter *)arg1 shouldDelayWritingObject:(TSPObject *)arg2;
- (_Bool)componentWriter:(TSPComponentWriter *)arg1 externalPackageDidWriteObject:(TSPObject *)arg2 claimingComponent:(id *)arg3;
- (_Bool)componentWriter:(TSPComponentWriter *)arg1 object:(TSPObject *)arg2 belongsToLinkedComponent:(TSPComponent *)arg3;
- (void)componentWriter:(TSPComponentWriter *)arg1 locatorForClaimingComponent:(TSPComponent *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSString *))arg4;
- (void)componentWriterNeedsDocumentRecovery:(TSPComponentWriter *)arg1;
@end

