//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData, NSLocale, NSNumber, NSString;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying>
{
    struct os_unfair_lock_s _unfairLock;
    _Bool _shouldUpdateUniqueDeviceIdentifier;
    _Bool _shouldUpdateServerFriendlyDescription;
    _Bool _shouldUpdateColor;
    _Bool _shouldUpdateEnclosureColor;
    _Bool _shouldUpdateCoverGlassColor;
    _Bool _shouldUpdateHousingColor;
    _Bool _shouldUpdateBackingColor;
    _Bool _shouldUpdateLocale;
    _Bool _shouldUpdateROMAddress;
    _Bool _shouldUpdateMLBSerialNumber;
    _Bool _shouldUpdateModelNumber;
    NSString *_uniqueDeviceIdentifier;
    NSString *_serverFriendlyDescription;
    NSString *_color;
    NSString *_enclosureColor;
    NSNumber *_coverGlassColor;
    NSNumber *_housingColor;
    NSNumber *_backingColor;
    NSLocale *_locale;
    NSString *_ROMAddress;
    NSString *_MLBSerialNumber;
    NSString *_modelNumber;
    unsigned long long _linkType;
}

+ (long long)currentDeviceAuthenticationMode;
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)_buildNumber;
+ (id)_osVersion;
+ (id)_osName;
+ (id)_hardwareModel;
+ (id)deviceWithSerializedData:(id)arg1;
+ (id)systemContainerCacheURL;
+ (id)systemContainerURL;
+ (_Bool)supportsSecureCoding;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
@property(setter=setLinkType:) unsigned long long linkType; // @synthesize linkType=_linkType;
- (id)_volumeGroupUUID;
@property(readonly) NSString *phoneNumber;
@property(readonly) _Bool isMultiUserMode;
@property(readonly) _Bool isInternalBuild;
@property(readonly) NSString *integratedCircuitCardIdentifier;
@property(readonly) NSString *mobileEquipmentIdentifier;
@property(readonly) _Bool isFaceIDCapable;
@property(readonly) _Bool isBiometricAuthCapable;
@property(readonly) _Bool isProtectedWithPasscode;
@property(readonly) _Bool isInCircle;
@property(readonly) _Bool isUnlocked;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *internationalMobileEquipmentIdentity;
@property(readonly) NSString *userFullName;
@property(readonly) NSString *localUserUUID;
@property(readonly) NSString *userChosenName;
@property(copy, nonatomic) NSString *serverFriendlyDescription; // @synthesize serverFriendlyDescription=_serverFriendlyDescription;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *MLBSerialNumber; // @synthesize MLBSerialNumber=_MLBSerialNumber;
@property(copy, nonatomic) NSString *ROMAddress; // @synthesize ROMAddress=_ROMAddress;
@property(copy, nonatomic) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property(copy, nonatomic) NSNumber *backingColor; // @synthesize backingColor=_backingColor;
@property(copy, nonatomic) NSNumber *housingColor; // @synthesize housingColor=_housingColor;
@property(copy, nonatomic) NSNumber *coverGlassColor; // @synthesize coverGlassColor=_coverGlassColor;
@property(copy, nonatomic) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
- (void)_setShouldUpdateToValue:(_Bool)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSData *serializedData;
- (id)init;

@end

