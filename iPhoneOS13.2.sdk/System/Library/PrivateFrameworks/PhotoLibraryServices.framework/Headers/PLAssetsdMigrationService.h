//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdMigrationServiceProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
- (void)moveiPhotoLibraryMediaWithReply:(id /* block */)arg1;
- (void)dataMigrationWillFinishWithReply:(id /* block */)arg1;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(id /* block */)arg2;
- (id)initWithLibraryServicesManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

