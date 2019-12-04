//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>
#import <SplashBoard/XBApplicationSnapshotManifestDelegate-Protocol.h>

@class NSString, XBApplicationSnapshotManifestImpl;
@protocol XBApplicationSnapshotManifestDelegate;

@interface XBApplicationSnapshotManifest : NSObject <XBApplicationSnapshotManifestDelegate, BSDescriptionProviding>
{
    XBApplicationSnapshotManifestImpl *_manifestImpl;
    id <XBApplicationSnapshotManifestDelegate> _delegate;
}

+ (id)_manifestsByIdentity;
+ (unsigned long long)maximumInFlightDataSize;
+ (void)deleteAllSystemSnapshots;
+ (id)debugDescription;
+ (void)initialize;
@property(readonly, nonatomic) __weak XBApplicationSnapshotManifestImpl *manifestImpl; // @synthesize manifestImpl=_manifestImpl;
@property(nonatomic) __weak id <XBApplicationSnapshotManifestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)manifest:(id)arg1 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (_Bool)_invalidate;
- (void)beginSnapshotAccessTransaction:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)purgeSnapshotsWithProtectedContent;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(id /* block */)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)arg1;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteAllSnapshots;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(_Bool)arg3 didGenerateImage:(id /* block */)arg4 didSaveImage:(id /* block */)arg5;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(_Bool)arg3 completion:(id /* block */)arg4;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *containerPath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithApplicationInfo:(id)arg1;
- (id)initWithContainerIdentity:(id)arg1 store:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

