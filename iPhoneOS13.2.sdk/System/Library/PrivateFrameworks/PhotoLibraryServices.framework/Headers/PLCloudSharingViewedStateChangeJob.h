//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDate, NSString;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob
{
    _Bool _albumHasUnseenContent;
    _Bool _assetCollectionHasUnreadComments;
    long long _jobType;
    NSString *_albumGUID;
    long long _albumUnviewedAssetCount;
    NSString *_assetCollectionGUID;
    NSDate *_assetCollectionLastViewedCommentDate;
}

+ (void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3;
+ (void)markAssetCollection:(id)arg1 asHavingUnreadComments:(_Bool)arg2 inAlbum:(id)arg3;
+ (void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2;
+ (void)markAlbum:(id)arg1 asHavingUnseenContent:(_Bool)arg2;
@property(retain, nonatomic) NSDate *assetCollectionLastViewedCommentDate; // @synthesize assetCollectionLastViewedCommentDate=_assetCollectionLastViewedCommentDate;
@property(nonatomic) _Bool assetCollectionHasUnreadComments; // @synthesize assetCollectionHasUnreadComments=_assetCollectionHasUnreadComments;
@property(retain, nonatomic) NSString *assetCollectionGUID; // @synthesize assetCollectionGUID=_assetCollectionGUID;
@property(nonatomic) long long albumUnviewedAssetCount; // @synthesize albumUnviewedAssetCount=_albumUnviewedAssetCount;
@property(nonatomic) _Bool albumHasUnseenContent; // @synthesize albumHasUnseenContent=_albumHasUnseenContent;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
- (void)_executeAssetLastViewedCommentDateChangedWithGroup;
- (void)_executeAssetCommentsReadStateChangedWithGroup;
- (void)_executeAlbumUnviewedAssetCountChangedWithGroup;
- (void)_executeAlbumViewedStateChanged;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

