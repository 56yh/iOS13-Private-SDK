//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    _Bool _syncDefaultFoldersOnly;
    NSNumber *_enableMailNum;
    NSNumber *_enableContactsNum;
    NSNumber *_enableCalendarsNum;
    NSNumber *_enableRemindersNum;
    NSNumber *_enableNotesNum;
    NSNumber *_enableMailUserOverridableNum;
    NSNumber *_enableContactsUserOverridableNum;
    NSNumber *_enableCalendarsUserOverridableNum;
    NSNumber *_enableRemindersUserOverridableNum;
    NSNumber *_enableNotesUserOverridableNum;
    NSNumber *_useSSL;
    NSNumber *_useOAuth;
    NSString *_OAuthSignInURL;
    NSString *_OAuthTokenRequestURL;
    NSDictionary *_communicationServiceRules;
    NSNumber *_syncDefaultFoldersOnlyNum;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSNumber *syncDefaultFoldersOnlyNum; // @synthesize syncDefaultFoldersOnlyNum=_syncDefaultFoldersOnlyNum;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(retain, nonatomic) NSString *OAuthTokenRequestURL; // @synthesize OAuthTokenRequestURL=_OAuthTokenRequestURL;
@property(retain, nonatomic) NSString *OAuthSignInURL; // @synthesize OAuthSignInURL=_OAuthSignInURL;
@property(retain, nonatomic) NSNumber *useOAuth; // @synthesize useOAuth=_useOAuth;
@property(retain, nonatomic) NSNumber *useSSL; // @synthesize useSSL=_useSSL;
@property(nonatomic) _Bool syncDefaultFoldersOnly; // @synthesize syncDefaultFoldersOnly=_syncDefaultFoldersOnly;
@property(retain, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property(readonly, retain, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(copy, nonatomic) NSString *embeddedCertificatePassword; // @synthesize embeddedCertificatePassword=_embeddedCertificatePassword;
@property(readonly, retain, nonatomic) NSString *embeddedCertificateName; // @synthesize embeddedCertificateName=_embeddedCertificateName;
@property(readonly, retain, nonatomic) NSData *embeddedCertificate; // @synthesize embeddedCertificate=_embeddedCertificate;
@property(readonly, retain, nonatomic) NSNumber *mailNumberOfPastDaysToSync; // @synthesize mailNumberOfPastDaysToSync=_mailNumberOfPastDaysToSync;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (_Bool)containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)restrictions;
- (id)stubDictionary;
- (id)description;
@property(readonly, nonatomic) _Bool enableNotesUserOverridable;
@property(readonly, nonatomic) _Bool enableRemindersUserOverridable;
@property(readonly, nonatomic) _Bool enableCalendarsUserOverridable;
@property(readonly, nonatomic) _Bool enableContactsUserOverridable;
@property(readonly, nonatomic) _Bool enableMailUserOverridable;
@property(readonly, nonatomic) _Bool enableNotes;
@property(readonly, nonatomic) _Bool enableReminders;
@property(readonly, nonatomic) _Bool enableCalendars;
@property(readonly, nonatomic) _Bool enableContacts;
@property(readonly, nonatomic) _Bool enableMail;
@property(readonly, nonatomic) _Bool hasCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

