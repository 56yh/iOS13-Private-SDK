//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface NBBackup : NSObject <NSSecureCoding>
{
    _Bool _locationOptInEnabled;
    _Bool _diagnosticsOptInEnabled;
    _Bool _hasResolvedActiveWatchFaceFilePath;
    NSURL *_activeWatchFaceFileURL;
    NSUUID *_uuid;
    unsigned long long _backupType;
    NSString *_name;
    NSString *_productType;
    NSString *_productName;
    NSString *_systemVersion;
    NSString *_systemBuildVersion;
    NSString *_marketingVersion;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    NSNumber *_bottomEnclosureMaterial;
    NSNumber *_topEnclosureMaterial;
    NSNumber *_fcmMaterial;
    NSNumber *_bcmWindowMaterial;
    NSNumber *_coverGlassColor;
    NSNumber *_housingColor;
    NSNumber *_backingColor;
    NSString *_watchFace;
    NSString *_watchFaceColor;
    NSDate *_lastModificationDate;
    NSNumber *_sizeInBytes;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasResolvedActiveWatchFaceFilePath; // @synthesize hasResolvedActiveWatchFaceFilePath=_hasResolvedActiveWatchFaceFilePath;
@property(retain, nonatomic) NSNumber *sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(retain, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(nonatomic, getter=isDiagnosticsOptInEnabled) _Bool diagnosticsOptInEnabled; // @synthesize diagnosticsOptInEnabled=_diagnosticsOptInEnabled;
@property(nonatomic, getter=isLocationOptInEnabled) _Bool locationOptInEnabled; // @synthesize locationOptInEnabled=_locationOptInEnabled;
@property(retain, nonatomic) NSString *watchFaceColor; // @synthesize watchFaceColor=_watchFaceColor;
@property(retain, nonatomic) NSString *watchFace; // @synthesize watchFace=_watchFace;
@property(retain, nonatomic) NSNumber *backingColor; // @synthesize backingColor=_backingColor;
@property(retain, nonatomic) NSNumber *housingColor; // @synthesize housingColor=_housingColor;
@property(retain, nonatomic) NSNumber *coverGlassColor; // @synthesize coverGlassColor=_coverGlassColor;
@property(retain, nonatomic) NSNumber *bcmWindowMaterial; // @synthesize bcmWindowMaterial=_bcmWindowMaterial;
@property(retain, nonatomic) NSNumber *fcmMaterial; // @synthesize fcmMaterial=_fcmMaterial;
@property(retain, nonatomic) NSNumber *topEnclosureMaterial; // @synthesize topEnclosureMaterial=_topEnclosureMaterial;
@property(retain, nonatomic) NSNumber *bottomEnclosureMaterial; // @synthesize bottomEnclosureMaterial=_bottomEnclosureMaterial;
@property(retain, nonatomic) NSString *deviceEnclosureColor; // @synthesize deviceEnclosureColor=_deviceEnclosureColor;
@property(retain, nonatomic) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
@property(retain, nonatomic) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(retain, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long backupType; // @synthesize backupType=_backupType;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSURL *activeWatchFaceFileURL; // @synthesize activeWatchFaceFileURL=_activeWatchFaceFileURL;
- (id)description;

@end

