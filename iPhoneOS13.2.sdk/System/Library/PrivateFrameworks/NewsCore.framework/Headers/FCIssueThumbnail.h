//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject
{
    FCAssetHandle *_thumbnailAssetHandle;
    struct CGSize _thumbnailSize;
}

+ (id)issueThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(struct CGSize)arg2;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) FCAssetHandle *thumbnailAssetHandle; // @synthesize thumbnailAssetHandle=_thumbnailAssetHandle;

@end

