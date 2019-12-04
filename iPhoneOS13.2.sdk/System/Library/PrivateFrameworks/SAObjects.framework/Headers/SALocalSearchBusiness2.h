//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSURL, SALocalSearchOperationHours, SALocation;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>
{
}

+ (id)business2WithDictionary:(id)arg1 context:(id)arg2;
+ (id)business2;
@property(copy, nonatomic) NSArray *reviewList;
@property(copy, nonatomic) NSString *priceRange;
@property(copy, nonatomic) NSData *placeData2;
@property(copy, nonatomic) NSArray *photoList;
@property(copy, nonatomic) NSString *phoneNumber;
@property(retain, nonatomic) SALocalSearchOperationHours *operationHours;
@property(copy, nonatomic) NSArray *offerLists;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSDictionary *identifierMap;
@property(copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property(copy, nonatomic) NSString *extSessionGuid;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *currencySymbol;
@property(copy, nonatomic) NSArray *commands;
@property(copy, nonatomic) NSArray *categories;
@property(copy, nonatomic) NSURL *businessUrl;
@property(retain, nonatomic) SALocation *address;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

