//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDictionary, NSSet, NSString;

@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding>
{
    _Bool _canAutoAccept;
    _Bool _didAutoAccept;
    _Bool _verifiableIdentity;
    _Bool _senderIsMe;
    long long _transferTypes;
    NSString *_contactIdentifier;
    NSString *_senderBundleID;
    NSString *_senderComputerName;
    NSString *_senderEmail;
    NSString *_senderEmailHash;
    NSString *_senderCompositeName;
    NSString *_senderFirstName;
    NSString *_senderLastName;
    NSString *_senderID;
    id _senderIcon;
    id _smallPreviewImage;
    id _previewImage;
    NSString *_itemsDescription;
    NSDictionary *_itemsDescriptionAdvanced;
    NSSet *_items;
    NSArray *_rawFiles;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *rawFiles; // @synthesize rawFiles=_rawFiles;
@property(copy, nonatomic) NSSet *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSDictionary *itemsDescriptionAdvanced; // @synthesize itemsDescriptionAdvanced=_itemsDescriptionAdvanced;
@property(readonly, copy, nonatomic) NSString *itemsDescription; // @synthesize itemsDescription=_itemsDescription;
@property(readonly, nonatomic) id previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) id smallPreviewImage; // @synthesize smallPreviewImage=_smallPreviewImage;
@property(readonly, nonatomic) id senderIcon; // @synthesize senderIcon=_senderIcon;
@property(readonly, copy, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(readonly, copy, nonatomic) NSString *senderLastName; // @synthesize senderLastName=_senderLastName;
@property(readonly, copy, nonatomic) NSString *senderFirstName; // @synthesize senderFirstName=_senderFirstName;
@property(readonly, copy, nonatomic) NSString *senderCompositeName; // @synthesize senderCompositeName=_senderCompositeName;
@property(readonly, copy, nonatomic) NSString *senderEmailHash; // @synthesize senderEmailHash=_senderEmailHash;
@property(readonly, copy, nonatomic) NSString *senderEmail; // @synthesize senderEmail=_senderEmail;
@property(readonly, copy, nonatomic) NSString *senderComputerName; // @synthesize senderComputerName=_senderComputerName;
@property(readonly, copy, nonatomic) NSString *senderBundleID; // @synthesize senderBundleID=_senderBundleID;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) _Bool senderIsMe; // @synthesize senderIsMe=_senderIsMe;
@property(readonly, nonatomic, getter=isVerifiableIdentity) _Bool verifiableIdentity; // @synthesize verifiableIdentity=_verifiableIdentity;
@property(nonatomic) _Bool didAutoAccept; // @synthesize didAutoAccept=_didAutoAccept;
@property(readonly, nonatomic) _Bool canAutoAccept; // @synthesize canAutoAccept=_canAutoAccept;
@property(nonatomic) long long transferTypes; // @synthesize transferTypes=_transferTypes;
- (void)setItemsDescription:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)updateUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInformation:(id)arg1;

@end

