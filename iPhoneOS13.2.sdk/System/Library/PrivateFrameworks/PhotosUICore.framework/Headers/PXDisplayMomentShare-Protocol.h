//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetCollection-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol PXDisplayMomentShare <PXDisplayAssetCollection, PXMediaTypeAggregating>
@property(readonly, nonatomic) long long px_momentShareType;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSURL *shareURL;
@property(readonly, nonatomic) unsigned long long uploadedVideosCount;
@property(readonly, nonatomic) unsigned long long uploadedPhotosCount;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) unsigned short status;
@end

