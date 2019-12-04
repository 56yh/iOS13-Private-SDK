//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDescriptor : NSObject
{
    _Bool _newlyAdded;
    NSExtension *_extension;
}

+ (void)setOrderFromPickers:(id)arg1;
+ (id)pickerOrder;
+ (void)_ubiquityIdentityTokenDidChange:(id)arg1;
+ (BOOL)cloudMigrationStatus;
+ (BOOL)cloudEnabledStatus;
+ (void)_updateCloudEnabledStatus;
+ (void)__updateCloudEnabledStatus;
+ (id)descriptorWithIdentifier:(id)arg1;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)manageablePickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)filteredPickersForPickers:(id)arg1 filter:(unsigned long long)arg2;
+ (id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)allPickers;
+ (_Bool)isInAddToiCloudDrive;
+ (_Bool)isContentManaged;
+ (void)setIsContentManaged:(_Bool)arg1;
+ (CDStruct_6ad76789)hostAuditToken;
+ (void)setHostAuditToken:(CDStruct_6ad76789)arg1;
+ (id)hostBundleID;
+ (void)setHostBundleID:(id)arg1;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic, getter=isNewlyAdded) _Bool newlyAdded; // @synthesize newlyAdded=_newlyAdded;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) _Bool enabled;
@property(readonly, copy, nonatomic) NSArray *supportedContentTypes;
- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)imageWithScale:(double)arg1;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSString *nonUIIdentifier;
@property(readonly, retain, nonatomic) NSString *fileProviderDocumentGroup;
- (id)nonUIBundle;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_parentApp;
- (id)_ownBundle;
- (_Bool)supportsPickerMode:(unsigned long long)arg1;
- (long long)compare:(id)arg1;
- (_Bool)pickerEnabledForMode:(unsigned long long)arg1 documentTypes:(id)arg2 reason:(id *)arg3;

@end

