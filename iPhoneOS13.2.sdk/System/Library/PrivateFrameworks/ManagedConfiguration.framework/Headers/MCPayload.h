//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCProfile, NSArray, NSDictionary, NSString;

@interface MCPayload : NSObject
{
    MCProfile *_profile;
    NSString *_type;
    NSString *_payloadDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_UUID;
    long long _version;
    NSString *_persistentResourceID;
    _Bool _mustInstallNonInteractively;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)typeStrings;
+ (id)wrapperPayloadDictionary;
+ (id)conflictingFieldValueErrorWithUnderlyingError:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)payloadFromDictionary:(id)arg1 isStub:(_Bool)arg2 profile:(id)arg3 outError:(id *)arg4;
+ (id)payloadsFromArray:(id)arg1 isStub:(_Bool)arg2 profile:(id)arg3 outError:(id *)arg4;
+ (id)availablePayloadsForUserEnrollment;
+ (id)unavailableUserPayloadsInEphemeralMultiUser;
+ (id)unavailableSystemPayloadsInEphemeralMultiUser;
+ (id)supervisedRequiredPayloads;
+ (id)cellularRequiredPayloads;
+ (id)mdmAdoptablePayloads;
+ (id)applicablePayloadsForHomePod;
+ (id)minimumWatchVersionRequirementsForPayloads;
+ (id)unavailablePayloadsInEphemeralMultiUser;
@property(nonatomic) _Bool mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;
@property(retain, nonatomic) NSString *persistentResourceID; // @synthesize persistentResourceID=_persistentResourceID;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property(readonly, retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak MCProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
@property(readonly, retain, nonatomic) NSArray *installationWarnings;
- (id)description;
@property(readonly, retain, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) NSDictionary *restrictions;
- (id)filterForUserEnrollmentOutError:(id *)arg1;
- (id)stubDictionary;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

