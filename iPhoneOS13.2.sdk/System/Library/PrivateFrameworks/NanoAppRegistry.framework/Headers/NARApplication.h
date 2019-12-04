//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NARApplicationState, NARGlance, NSArray, NSDictionary, NSString;

@interface NARApplication : NSObject <NSSecureCoding>
{
    _Bool _supportsForegroundApplication;
    unsigned long long _sequenceNumber;
    NSString *_launchServicesBundleType;
    NSString *_parentApplicationBundleIdentifier;
    NSArray *_appTags;
    NARApplicationState *_appState;
    NSDictionary *_infoPlist;
    NSDictionary *_localizedStrings;
    NSDictionary *_iTunesPlistStrings;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *iTunesPlistStrings; // @synthesize iTunesPlistStrings=_iTunesPlistStrings;
@property(retain, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(retain, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
@property(retain, nonatomic) NARApplicationState *appState; // @synthesize appState=_appState;
@property(nonatomic) _Bool supportsForegroundApplication; // @synthesize supportsForegroundApplication=_supportsForegroundApplication;
@property(retain, nonatomic) NSArray *appTags; // @synthesize appTags=_appTags;
@property(readonly, copy, nonatomic) NSString *parentApplicationBundleIdentifier; // @synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *launchServicesBundleType; // @synthesize launchServicesBundleType=_launchServicesBundleType;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NARGlance *glance;
- (id)description;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1;
@property(readonly, nonatomic) NSArray *localizations;
@property(readonly, nonatomic) _Bool isHidden;
@property(readonly, nonatomic) NSArray *supportedSchemes;
@property(readonly, nonatomic) NSString *itemName;
@property(readonly, nonatomic) NSString *vendorName;
@property(readonly, nonatomic) NSDictionary *localizedDisplayNames;
@property(readonly, nonatomic) NSString *localizedDisplayName;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSDictionary *localizedBundleNames;
@property(readonly, nonatomic) NSString *bundleName;
@property(readonly, nonatomic) NSString *applicationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

