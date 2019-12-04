//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@class NSPersonNameComponents, NSString;

@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    int _legacyAddressBookIdentifier;
    NSPersonNameComponents *_personNameComponents;
    NSString *_suggestedName;
    NSString *_label;
    NSString *_companyName;
    NSString *_mapName;
    NSString *_location;
    NSString *_contactName;
    NSString *_contactLabel;
    NSString *_callDirectoryLabel;
    NSString *_callDirectoryLocalizedExtensionContainingAppName;
    NSString *_callDirectoryExtensionIdentifier;
    NSString *_contactIdentifier;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int legacyAddressBookIdentifier; // @synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) NSString *callDirectoryExtensionIdentifier; // @synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier;
@property(copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName; // @synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName;
@property(copy, nonatomic) NSString *callDirectoryLabel; // @synthesize callDirectoryLabel=_callDirectoryLabel;
@property(copy, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(copy, nonatomic) NSPersonNameComponents *personNameComponents; // @synthesize personNameComponents=_personNameComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)displayContextByMergingWithDisplayContext:(id)arg1;
- (void)setFirstName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *firstName;
- (id)init;

@end

