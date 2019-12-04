//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@class FigCaptureIrisPreparedSettings, NSArray;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration
{
    _Bool _movieCaptureEnabled;
    CDStruct_1b6d18a9 _movieDuration;
    CDStruct_1b6d18a9 _movieVideoFrameDuration;
    int _movieAutoTrimMethod;
    FigCaptureIrisPreparedSettings *_preparedSettings;
    _Bool _optimizesImagesForOfflineVideoStabilization;
    _Bool _quadraHighResCaptureEnabled;
    _Bool _depthDataDeliveryEnabled;
    _Bool _portraitEffectsMatteDeliveryEnabled;
    NSArray *_enabledSemanticSegmentationMatteURNs;
    _Bool _filterRenderingEnabled;
    _Bool _bravoConstituentPhotoDeliveryEnabled;
    _Bool _momentCaptureMovieRecordingEnabled;
    int _maxQualityPrioritization;
    _Bool _deferredProcessingEnabled;
    _Bool _digitalFlashCaptureEnabled;
    _Bool _irisFrameHarvestingEnabled;
}

@property(nonatomic) _Bool irisFrameHarvestingEnabled; // @synthesize irisFrameHarvestingEnabled=_irisFrameHarvestingEnabled;
@property(nonatomic) _Bool digitalFlashCaptureEnabled; // @synthesize digitalFlashCaptureEnabled=_digitalFlashCaptureEnabled;
@property(nonatomic) _Bool deferredProcessingEnabled; // @synthesize deferredProcessingEnabled=_deferredProcessingEnabled;
@property(nonatomic) int maxQualityPrioritization; // @synthesize maxQualityPrioritization=_maxQualityPrioritization;
@property(nonatomic) _Bool momentCaptureMovieRecordingEnabled; // @synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled;
@property(nonatomic) _Bool bravoConstituentPhotoDeliveryEnabled; // @synthesize bravoConstituentPhotoDeliveryEnabled=_bravoConstituentPhotoDeliveryEnabled;
@property(nonatomic) _Bool filterRenderingEnabled; // @synthesize filterRenderingEnabled=_filterRenderingEnabled;
@property(retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs; // @synthesize enabledSemanticSegmentationMatteURNs=_enabledSemanticSegmentationMatteURNs;
@property(nonatomic) _Bool portraitEffectsMatteDeliveryEnabled; // @synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled;
@property(nonatomic) _Bool depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
@property(nonatomic) _Bool quadraHighResCaptureEnabled; // @synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled;
@property(nonatomic) _Bool optimizesImagesForOfflineVideoStabilization; // @synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization;
@property(retain, nonatomic) FigCaptureIrisPreparedSettings *irisPreparedSettings; // @synthesize irisPreparedSettings=_preparedSettings;
@property(nonatomic) int irisMovieAutoTrimMethod; // @synthesize irisMovieAutoTrimMethod=_movieAutoTrimMethod;
@property(nonatomic) CDStruct_1b6d18a9 irisMovieVideoFrameDuration; // @synthesize irisMovieVideoFrameDuration=_movieVideoFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 irisMovieDuration; // @synthesize irisMovieDuration=_movieDuration;
@property(nonatomic) _Bool irisMovieCaptureEnabled; // @synthesize irisMovieCaptureEnabled=_movieCaptureEnabled;
- (int)sinkType;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

