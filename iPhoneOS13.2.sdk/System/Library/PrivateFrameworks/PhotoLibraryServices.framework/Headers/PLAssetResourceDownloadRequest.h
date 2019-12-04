//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSError, NSManagedObjectID, NSObject, NSString, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadRequest : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_library;
    id /* block */ _progressHandler;
    NSString *_assetUUID;
    int _requestID;
    NSManagedObjectID *_objectID;
    unsigned long long _cloudResourceType;
    NSString *_cplTaskIdentifier;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *cplTaskIdentifier; // @synthesize cplTaskIdentifier=_cplTaskIdentifier;
@property(readonly, nonatomic) unsigned long long cloudResourceType; // @synthesize cloudResourceType=_cloudResourceType;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void)cancel;
- (void)main;
- (id)initWithRequestID:(int)arg1 library:(id)arg2 queue:(id)arg3 cloudResourceType:(unsigned long long)arg4 managedObjectID:(id)arg5 progressHandler:(id /* block */)arg6;
- (void)_onQueueAsync:(id /* block */)arg1;

@end

