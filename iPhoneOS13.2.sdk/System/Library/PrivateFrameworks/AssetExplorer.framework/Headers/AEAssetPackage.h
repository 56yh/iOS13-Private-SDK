//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




#import <AssetExplorer/PUCAMReviewAsset-Protocol.h>

@class AVAsset, AVAudioMix, CLLocation, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSURL, PFAssetAdjustments, PHLivePhoto, UIImage;
@protocol OS_dispatch_queue;

@interface AEAssetPackage : NSObject <PUCAMReviewAsset, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *__packageContentQueue;
    NSMutableDictionary *__contentQueue_finalURLs;
    NSMutableDictionary *__contentQueueSidecar;
    NSMutableSet *__contentQueue_suppressedTypes;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableSet *_contentQueue_suppressedTypes; // @synthesize _contentQueue_suppressedTypes=__contentQueue_suppressedTypes;
@property(readonly, nonatomic) NSMutableDictionary *_contentQueueSidecar; // @synthesize _contentQueueSidecar=__contentQueueSidecar;
@property(readonly, nonatomic) NSMutableDictionary *_contentQueue_finalURLs; // @synthesize _contentQueue_finalURLs=__contentQueue_finalURLs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_packageContentQueue; // @synthesize _packageContentQueue=__packageContentQueue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)sidecarImageForKey:(id)arg1;
- (CDStruct_198678f7)sidecarTimeForKey:(id)arg1;
- (id)sidecarDateForKey:(id)arg1;
- (id)sidecarNumberForKey:(id)arg1;
- (id)sidecarPropertyListForKey:(id)arg1;
- (id)_sidecarObjectForKey:(id)arg1;
- (id)currentURLForType:(id)arg1;
- (id)suppressedTypesSnapshot;
- (id)sidecarSnapshot;
- (id)durableURLsSnapshotApplyingSuppression:(_Bool)arg1;
- (id)durableURLsSnapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 suppressedTypes:(id)arg3 sidecar:(id)arg4;
- (id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 sidecar:(id)arg3;
- (_Bool)isURLSuppressedForType:(id)arg1;
- (id)reviewAssetFromPackageMetadata;
@property(readonly, nonatomic) AVAudioMix *providedAudioMix;
@property(readonly, nonatomic) AVAsset *providedAVAsset;
@property(readonly, nonatomic) PHLivePhoto *providedLivePhoto;
@property(readonly, nonatomic) NSURL *providedFullsizeRenderVideoURL;
@property(readonly, nonatomic) NSURL *providedVideoURL;
@property(readonly, nonatomic) NSURL *providedFullsizeRenderImageURL;
@property(readonly, nonatomic) NSURL *providedFullsizeImageURL;
@property(readonly, nonatomic) UIImage *providedPreviewImage;
@property(readonly, nonatomic) PFAssetAdjustments *assetAdjustments;
@property(readonly, nonatomic) NSDictionary *providedImageMetadata;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, nonatomic) CDStruct_198678f7 livePhotoDuration;
@property(readonly, nonatomic) CDStruct_198678f7 livePhotoSynchronizedDisplayTime;
@property(readonly, nonatomic, getter=isHDR) _Bool HDR;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, nonatomic, getter=isLivePhotoPlaceholder) _Bool livePhotoPlaceholder;
@property(readonly, nonatomic, getter=isLivePhoto) _Bool livePhoto;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) _Bool isTemporaryPlaceholder;
@property(readonly, nonatomic) unsigned long long deferredLogInfo;
- (unsigned long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly, nonatomic) CDStruct_198678f7 photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_198678f7 photoIrisStillDisplayTime;
@property(readonly, nonatomic) unsigned long long originalFilesize;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
- (_Bool)containsSuppressedLivePhoto;
- (_Bool)containsLivePhotoContent;
- (long long)mediaOrigin;
- (id)browserItemPayload;
- (long long)_sendSourceFromMediaOrigin:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CDStruct_198678f7 videoKeyFrameSourceTime;

@end

