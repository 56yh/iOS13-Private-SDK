//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABVCardLexer, ABVCardValueSetter, ABVCardWatchdogTimer, NSData, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface ABVCardParser : NSObject
{
    ABVCardValueSetter *_valueSetter;
    void _source;
    ABVCardLexer *_lexer;
    NSData *_data;
    NSUInteger _defaultEncoding;
    BOOL _hasImportErrors;
    BOOL _30vCard;
    NSString *_first;
    NSString *_last;
    NSString *_org;
    NSString *_formattedName;
    NSMutableArray *_emails;
    NSMutableArray *_dates;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    NSMutableArray *_jabbers;
    NSMutableArray *_msns;
    NSMutableArray *_yahoos;
    NSMutableArray *_icqs;
    NSMutableArray *_untypedIMs;
    NSMutableArray *_instantMessengers;
    NSMutableArray *_socialProfiles;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableDictionary *_activityAlerts;
    NSMutableString *_notes;
    NSMutableString *_otherNotes;
    NSMutableDictionary *_extensions;
    NSString *_uid;
    NSData *_imageData;
    NSString *_imageURI;
    int _cropRectX;
    int _cropRectY;
    int _cropRectWidth;
    int _cropRectHeight;
    NSData *_cropRectChecksum;
    NSMutableArray *_itemParameters;
    NSString *_grouping;
    NSUInteger _encoding;
    BOOL _quotedPrintable;
    BOOL _base64;
    ABVCardWatchdogTimer *_timer;
}

+ (struct __CFArray )supportedProperties;
- (id)_valueSetter;
- (id)sortedPeopleAndProperties:(const struct __CFArray )arg1;
- (struct __CFArray )peopleAndProperties:(const struct __CFArray )arg1;
- (void )copyNextPersonWithLength:(int )arg1 foundProperties:(const struct __CFArray )arg2;
- (BOOL)importToValueSetter:(id)arg1;
- (BOOL)importToPerson:(void )arg1 foundProperties:(const struct __CFArray )arg2;
- (BOOL)parseItem;
- (BOOL)_usesRemainingLineForExternalPropKey:(id)arg1;
- (BOOL)_usesArrayForExternalPropKey:(id)arg1;
- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (BOOL)parseABReleatedNames;
- (void)parseABOrder;
- (void)parseABShowAs;
- (void)parseABPhoto;
- (BOOL)parsePhoto:(id)arg1;
- (BOOL)parseABDATE;
- (BOOL)parseAlternateBirthday;
- (BOOL)parseBDAY;
- (id)dateFromISO8601String:(id)arg1;
- (BOOL)parseActivityAlerts;
- (BOOL)addIMValueTo:(id)arg1;
- (BOOL)parseIMAGEHASH;
- (BOOL)parseIMAGETYPE;
- (BOOL)parseGuardianWhitelisted;
- (BOOL)parseIMPP;
- (id)parseInstantMessengerProfile:(id)arg1;
- (BOOL)parseSocialProfiles;
- (id)_socialProfileService;
- (id)_socialProfileBundleIdentifiers;
- (id)_socialProfileTeamIdentifier;
- (id)_socialProfileDisplayName;
- (id)_socialProfileUsername;
- (id)_socialProfileUserId;
- (BOOL)parseABExtensionType:(id)arg1;
- (BOOL)parseADD;
- (BOOL)parseADR;
- (BOOL)parseTEL;
- (BOOL)parseEMAIL;
- (BOOL)parseUID;
- (BOOL)parseABUID;
- (id)phoneLabel;
- (id)defaultURLLabel;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)genericLabel;
- (id)_genericLabel;
- (id)parseURL;
- (id)parseValueArray;
- (id)parseRemainingLine;
- (id)parseSingleValue;
- (BOOL)parseORG;
- (BOOL)parseABMaiden;
- (BOOL)parseNICKNAME;
- (BOOL)parseN;
- (BOOL)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2 valueComparator:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (BOOL)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (BOOL)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2;
- (void)setLocalRecordHasAdditionalProperties:(BOOL)arg1;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (BOOL)parseVERSION;
- (void)addActivityAlertMultiValues;
- (BOOL)_setPersonSounds:(void )arg1 identifier:(int)arg2 fromActivity:(id)arg3 alert:(id)arg4 otherValue:(id)arg5;
- (void)addInstantMessageMultiValues;
- (int)_addIMPPProfiles:(id)arg1 multiValue:(void )arg2 uniquenessCheckingMultiValue:(void )arg3;
- (int)_addIMHandles:(id)arg1 toService:(struct __CFString )arg2 multiValue:(void )arg3 uniquenessCheckingMultiValue:(void )arg4;
- (void)addSocialProfileMultiValues;
- (void)addAddressMultiValues;
- (void)_setValueFromExtension:(id)arg1 forKey:(id)arg2 onAddress:(id)arg3 toKey:(id)arg4;
- (void)addMultiValues:(id)arg1 toProperty:(unsigned int)arg2 valueComparator:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic) void source;
- (void)cleanUpCardState;
- (BOOL)hasImportErrors;
- (void)dealloc;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)init;

@end
