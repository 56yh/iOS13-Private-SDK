//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCBook, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadInfo : NSObject
{
    _Bool _showIcon;
    _Bool _hasDetails;
    _Bool _isCertificate;
    _Bool _isManagedAppPayload;
    _Bool _isManagedBookPayload;
    NSArray *_typeStrings;
    NSString *_localizedSingularForm;
    NSString *_localizedPluralForm;
    NSArray *_payloadDescriptionKeyValueSections;
    NSString *_friendlyName;
    NSString *_title;
    NSString *_subtitle1Label;
    NSString *_subtitle1Description;
    NSString *_subtitle2Label;
    NSString *_subtitle2Description;
    NSString *_managedAppID;
    MCBook *_managedBook;
    NSArray *_certificateProperties;
    NSDate *_certificateExpirationDate;
    long long _type;
}

+ (id)removeDuplicatesFromRestrictionPayloadInfos:(id)arg1;
+ (id)payloadInfosFromPayload:(id)arg1;
+ (long long)payloadInfoTypeForPayloadClass:(Class)arg1;
+ (id)restrictionPayloadClasses;
+ (id)managedBookClasses;
+ (id)managedAppClasses;
+ (id)accountPayloadClasses;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *certificateExpirationDate; // @synthesize certificateExpirationDate=_certificateExpirationDate;
@property(retain, nonatomic) NSArray *certificateProperties; // @synthesize certificateProperties=_certificateProperties;
@property(retain, nonatomic) MCBook *managedBook; // @synthesize managedBook=_managedBook;
@property(retain, nonatomic) NSString *managedAppID; // @synthesize managedAppID=_managedAppID;
@property(nonatomic) _Bool isManagedBookPayload; // @synthesize isManagedBookPayload=_isManagedBookPayload;
@property(nonatomic) _Bool isManagedAppPayload; // @synthesize isManagedAppPayload=_isManagedAppPayload;
@property(nonatomic) _Bool isCertificate; // @synthesize isCertificate=_isCertificate;
@property(nonatomic) _Bool hasDetails; // @synthesize hasDetails=_hasDetails;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(retain, nonatomic) NSString *subtitle2Description; // @synthesize subtitle2Description=_subtitle2Description;
@property(retain, nonatomic) NSString *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) NSString *subtitle1Description; // @synthesize subtitle1Description=_subtitle1Description;
@property(retain, nonatomic) NSString *subtitle1Label; // @synthesize subtitle1Label=_subtitle1Label;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(retain, nonatomic) NSArray *payloadDescriptionKeyValueSections; // @synthesize payloadDescriptionKeyValueSections=_payloadDescriptionKeyValueSections;
@property(retain, nonatomic) NSString *localizedPluralForm; // @synthesize localizedPluralForm=_localizedPluralForm;
@property(retain, nonatomic) NSString *localizedSingularForm; // @synthesize localizedSingularForm=_localizedSingularForm;
@property(retain, nonatomic) NSArray *typeStrings; // @synthesize typeStrings=_typeStrings;
- (id)initWithPayload:(id)arg1;
- (id)initWithManagedBook:(id)arg1;
- (id)initWithManagedAppID:(id)arg1;

@end

