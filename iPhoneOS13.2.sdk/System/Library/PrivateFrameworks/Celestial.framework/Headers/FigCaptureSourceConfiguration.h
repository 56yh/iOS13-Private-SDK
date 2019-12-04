//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>


@class FigCaptureSourceDepthDataFormat, FigCaptureSourceVideoFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_sourceID;
    struct OpaqueFigCaptureSource *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    FigCaptureSourceVideoFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    float _maxFrameRateClientOverride;
    float _maxGainClientOverride;
    _Bool _hasSetVideoZoomFactorOnCaptureSource;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    _Bool _applyMaxExposureDurationFrameworkOverrideWhenAvailable;
    CDStruct_1b6d18a9 _maxExposureDurationClientOverride;
    NSDictionary *_faceDetectionConfiguration;
    _Bool _sensorHDREnabled;
    _Bool _highlightRecoveryEnabled;
    int _colorSpace;
    _Bool _depthDataDeliveryEnabled;
    FigCaptureSourceDepthDataFormat *_depthDataFormat;
    float _depthDataMaxFrameRate;
    _Bool _lowLightVideoCaptureEnabled;
    _Bool _spatialOverCaptureEnabled;
    _Bool _nonDestructiveCropEnabled;
    _Bool _geometricDistortionCorrectionEnabled;
}

+ (id)stringForSourceDeviceType:(int)arg1;
+ (id)stringForSourcePosition:(int)arg1;
+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;
@property(nonatomic) _Bool geometricDistortionCorrectionEnabled; // @synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled;
@property(nonatomic) _Bool nonDestructiveCropEnabled; // @synthesize nonDestructiveCropEnabled=_nonDestructiveCropEnabled;
@property(nonatomic) _Bool spatialOverCaptureEnabled; // @synthesize spatialOverCaptureEnabled=_spatialOverCaptureEnabled;
@property(nonatomic) _Bool lowLightVideoCaptureEnabled; // @synthesize lowLightVideoCaptureEnabled=_lowLightVideoCaptureEnabled;
@property(nonatomic) float depthDataMaxFrameRate; // @synthesize depthDataMaxFrameRate=_depthDataMaxFrameRate;
@property(retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat; // @synthesize depthDataFormat=_depthDataFormat;
@property(nonatomic) _Bool depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
@property(nonatomic) int colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) _Bool highlightRecoveryEnabled; // @synthesize highlightRecoveryEnabled=_highlightRecoveryEnabled;
@property(nonatomic) _Bool sensorHDREnabled; // @synthesize sensorHDREnabled=_sensorHDREnabled;
@property(copy, nonatomic) NSDictionary *faceDetectionConfiguration; // @synthesize faceDetectionConfiguration=_faceDetectionConfiguration;
@property(nonatomic) CDStruct_1b6d18a9 maxExposureDurationClientOverride; // @synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride;
@property(nonatomic) _Bool applyMaxExposureDurationFrameworkOverrideWhenAvailable; // @synthesize applyMaxExposureDurationFrameworkOverrideWhenAvailable=_applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property(nonatomic) int imageControlMode; // @synthesize imageControlMode=_imageControlMode;
@property(nonatomic) float videoZoomRampAcceleration; // @synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration;
@property(nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(nonatomic) _Bool hasSetVideoZoomFactorOnCaptureSource; // @synthesize hasSetVideoZoomFactorOnCaptureSource=_hasSetVideoZoomFactorOnCaptureSource;
@property(nonatomic) float maxGainClientOverride; // @synthesize maxGainClientOverride=_maxGainClientOverride;
@property(nonatomic) float maxFrameRateClientOverride; // @synthesize maxFrameRateClientOverride=_maxFrameRateClientOverride;
@property(nonatomic) float requiredMinFrameRate; // @synthesize requiredMinFrameRate=_requiredMinFrameRate;
@property(nonatomic) float requiredMaxFrameRate; // @synthesize requiredMaxFrameRate=_requiredMaxFrameRate;
@property(retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat; // @synthesize requiredFormat=_requiredFormat;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (id)_sourceUID;
- (int)_sourceToken;
- (_Bool)_isMicSource;
- (_Bool)_isCameraSource;
- (id)_sourceAttributes;
@property(readonly, nonatomic) struct OpaqueFigCaptureSource *source;
@property(readonly, nonatomic) int sourceDeviceType;
@property(readonly, nonatomic) int sourceType;
@property(readonly, nonatomic) int sourcePosition;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithSource:(struct OpaqueFigCaptureSource *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

