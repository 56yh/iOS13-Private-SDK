//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PXAssetsDataSource;
@protocol NSCopying;

@interface _PXCuratedLibraryLayoutAssetsSnapshot : NSObject
{
    PXAssetsDataSource *_dataSource;
    NSDictionary *_spriteSnapshotIndexByAssetIdentifier;
    long long _spriteSnapshotsCount;
    long long _spriteSnapshotsCapacity;
    CDStruct_fd7a954a *_spriteSnapshots;
    long long _zoomLevel;
    struct CGPoint _offset;
    struct CGRect _visibleRect;
    struct CGRect _fullyVisibleRect;
}

@property(readonly, nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) id <NSCopying> dominantAssetIdentifier;
- (void)enumerateAssetIdentifiersUsingBlock:(id /* block */)arg1;
- (CDStruct_fd7a954a)spriteSnapshotForAssetWithIdentifier:(id)arg1;
- (id)assetIdentifierForAssetReference:(id)arg1;
- (void)enumerateAssetInfoForGeometries:(const CDStruct_ac168a83 *)arg1 styles:(const CDStruct_506f5052 *)arg2 infos:(const CDStruct_9d1ebe49 *)arg3 count:(unsigned int)arg4 options:(unsigned long long)arg5 usingBlock:(id /* block */)arg6;
@property(readonly, nonatomic) struct CGRect fullyVisibleRect; // @synthesize fullyVisibleRect=_fullyVisibleRect;
@property(readonly, nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (long long)_addSpriteSnapshot:(CDStruct_fd7a954a)arg1;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

@end
