//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetTrack, NSArray;

@interface PIVideoReframeMetadataExtractor : NSObject
{
    AVAsset *_asset;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_mdataTrack;
    struct CGAffineTransform ndcMetadataTransform;
    struct CGAffineTransform pxlMetadataTransform;
    NSArray *timedMetadataArray;
}

@property(readonly, nonatomic) NSArray *timedMetadataArray; // @synthesize timedMetadataArray;
- (id)extractMetadata;
-     // Error parsing type: {?=[3]}32@0:8r^{FigLivePhotoMetadata=I{FigLivePhotoMetadataV1Struct=fqffffffccSI[0{FigLivePhotoDetectedFaceV1Struct=qffffisS}]}}16^B24, name: trajectoryeHomographyFromMetadata:containsV3Metadata:
- (struct CGVector)motionBlurVectorFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (struct CGVector)centerMotionVectorFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (id)subjectsFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (void)overwriteTrackingMetadataWithPlist:(id)arg1;
- (id)initWithAVAsset:(id)arg1;
- (id)init;

@end

