//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CARSessionConfiguration : NSObject
{
    _Bool _vehicleSupportsDestinationSharing;
    _Bool _vehicleSupportsGasoline;
    _Bool _vehicleSupportsDiesel;
    _Bool _vehicleSupportsElectric;
    _Bool _vehicleSupportsCNG;
    _Bool _rightHandDrive;
    _Bool _nightModeSupported;
    _Bool _supportsElectronicTollCollection;
    _Bool _supportsACBack;
    _Bool _supportsSiriZLL;
    _Bool _supportsSiriZLLButton;
    _Bool _supportsSiriMixable;
    _Bool _manufacturerIconVisible;
    _Bool _hasAccessory;
    NSString *_name;
    NSString *_modelName;
    NSString *_manufacturerName;
    NSString *_vehicleName;
    NSString *_vehicleModelName;
    NSString *_vehicleSerialNumber;
    NSString *_vehicleManufacturer;
    NSString *_vehicleFirmwareVersion;
    NSString *_vehicleHardwareVersion;
    NSString *_PPID;
    unsigned long long _transportType;
    NSArray *_screens;
    NSArray *_screenIDs;
    unsigned long long _limitableUserInterfaces;
    NSString *_endpointIdentifier;
    unsigned long long _voiceTriggerMode;
    long long _nowPlayingAlbumArtMode;
    long long _userInterfaceStyle;
    NSString *_manufacturerIconLabel;
    struct NSEdgeInsets _viewAreaInsets;
    struct NSEdgeInsets _dashboardRoundedCorners;
}

+ (unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)arg1;
+ (id)descriptionForEdgeInsets:(struct NSEdgeInsets)arg1;
+ (id)descriptionForUserInterfaceStyle:(long long)arg1;
+ (id)descriptionForCapability:(long long)arg1;
+ (id)_descriptionForTransportType:(unsigned long long)arg1;
@property(nonatomic) _Bool hasAccessory; // @synthesize hasAccessory=_hasAccessory;
@property(readonly, nonatomic) _Bool manufacturerIconVisible; // @synthesize manufacturerIconVisible=_manufacturerIconVisible;
@property(readonly, copy, nonatomic) NSString *manufacturerIconLabel; // @synthesize manufacturerIconLabel=_manufacturerIconLabel;
@property(readonly, nonatomic) _Bool supportsSiriMixable; // @synthesize supportsSiriMixable=_supportsSiriMixable;
@property(readonly, nonatomic) _Bool supportsSiriZLLButton; // @synthesize supportsSiriZLLButton=_supportsSiriZLLButton;
@property(readonly, nonatomic) _Bool supportsSiriZLL; // @synthesize supportsSiriZLL=_supportsSiriZLL;
@property(readonly, nonatomic) _Bool supportsACBack; // @synthesize supportsACBack=_supportsACBack;
@property(readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) struct NSEdgeInsets dashboardRoundedCorners; // @synthesize dashboardRoundedCorners=_dashboardRoundedCorners;
@property(readonly, nonatomic) struct NSEdgeInsets viewAreaInsets; // @synthesize viewAreaInsets=_viewAreaInsets;
@property(readonly, nonatomic) long long nowPlayingAlbumArtMode; // @synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode;
@property(readonly, nonatomic) unsigned long long voiceTriggerMode; // @synthesize voiceTriggerMode=_voiceTriggerMode;
@property(readonly, copy, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
@property(readonly, nonatomic) _Bool supportsElectronicTollCollection; // @synthesize supportsElectronicTollCollection=_supportsElectronicTollCollection;
@property(readonly, nonatomic) _Bool nightModeSupported; // @synthesize nightModeSupported=_nightModeSupported;
@property(readonly, nonatomic) unsigned long long limitableUserInterfaces; // @synthesize limitableUserInterfaces=_limitableUserInterfaces;
@property(readonly, nonatomic) _Bool rightHandDrive; // @synthesize rightHandDrive=_rightHandDrive;
@property(readonly, copy, nonatomic) NSArray *screenIDs; // @synthesize screenIDs=_screenIDs;
@property(readonly, copy, nonatomic) NSArray *screens; // @synthesize screens=_screens;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, copy, nonatomic) NSString *PPID; // @synthesize PPID=_PPID;
@property(readonly, nonatomic) _Bool vehicleSupportsCNG; // @synthesize vehicleSupportsCNG=_vehicleSupportsCNG;
@property(readonly, nonatomic) _Bool vehicleSupportsElectric; // @synthesize vehicleSupportsElectric=_vehicleSupportsElectric;
@property(readonly, nonatomic) _Bool vehicleSupportsDiesel; // @synthesize vehicleSupportsDiesel=_vehicleSupportsDiesel;
@property(readonly, nonatomic) _Bool vehicleSupportsGasoline; // @synthesize vehicleSupportsGasoline=_vehicleSupportsGasoline;
@property(readonly, nonatomic) _Bool vehicleSupportsDestinationSharing; // @synthesize vehicleSupportsDestinationSharing=_vehicleSupportsDestinationSharing;
@property(readonly, copy, nonatomic) NSString *vehicleHardwareVersion; // @synthesize vehicleHardwareVersion=_vehicleHardwareVersion;
@property(readonly, copy, nonatomic) NSString *vehicleFirmwareVersion; // @synthesize vehicleFirmwareVersion=_vehicleFirmwareVersion;
@property(readonly, copy, nonatomic) NSString *vehicleManufacturer; // @synthesize vehicleManufacturer=_vehicleManufacturer;
@property(readonly, copy, nonatomic) NSString *vehicleSerialNumber; // @synthesize vehicleSerialNumber=_vehicleSerialNumber;
@property(readonly, copy, nonatomic) NSString *vehicleModelName; // @synthesize vehicleModelName=_vehicleModelName;
@property(readonly, copy, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;
@property(readonly, copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(readonly, copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)screenInfoForScreenID:(id)arg1;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)updateCarCapabilities;
- (id)initWithPropertySupplier:(id /* block */)arg1;
- (id)descriptionForVoiceTriggerMode;
- (id)descriptionForLimitableUserInterfaces;
- (id)descriptionForTransportType;

@end

