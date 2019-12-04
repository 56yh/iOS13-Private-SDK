//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

#import <SAObjects/SAAceComparable-Protocol.h>

@class NSArray, NSData, NSNumber, NSString, SADistance;

@interface SALocation : SADomainObject <SAAceComparable>
{
}

+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)location;
@property(copy, nonatomic) NSNumber *travelTime;
@property(copy, nonatomic) NSNumber *travelDistance;
@property(copy, nonatomic) NSString *timezoneId;
@property(copy, nonatomic) NSString *thoroughfare;
@property(copy, nonatomic) NSString *subThoroughfare;
@property(copy, nonatomic) NSString *subLocality;
@property(copy, nonatomic) NSString *subAdministrativeArea;
@property(copy, nonatomic) NSString *street;
@property(copy, nonatomic) NSString *stateCode;
@property(retain, nonatomic) SADistance *relativeDistance;
@property(copy, nonatomic) NSString *regionType;
@property(copy, nonatomic) NSString *postalCode;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSData *forwardGeoData;
@property(copy, nonatomic) NSArray *entryPoints;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *city;
@property(copy, nonatomic) NSNumber *accuracy;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

