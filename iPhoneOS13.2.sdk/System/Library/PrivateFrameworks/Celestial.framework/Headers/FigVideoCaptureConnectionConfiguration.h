//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    int _outputFormat;
    int _outputWidth;
    int _outputHeight;
    int _videoStabilizationMethod;
    _Bool _mirroringEnabled;
    int _orientation;
    int _retainedBufferCount;
    _Bool _cameraIntrinsicMatrixDeliveryEnabled;
    _Bool _livePhotoMetadataWritingEnabled;
}

@property(nonatomic) _Bool livePhotoMetadataWritingEnabled; // @synthesize livePhotoMetadataWritingEnabled=_livePhotoMetadataWritingEnabled;
@property(nonatomic) _Bool cameraIntrinsicMatrixDeliveryEnabled; // @synthesize cameraIntrinsicMatrixDeliveryEnabled=_cameraIntrinsicMatrixDeliveryEnabled;
@property(nonatomic) int retainedBufferCount; // @synthesize retainedBufferCount=_retainedBufferCount;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool mirroringEnabled; // @synthesize mirroringEnabled=_mirroringEnabled;
@property(nonatomic) int videoStabilizationMethod; // @synthesize videoStabilizationMethod=_videoStabilizationMethod;
@property(nonatomic) int outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) int outputWidth; // @synthesize outputWidth=_outputWidth;
@property(nonatomic) int outputFormat; // @synthesize outputFormat=_outputFormat;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

