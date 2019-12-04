//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying>
{
    long long _settingsID;
    unsigned long long _userInitiatedCaptureTime;
    int _torchMode;
    int _flashMode;
    _Bool _autoRedEyeReductionEnabled;
    int _digitalFlashMode;
    int _qualityPrioritization;
    int _HDRMode;
    _Bool _autoOriginalPhotoDeliveryEnabled;
    _Bool _autoSpatialOverCaptureEnabled;
    _Bool _autoDeferredProcessingEnabled;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isAutoDeferredProcessingEnabled) _Bool autoDeferredProcessingEnabled; // @synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled;
@property(nonatomic, getter=isAutoSpatialOverCaptureEnabled) _Bool autoSpatialOverCaptureEnabled; // @synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled;
@property(nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) _Bool autoOriginalPhotoDeliveryEnabled; // @synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled;
@property(nonatomic) int HDRMode; // @synthesize HDRMode=_HDRMode;
@property(nonatomic) int qualityPrioritization; // @synthesize qualityPrioritization=_qualityPrioritization;
@property(nonatomic) int digitalFlashMode; // @synthesize digitalFlashMode=_digitalFlashMode;
@property(nonatomic) _Bool autoRedEyeReductionEnabled; // @synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled;
@property(nonatomic) int flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) int torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) unsigned long long userInitiatedCaptureTime; // @synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime;
@property(readonly, nonatomic) long long settingsID; // @synthesize settingsID=_settingsID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1 userInitiatedCaptureTime:(unsigned long long)arg2;

@end

