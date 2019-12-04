//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying>
{
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_localizedCountryName;
    NSString *_dialingPrefix;
}

+ (id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2;
+ (id)countryInfoWithDictionary:(id)arg1;
+ (id)allCountries;
+ (void)_loadCountriesIfNeeded;
@property(retain, nonatomic) NSString *dialingPrefix; // @synthesize dialingPrefix=_dialingPrefix;
@property(retain, nonatomic) NSString *localizedCountryName; // @synthesize localizedCountryName=_localizedCountryName;
@property(retain, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

