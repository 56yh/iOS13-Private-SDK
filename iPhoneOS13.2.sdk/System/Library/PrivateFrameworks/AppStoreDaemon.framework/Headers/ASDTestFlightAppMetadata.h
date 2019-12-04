//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDAppMetadata-Protocol.h>



@class ACAccount, NSArray, NSData, NSNumber, NSString, NSURL;

@interface ASDTestFlightAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>
{
    _Bool _hasMessagesExtension;
    _Bool _launchProhibited;
    ACAccount *_account;
    NSURL *_artworkURL;
    NSString *_bundleID;
    NSString *_companionBundleID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_initialODRSize;
    NSNumber *_itemID;
    NSString *_itemName;
    NSURL *_messagesArtworkURL;
    NSData *_packageDPInfo;
    NSData *_packageSINF;
    NSURL *_packageURL;
    NSArray *_provisioningProfiles;
    NSString *_storeCohort;
    NSNumber *_storeFront;
    NSString *_variantID;
    NSString *_vendorName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property(copy, nonatomic) NSNumber *storeFront; // @synthesize storeFront=_storeFront;
@property(copy, nonatomic) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property(copy, nonatomic) NSArray *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property(copy, nonatomic) NSData *packageSINF; // @synthesize packageSINF=_packageSINF;
@property(copy, nonatomic) NSData *packageDPInfo; // @synthesize packageDPInfo=_packageDPInfo;
@property(copy, nonatomic) NSURL *messagesArtworkURL; // @synthesize messagesArtworkURL=_messagesArtworkURL;
@property(nonatomic, getter=isLaunchProhibited) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property(nonatomic) _Bool hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(copy, nonatomic) NSString *companionBundleID; // @synthesize companionBundleID=_companionBundleID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) long long metadataType;
- (id)initWithBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

