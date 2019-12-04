//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSNumber, NSString;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isBeta;
    NSString *_accountName;
    NSNumber *_accountID;
    NSString *_altDSID;
    NSString *_artworkPath;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_cohort;
    NSString *_deviceVendorID;
    NSNumber *_downloaderID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_installOrder;
    NSNumber *_itemID;
    NSString *_itemName;
    NSNumber *_purchaserDSID;
    NSNumber *_storeFront;
    NSString *_vendorName;
    NSString *_shortVersion;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSNumber *storeFront; // @synthesize storeFront=_storeFront;
@property(copy, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *installOrder; // @synthesize installOrder=_installOrder;
@property(nonatomic) _Bool isBeta; // @synthesize isBeta=_isBeta;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(copy, nonatomic) NSNumber *downloaderID; // @synthesize downloaderID=_downloaderID;
@property(copy, nonatomic) NSString *deviceVendorID; // @synthesize deviceVendorID=_deviceVendorID;
@property(copy, nonatomic) NSString *cohort; // @synthesize cohort=_cohort;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *artworkPath; // @synthesize artworkPath=_artworkPath;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1;

@end

